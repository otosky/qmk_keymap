if [[ $autoenv_event == 'enter' ]]; then
  export QMK_HOME="$(pwd)/qmk_firmware"
else
  unset QMK_HOME
fi
