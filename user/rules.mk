MOUSEKEY_ENABLE = yes # Mouse keys
EXTRAKEY_ENABLE = yes # Audio control and System control
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

# for boards with encoders
ifeq ($(strip $(ENCODER_ENABLE)), yes)
	ENCODER_ENABLE = yes
endif
