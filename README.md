# FlipperNFCHID
## What this is?
**Work in progress** to create an NFC/RFID reader app that sends the UID to the computer via USB HID (or Bluetooth).
It would be nice to be able to implement a way to use it through _pynfc_.
<br><br>

### Features
- Start Screen
- Menu
- Button Menu
- File Browser
- Text Input
- Number Input
- Different Scenes / Views
- Settings Page (On/Off for haptics, sound, led)
- Handling of Button Inputs
- Handling of Tick events
- Handling of Enter/Exit events
- Rendering to GUI
- Haptic Feedback 
- Sound Effects
- LED Effects
- Dolphin Deeds (make dolphin happy)
- Storage (Saves settings)

## How to install on Flipper Zero
- If you do not have one, download a firmware<br>
- Plug your Flipper Zero in via USB. <br>
- Copy the contents of this folder into the applications_user folder of your firmware. <br> 

Then run the command: 
 ```
.\fbt launch_app APPSRC=applications_user/<your_app_name>
 ```
The application will be compiled and copied onto your device. 

## Licensing
This code is open-source and may be used for whatever you want to do with it. 

## Thank you notes
- [Roguemaster](https://github.com/RogueMaster/flipperzero-firmware-wPlugins) for distributing the boilerplate 
- [Flipc](flipc.org) for distributing the boilerplate
- [Nikita Vostokov](https://github.com/wosk) for code contributions
- [Alexander Rodriguez](https://github.com/squee72564) for code contributions
- [derskythe](https://github.com/derskythe) for code contributions
