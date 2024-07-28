Для компиляции прошивки через стандартный qmk_firmware нужно положить папку **qmmk_pro_VIA** в (Пример) C:\Users\username\qmk_firmware\keyboards\gmmk\pro\rev1\ansi\keymaps\

Для компиляции **qmmk_pro_OpenRGB** нужно сначала следовать инструкциям пользователя https://www.reddit.com/user/ringowu1234/ 

<details>
  <summary>Сообщение с Реддита</summary>
  Below are the steps I took to enable OpenRGB on my GMMK Pro. As mentioned in many places, I followed this guide for most part, with some modification after encountering issues. I have no prior coding nor QMK experience. Any suggestions/corrections welcomed.

First, install QMK MSYS from here. Once installation is finished, DO NOT DO "QMK SETUP". I will explain this later.

Install Git from here.

Then, from the guide:

Open the QMK-MSYS application and type into the command prompt

git clone -b HorrorTroll --recurse-submodules https://github.com/MichaelDavidGK/QMK-OpenRGB.git

Make sure you have git installed otherwise this won't work. This will install a file titled 'QMK-Open RGB' in you user space (uness you cd to another file location and it should save there) that will contain all of the files related to OpenRGB compatible keyboards as well as install all submodules.

After this, change the name of the file downloaded above from "QMK-OpenRGB" to "QMK_FIRMWARE" (explaination below).

Then you continue on with the guide. you should have no trouble compiling your own OpenRGB enabled keymap (xxxx.bin). You then flash it to the keyboard with qmk_toolbox.

Once flashed, in OpenRGB, open settings tab, find OpenRGB QMK Protocol, click "add", fill this in:

NAME: GMMK Pro

USB VID: 320f

USB PID: 5044

Hit Save, then restart OpenRGB, click rescan devices button, and your GMMK Pro should be showing up now.

Changing the file name is the step missing the from the original guide, which ultimately fixed the issue for me. I spent hours of trial and error to find the cause:

When you compile keymap to xxxx.bin, qmk_toolbox will search for files in "QMK_FIRMWARE" folder, not "QMK-OpenRGB".

Normally, you download the "QMK_FIRMWARE" folder by entering "QMK SETUP" in QMK MSYS . Without this folder, qmk_toolbox will have no target to compile, resulting in error codes.

However the "QMK_FIRMWARE" folder you get from "QMK SETUP" is the non-OpenRGB version.

Therefore you have to change the folder name so the "QMK_FIRMWARE" folder contains OpenRGB files.

</details>

Цитата: 
Так же есть готовая прошивка 

### features

- via enable
- rgb matrix reactive and animation modes enabled
- disable rgb when usb is suspended
- mouse control
	- fn+ralt+arrow keys to move
	- fn+ralt+enter = left click
	- fn+ralt+rshift = right click
	- fn+ralt+rotary = scroll up/down (click for middle click)
- fn+n = toggle n key rollover

### changes

- fn+space to reset (instead of fn+backslash)
- fn+del = ins
- fn+pgup = pause/break (brightness up on macos)
- fn+pgdn = scroll lock (brightness down on macos)
- fn+end = app menu
- lower left mod key cluster = media controls
	- fn+lctrl = prev
	- fn+lsuper = play/pause
	- fn+lalt = next
	- fn+lshift = stop
- function keys = 2nd row function keys
	- fn+f1 = f13
	- fn+f2 = f14
	- ...
	- fn+f12 = f24
- fn + arrow keys used for nav
	- fn + left = home
	- fn + right = end
	- fn + up = page up
	- fn + down = page down
- rgb control moved to qwer/asdf + z/x + t
	- fn+q/a = hue increase/decrease
	- fn+w/s = saturation increase/decrease
	- fn+e/d = value increase/decrease
	- fn+r/f = speed increase/decrease
	- fn+z = rgb mode forward
	- fn+x = rgb mode reverse
	- fn+t = rgb toggle

### rgb effects enabled

sidebars are constant rainbow. alpha and capslock turn red when caps is on

- solid color
- rainbow gradient
	- gradient up down
	- gradient left right
- breathing
- rainbow cycles
	- cycle all
	- cycle left right
	- cycle up down
	- cycle out in
	- cycle out in dual
	- cycle pinwheel
	- cycle spiral
	- rainbow beacon
	- rainbow pinwheels
- reactive
	- splash
	- multisplash
	- solid splash
	- solid multisplash

### layers

source code for keyboard layout editor images here: https://gist.github.com/trwnh/94e48f132c49043373918df29409ab48

#### layer 0

![](https://i.imgur.com/P1hSkZT.png)

#### layer 1

![](https://i.imgur.com/qqiObxP.png)

#### layer 2

![](https://i.imgur.com/W0i1D0C.png)

### misc

i am taking suggestions for possible improvements to this keymap; you may contact me via the following

- email: mailto:a@trwnh.com
- chat: xmpp:a@trwnh.com
- fediverse: https://mastodon.social/@trwnh