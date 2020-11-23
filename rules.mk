

# TAKEN FROM lets_split/keymaps/xk

BOOTLOADER = caterina

MCU = atmega32u4

MOUSEKEY_ENABLE = no       # Mouse keys(+4700)
EXTRAKEY_ENABLE = yes       # Audio control and System control(+450)
NKRO_ENABLE = no           # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
USE_I2C = yes
TAP_DANCE_ENABLE = no   #changed from yes to no, maybe will fix errors at end of compiling

CONSOLE_ENABLE = no         # Console for debug(+400)
COMMAND_ENABLE = no         # Commands for debug and configuration
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
MIDI_ENABLE = no            # MIDI controls
AUDIO_ENABLE = no           # Audio output on port C6
UNICODE_ENABLE = yes         # Unicode
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
RGBLIGHT_ENABLE = no        # Enable WS2812 RGB underlight. 
BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration(+1000)


SPLIT_KEYBOARD = yes

# CUSTOM_MATRIX = yes

LAYOUTS = split_3x6_3
# SPLIT_TRANSPORT = custom

