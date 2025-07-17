# Soil Moisture Monitor 
This is a basic Arduino project that checks if the soil is dry using a soil moisture sensor.  
If the soil is too dry, it turns on an LED as an alert.

## How it works
- I used a soil moisture sensor connected to analog pin A0.
- The LED is connected to digital pin D8.
- When the moisture reading goes above a certain value (meaning it's dry), the LED turns on.
- The code prints the moisture value to the Serial Monitor so I can see it change in real-time.

## Hardware used
- Arduino Uno
- Soil moisture sensor (capacitive or resistive type)
- LED
- 220 ohm resistor
- Breadboard and jumper wires
- USB cable for power and upload

## Notes
- The threshold value for dryness can be adjusted in the code (`dryThreshold`).
- The moisture values go higher when the soil is dry, and lower when it's wet.
- You can open the Serial Monitor (Ctrl + Shift + M) to see live readings.

## To run it
1. Open the `.ino` file in the Arduino IDE.
2. Upload it to your board.
3. Open the Serial Monitor (set it to 9600 baud).
4. Touch or water the sensor and watch the LED react!

