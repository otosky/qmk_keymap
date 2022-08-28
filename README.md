# QMK Keymaps

Without all the forking nonsense.

Heavily adapted from https://github.com/patrick-elmquist/keymaps

## Usage

```sh
# setup venv for qmk if not present & init submodules
make setup

# compile keyboards to `build` dir
make compile-<KEYBOARD_NAME>

# flash keyboard
make <KEYBOARD_NAME>

# rm `build` dir
make clean
```

