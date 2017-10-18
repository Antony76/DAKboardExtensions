# DAKboardExtensions

The aim of this project is to provide more features
to the DAKboard (raspberry pi version). The DAK board is
an amazing wifi connected wall display for your photos,
calendar, news and weather.
Create your own DAKboard, a beautiful wall display for your photos,
calendar, news and weather, powered by a Raspberry Pi!
https://dakboard.com

![DAKboard ex](https://github.com/Antony76/DAKboardExtensions/blob/master/docs/DAKBoard_on_the_wall.jpg)

Yup, I'm cheating. My project is not really an extension.
I am just finding a way to switch chromium tabs or application
with an external hardware. External Keybord connected to the 
raspberry for the moment.

## The idea
The DAKboard is very useful and estheticaly perfect but I am expecting
more information from a dashboard. Let's say traffic, specific wind forcast,
trades and so on. DAKboard is actually running a Chromium tab in full
screen mode. Nothing else complicated. What about to open new tabs with
websites to display?

## Technicaly
Arduino Leonardo or Arduino micro are similar to an Arduino UNO,
but they can be recognized by computer as a mouse or keyboard.
All the boards embedding an ATmega32u4. This is not the case of the arduino UNO.
https://store.arduino.cc/arduino-leonardo-with-headers

It is very easy to send keyboard keycode to the raspberry/chromium from
an external keyboard plugged to the arduino GPIOs.
Let's talk about a 4 keys flexible keyboard to stick in front of the display.
Like this one:

<img src="./docs/4keys.png" width="250" height="160" alt="4 keys keybord">
<img src="./docs/12keys.jpg" width="200" height="200" alt="12 keys keybord">


## Setup a free DAKboard based on Raspberry pi

The full setup of the raspberry pi to run DAKboard is detailed here:
https://dakboard.com/blog/diy-wall-display/ <br>
**Go te next step when it's done**

## How to enhance the DAKboard
DAKboard on raspberry is displaying a predefined web page with chromium in full screen mode <br>
Chromium is launched at the startup like this:<br>

>sudo nano ~/.config/lxsession/LXDE-pi/autostart<br>
>@chromium-browser --noerrdialogs --incognito --kiosk http://dakboard.com/app/?p=YOUR_PRIVATE_URL<br>

It's very easy to add tabs. Just add the URL in the lane.<br>

>sudo nano ~/.config/lxsession/LXDE-pi/autostart<br>
>@chromium-browser --noerrdialogs --incognito --kiosk http://dakboard.com/app/?p=YOUR_PRIVATE_URL http://website_opened_in_tab2 http://website_opened_in_tab3 <br>

There is several ways to move in the tab list opened in chromium. Let's focus in this two:<br>
The first one is CTRL+TAB to move to the next tab and CTRL+SHIFT+TAB to move backward. This is quit interesting when a lot of tabs are opened. Only 1 key is requiered to navigate.<br>
The second way is to use CTRL+1 to move to tab 1, CTRL+2 to move to tab 2 and so on. This is a direct access to the webpage when few tabs are opened. A 4 keys keyboard to manage 4 tabs. The 4 keys keyboard stick on the side of the screen make it very discret. This is what I am using.

## Emulate the keyboard with an Arduino


To be continued ...
