# SoftwareSerial_MC9S08QD4
Bit Banging a UARTless chip. Allows for any of the pins to become TX and RX pins. Tested with FTDI basic and Tera Term on windows. 

This only really allows for sending charachters, and only works at a baud of 9800.

## Setup
- All you need you to is create a bitIO component called Serial.

## Usage
- To transmit data, you use sendByte(), using a char(e.g. 's'), int, or hex value as the parameter.
