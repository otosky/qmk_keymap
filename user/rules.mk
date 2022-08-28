MOUSEKEY_ENABLE = yes # Mouse keys
EXTRAKEY_ENABLE = yes # Audio control and System control
AUTO_SHIFT_ENABLE = yes # Auto Shift
LEADER_ENABLE = yes
COMBO_ENABLE = yes

SRC += combo.c 
SRC += otosky.c 
EXTRAFLAGS += -flto

# for boards with oled displays 
ifeq ($(strip $(DISPLAY_ENABLE)), yes)
  OLED_ENABLE = yes
  OLED_DRIVER = SSD1306
endif

# for my boards with rgb matrices
ifeq ($(strip $(RGB_ENABLE)), yes)
	RGB_MATRIX_ENABLE = yes
	RGB_MATRIX_DRIVER = WS2812
	OPTDEFS	+= -DRGB_ENABLE
endif
