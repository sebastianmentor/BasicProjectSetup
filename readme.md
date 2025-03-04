# Simple setup for simulating arduino

## Dependencies
Assumes that https://blog.zakkemble.net/avr-gcc-builds/ is downloaded and extrakted and put in a folder atS C:/avr

You also need to set the windows environment variables.
1. In you windows serach bar, search for "Edit the system environment variables" and select it
2. Press the "Environment Variables.." button
3. Click on path and then "Edit.."
4. Add C:/avr/bin to your path! 

### wokwi in vs-code
Make sure you have downloaded the wokwi extension in vs-code. If not:
1. Select extensions in vs-code
2. Search for wokwi + download/install the extension
3. When done, press F1 and search for wokwi
4. Select the "Wokwi: Request a New Licens" and follow the instructions

## to run
Open a terminal when you are in your projekt and type:
```bash
make
```

Then in VS-code you only need to click on the diagram.json and press play! 

## Note
If you change the PROJECT variable in the MAKEFILE you also need to change it in the wokwi.toml file such that it will point on the correct .hex and .elf files!