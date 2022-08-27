USER = otosky

KEYBOARDS = reviung34
PATH_reviung34 = reviung/reviung34

venv:
	[ -d ".venv" ] || (python -m venv .venv && source .venv/bin/activate)
	pip install qmk

gitsubmodule:
	# init submodule
	git submodule update --init --recursive
	git submodule foreach git pull origin master
	git submodule foreach make git-submodule

setup: venv gitsubmodule

all: $(KEYBOARDS)

.PHONY: $(KEYBOARDS)
$(KEYBOARDS):
	# cleanup old symlinks
	for f in $(KEYBOARDS); do rm -rf qmk_firmware/keyboards/$(PATH_$@)/keymaps/$(USER); done
	rm -rf qmk_firmware/users/$(USER)

	# add new symlinks
	ln -s $(shell pwd)/user qmk_firmware/users/$(USER)
	ln -s $(shell pwd)/$@ qmk_firmware/keyboards/$(PATH_$@)/keymaps/$(USER)

	# run lint check
	cd qmk_firmware; qmk lint -km $(USER) -kb $(PATH_$@) --strict

	# run build
	make BUILD_DIR=$(shell pwd)/build -j1 -C qmk_firmware $(PATH_$@):$(USER)

	# cleanup symlinks
	for f in $(KEYBOARDS); do rm -rf qmk_firmware/keyboards/$(PATH_$@)/keymaps/$(USER); done
	rm -rf qmk_firmware/users/$(USER)

clean:
	rm -rf ./build
