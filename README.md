# Digital Dice with Seven-Segment Display Using Arduino

This repository contains the Arduino code, configuration, and assembly instructions for building a digital dice using an Arduino and a seven-segment display. The system generates random numbers (1–6) and displays them on the seven-segment display, mimicking the behavior of a traditional dice <button class="citation-flag" data-index="9">. This project is ideal for beginners and hobbyists who want to explore basic electronics and programming.

---

## Table of Contents
1. [Overview](#overview)
2. [Components Used](#components-used)
3. [System Dimensions](#system-dimensions)
4. [Assembly Instructions](#assembly-instructions)
5. [Arduino Code Explanation](#arduino-code-explanation)
6. [Contributing](#contributing)
7. [License](#license)

---

## Overview
The digital dice uses a seven-segment display to show random numbers generated by the Arduino. When a push button is pressed, the Arduino generates a random number between 1 and 6 and displays it on the seven-segment display <button class="citation-flag" data-index="4">. This project is a great way to learn about random number generation, digital output control, and basic electronics.

---

## Components Used
To build this digital dice, you will need the following components:
- **Arduino Uno**
- **Common Cathode Seven-Segment Display**
- **Tactile Push Button**
- **220Ω Resistors**
- **Breadboard**
- **Jumper Wires**

---

## System Dimensions
For an ideal digital dice:
- **Height**: 10–15 cm
- **Width**: 10–15 cm
- **Length**: 10–15 cm

These dimensions ensure that the system is compact yet spacious enough to house all components.

---

## Assembly Instructions
Follow these detailed steps to assemble your digital dice:

1. **Prepare the Seven-Segment Display**
   - Connect the seven-segment display to the Arduino using the following pin configuration:
     - **Segment a** → Digital Pin 2
     - **Segment b** → Digital Pin 3
     - **Segment c** → Digital Pin 4
     - **Segment d** → Digital Pin 5
     - **Segment e** → Digital Pin 6
     - **Segment f** → Digital Pin 7
     - **Segment g** → Digital Pin 8
   - Use 220Ω resistors in series with each segment to limit current. For example, connect one end of a resistor to Digital Pin 2 and the other end to the "a" segment of the display. Repeat this process for all segments (a–g) <button class="citation-flag" data-index="7">.

2. **Connect the Common Pin of the Seven-Segment Display**
   - If using a **common cathode** display, connect the common pin (usually labeled as "COM") to the GND pin on the Arduino.
   - If using a **common anode** display, connect the common pin to the 5V pin on the Arduino <button class="citation-flag" data-index="7">.

3. **Connect the Push Button**
   - Connect one terminal of the push button to the 5V pin on the Arduino.
   - Connect the other terminal to Digital Pin 9 on the Arduino.
   - Add a 10kΩ pull-down resistor between Digital Pin 9 and GND to ensure stable input readings <button class="citation-flag" data-index="3">.

4. **Power Connections**
   - Power the system using a USB cable connected to the Arduino's power input. Ensure the USB cable provides sufficient power (5V).

5. **Final Assembly**
   - Secure all components inside a protective enclosure.
   - Position the seven-segment display and push button for easy access.
   - Double-check all connections to ensure there are no loose wires or incorrect pin assignments.

---

## Arduino Code Explanation
The provided Arduino code generates random numbers between 1 and 6 and displays them on the seven-segment display. The code uses predefined patterns for each number to control the segments of the display <button class="citation-flag" data-index="3">. When the push button is pressed, the Arduino generates a random number and updates the display accordingly.

---

## Contributing
Feel free to fork this repository and contribute improvements or new features. If you have suggestions or find bugs, please open an issue.

---

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

By following this guide, you should be able to build and test your own digital dice using the Arduino and a seven-segment display. Happy tinkering! 🚀
