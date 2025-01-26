USER = otosky

PATH_reviung34 = reviung/reviung34
PATH_sofle = sofle

.PHONY: reviung34 sofle
reviung34: symlink-reviung34 flash-reviung34 rm-symlink-reviung34 clean
sofle: symlink-sofle flash-sofle rm-symlink-sofle clean

venv:
	[ -d ".venv" ] || (python -m venv .venv && source .venv/bin/activate)
	pip install qmk

gitsubmodule:
	# init submodule
	git submodule update --init --recursive
	git submodule foreach git pull origin master
	git submodule foreach make git-submodule

setup: venv gitsubmodule

symlink-%:
	# cleanup old symlinks
	rm -rf qmk_firmware/keyboards/$(PATH_$*)/keymaps/$(USER)
	rm -rf qmk_firmware/users/$(USER)

	# add new symlinks
	ln -s $(shell pwd)/user qmk_firmware/users/$(USER)
	ln -s $(shell pwd)/$* qmk_firmware/keyboards/$(PATH_$*)/keymaps/$(USER)

rm-symlink-%:
	# cleanup symlinks
	rm -rf qmk_firmware/keyboards/$(PATH_$*)/keymaps/$(USER)
	rm -rf qmk_firmware/users/$(USER)

lint-%:
	# run lint check
	cd qmk_firmware; qmk lint -km $(USER) -kb $(PATH_$*)

flash-%: 
	# run build
	make BUILD_DIR=$(shell pwd)/build -j1 -C qmk_firmware $(PATH_$*):$(USER):flash

flash-left-%: 
	# run build
	make BUILD_DIR=$(shell pwd)/build -j1 -C qmk_firmware $(PATH_$*):$(USER):dfu-split-left

flash-right-%: 
	# run build
	make BUILD_DIR=$(shell pwd)/build -j1 -C qmk_firmware $(PATH_$*):$(USER):dfu-split-right

compile-%:
	# run build
	make BUILD_DIR=$(shell pwd)/build -j1 -C qmk_firmware $(PATH_$*):$(USER)

clean:
	rm -rf ./build
