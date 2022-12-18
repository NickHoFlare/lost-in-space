# Day 1
## Overview
Arduino pins can be set to be either an input or an output pin.

The Arduino UNO comes with a built-in LED, which is itself, a "pin" on the board. It turns on with a constant signal when plugged in.
When set as an "output" pin, it can be instructed to turn on or off when a HIGH or LOW signal/voltage is applied to that pin.

## Code
### Built-in functions
`setup()`: essentially a constructor. One-time setup upon uploading the program to the board.
`loop()`: The main loop for the program. Essentially a `while(true)` when used in its basic form without arguments.
`digitalWrite(pin, value)`: takes a "pin" identifier as the first arg and "value" as the second. This is used when the pin is used in "output" mode. This function is used to send a signal to the pin. e.g. for the LED, `HIGH` to turn it on, `LOW` to turn it off.
