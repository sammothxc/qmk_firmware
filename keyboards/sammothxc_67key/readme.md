# sammothxc_67key

*A 67-key minimalist keyboard with 2 rotary encoders*

![layer0.png](keymaps/default/layer0.png)

Keyboard Maintainer: [sammothxc](https://github.com/sammothxc)



Features:
* 67 keys
* 2 rotary encoders *(to be implemented)*
* WS2812B RGB underglow *(to be implemented)*
* Elite-C Pro Micro microcontroller
* USB-C
* QMK Bootloader

## Building

Make example for this keyboard (after setting up your build environment):

    make sammothxc_67key:default

Flashing example for this keyboard:

    make sammothxc_67key:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Before flashing, enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

After flashing, the bootloader can now be entered by pressing the lower FN key and Esc simultaneously.

![layer1.png](keymaps/default/layer1.png)