# Day 3
## Overview
A switch can be connected to one of the pins (pin 2 in today's case), which can be set to be an input pin, so that the state of the switch can be used as "input" by the arduino board, to determine an outcome in the output pins, where it is relevant.

## Electronics
When setting up the switch, we **could** set up the circuit such that it goes straight from 5V -> switch -> pin 2, however, to ensure an accurate read of the state(voltage) of the current flowing through the switch, we have to apply a resistor to bridge the gap between the GND and the board.

### Pull-down resistors
[Pull-down resistors](https://eepower.com/resistor-guide/resistor-applications/pull-up-resistor-pull-down-resistor/#)
> Pull-down resistors work in the same manner as pull-up resistors, except that they pull the pin to a logical low value. They are connected between ground and the appropriate pin on a device. 

> In such a circuit, when the switch is closed, the microcontroller input is at a logical high value, but when the switch is open, the pull-down resistor pulls the input voltage down to ground (logical zero value), preventing an undefined state at the input. The pull-down resistor must have a larger resistance than the impedance of the logic circuit, or else it might be able to pull the voltage down by too much and the input voltage at the pin would remain at a constant logical low value – regardless of the switch position.