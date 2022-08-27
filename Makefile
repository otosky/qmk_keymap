venv:
	python -m venv .venv && source .venv/bin/activate
	python -m pip install --upgrade pip
	pip install qmk

gitsubmodule:
	# init submodule
	git submodule update --init --recursive
	git submodule foreach git pull origin master
	git submodule foreach make git-submodule


