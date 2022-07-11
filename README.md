# Sweepy - A Ferris Sweep Variation
This is a keyboard featuring a 3x5 layout with 3 thumb keys on each side. A new variation based on Ferris Sweep, built by Heart. This adds an additional 2 keys on the thumbs, turning the originally 34-key layout of the Ferris Sweep, into a 36-key layout. Thanks to heart, the keyboard has kept the diodeless configuration and supports hotswap only, although the keyboard is not yet made public as of now. The layout was originally compiled by Semilin, although it had some fixes that had to be made, specifically on pin configuration.

Ferris Sweep Repository: https://github.com/davidphilipbarr/Sweep </br>
Heart's Alternate Keyboard Repository: https://github.com/mindhatch/keyboards


# Features 
As mentioned earlier, the keyboard is diodeless, with the catch that it has to use an Elite-C Microcontroller Unit. This is due to the extra pins needed compared to a normal Pro-Micro Microcontroller Unit. Designed by Heart. 

Moving on to the software features, to preface, the keyboard utilizes Homerow Mods for modifier usage (Shift, Control, Alt, Windows Key). Homerow Mods refer to the usage of tapping and holding configurations of keys, whereby if you tap, it'll return the normal key. But when you hold the key and it exceeds a certain time limit, namely the Tapping Term, a modifier would activate. This comes with some setbacks such as misfires, but once configured properly, in this case it is set to 175ms, it can be very comfortable to type on. Homerow mods are located on the Home Row of a keyboard.

Combos are the only other special feature that is used inside this keymap. Combos are activated through pressing a sequence of keys, regardless of order, under a certain time limit, namely Combo Term. It is generally set around 40ms-50ms. It is mainly used as macros to type long strings that are predetermined such as emails, common directories and such. But due to no space for the Enter Key to fit that was appropriate, it has been put on a combo, which consists of the Comma, Dot, and Quotation key. 

# Keymap
The meat of the keyboard, the keymap. There are 5 Layers used in this configuration which are: APT, NUM, SYM, NAV, and FUNC. 

**APT**
---
![image](https://user-images.githubusercontent.com/83165406/178300973-b16fef5f-5829-46bb-9c6c-da11c6994113.png) </br>
This is the main layer that features the homerow mods. Acts as an intermediate between all the other layers and can be considered the hub of the layouts. Layout is made by Apsu. 

APT Repository: https://github.com/apsu/apt

**NUMBER**
---
![image](https://user-images.githubusercontent.com/83165406/178301096-db472e74-b0fb-45e5-aed4-7b66848ba542.png) </br>
This is the number layer, arranged as a numpad for convenience as opposed to the traditional horizontal alignment.

**SYMBOL**
---
![image](https://user-images.githubusercontent.com/83165406/178301186-69c8161a-2027-44c2-8830-a2d1f1ee9994.png) </br>
This is the symbols layer, some symbols are repeated but will be fixed soon...hopefully.

**NAVIGATION**
---
![image](https://user-images.githubusercontent.com/83165406/178301387-2f0ce9ca-6976-4273-84dc-df01e35ade6f.png) </br>
This is the navigation layer, as self explanatory as it gets. Arrow keys are located here.

**FUNCTION**
---
![image](https://user-images.githubusercontent.com/83165406/178301471-315a5e79-4ff3-4db1-8d6e-0416a41efb1e.png) </br>
This is the function layer, it has modifiers, function keys and also mouse movements.


