
# QMK Firmware Compilation Guide

## Table of Contents
1. [QMK Firmware Compilation](#qmk-firmware-compilation)
2. [QMK Pro for OpenRGB](#qmk-pro-for-openrgb)
3. [OpenRGB Guide](#openrgb-guide)
4. [Ready Firmware](#ready-firmware)
5. [Layers](#layers)
6. [Miscellaneous](#miscellaneous)
7. [Acknowledgments](#acknowledgments)

## QMK Firmware Compilation

To compile the firmware using the standard `qmk_firmware`, place the folder **`qmmk_pro_VIA`** in:

```plaintext
C:\Users\username\qmk_firmware\keyboards\gmmk\pro\rev1\ansi\keymaps\
```

## QMK Pro for OpenRGB

To compile **`qmmk_pro_OpenRGB`**, follow the instructions by [ringowu1234 on Reddit](https://www.reddit.com/user/ringowu1234/).

### GMMK Pro Address for OpenRGB

- **NAME:** GMMK Pro
- **USB VID:** 320f
- **USB PID:** 5044

## OpenRGB Guide

For understanding, refer to the following guides:
- [Beginner General Guide to Getting Feker IK75 QMK/VIA Version (and other keebs) Working with OpenRGB](https://www.reddit.com/r/OpenRGB/comments/xmaisz/beginner_general_guide_to_getting_feker_ik75/)
- [GMMK Pro OpenRGB QMK Complete. How to Add Per Key Adjustment function?](https://www.reddit.com/r/OpenRGB/comments/ysu3u7/gmmk_pro_openrgb_qmk_complete_how_to_add_per_key/)
- [Compilation of Firmware for OpenRGB not Possible from Standard qmk_firmware](https://www.reddit.com/r/OpenRGB/comments/105djz3/comment/j3vfnxc/)

If the links are unavailable:

<details>
  <summary>Beginner General Guide to Getting Feker IK75 QMK/VIA Version (and other keebs) Working with OpenRGB</summary>
  [Beginner General Guide](https://github.com/GoXLd/gmmk-pro-OpenRGB/blob/main/files/begginer_guide.pdf)
</details>

<details>
  <summary>GMMK Pro OpenRGB QMK Complete. How to Add Per Key Adjustment function?</summary>
  [How to Add Per Key Adjustment](https://github.com/GoXLd/gmmk-pro-OpenRGB/blob/main/files/GMMK_PRO_OpenRGB.pdf)
</details>

<details>
  <summary>Compilation of Firmware for OpenRGB not Possible from Standard qmk_firmware</summary>
  Below are the steps I took to enable OpenRGB on my GMMK Pro. As mentioned in many places, I followed this guide for the most part, with some modification after encountering issues. I have no prior coding nor QMK experience. Any suggestions/corrections welcomed.
  
  First, install QMK MSYS from [here](https://qmk.fm/msys/). Once installation is finished, DO NOT RUN `qmk setup`. I will explain this later.
  
  Install Git from [here](https://git-scm.com/).
  
  Then, follow the guide:
  
  Open the QMK-MSYS application and type into the terminal:
  
  ```bash
  git clone https://github.com/qmk/qmk_firmware.git --recurse-submodules
  cd qmk_firmware
  qmk setup
  ```

  This will install a file titled `QMK-OpenRGB` in your user space (unless you change the directory) that will contain all files related to OpenRGB compatible keyboards and will install all submodules.

  After this, rename the downloaded file from "QMK-OpenRGB" to "QMK_FIRMWARE" (explanation below).

  Continue with the guide. You should have no trouble compiling your own OpenRGB enabled keymap (`xxxx.bin`). Flash it to the keyboard with qmk_toolbox.

  Once flashed, in OpenRGB, open the settings tab, find OpenRGB QMK Protocol, click "add", and fill in:

  - **NAME:** GMMK Pro
  - **USB VID:** 320f
  - **USB PID:** 5044

  Hit Save, then restart OpenRGB, click the rescan devices button, and your GMMK Pro should appear.

  Changing the file name is the missing step from the original guide, which ultimately fixed the issue for me. I spent hours of trial and error to find the cause:

  When you compile the keymap to `xxxx.bin`, qmk_toolbox will search for files in the "QMK_FIRMWARE" folder, not "QMK-OpenRGB".

  Normally, you download the "QMK_FIRMWARE" folder by entering "QMK SETUP" in QMK MSYS. Without this folder, qmk_toolbox will have no target to compile, resulting in error codes.

  However, the "QMK_FIRMWARE" folder you get from "QMK SETUP" is the non-OpenRGB version.

  Therefore, you have to change the folder name so the "QMK_FIRMWARE" folder contains OpenRGB files.
</details>

## Ready Firmware

Pre-compiled firmware:

- QMMK Open RGB
- QMMK VIA

## Layers

Source code for keyboard layout editor images can be found [here](https://gist.github.com/trwnh/94e48f132c49043373918df29409ab48).

### Layer 0

![Layer 0](https://github.com/GoXLd/gmmk-pro-OpenRGB/blob/main/files/layer0.png)

### Layer 1

![Layer 1](https://github.com/GoXLd/gmmk-pro-OpenRGB/blob/main/files/layer1.png)

### Layer 2

![Layer 2](https://github.com/GoXLd/gmmk-pro-OpenRGB/blob/main/files/layer2.png)

## Miscellaneous

Special thanks to:

- [@trwnh (GitHub)](https://github.com/trwnh)
- [@ringowu1234 (Reddit)](https://www.reddit.com/user/ringowu1234/)
- [@Ryuu_Dango (Reddit)](https://www.reddit.com/user/Ryuu_Dango)
