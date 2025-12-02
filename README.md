## For security reasons, only upload photos.
Both Firmware and Hardware are locked.

## FULLMONI-WIDE
![FM1](IMG/FM2.png)<br>
![FM1](IMG/FM3.png)<br>
## Project Overview
FULLMONI-WIDE is an open hardware project for automotive digital meters.
It receives vehicle information sent from the ECU via CAN bus and displays it on an 800x256 full-color LCD screen.
In addition to a dedicated chassis for the Mazda Roadster NA, it also supports general-purpose chassis.

## Technology Stack
- **Microcontroller:** Renesas RX72N (RXv3 core, 240MHz, 4MB Flash, 1MB SRAM, GLCDC)
- **IDE:** Renesas e²studio + GCC-RX
- **Graphics:** SEGGER emWin (via QE for Display, AppWizard compatible)
- **Drivers:** Smart Configurator generated code and FIT modules
- **Peripheral Functions:** CAN, I²C, ADC, timer, external EEPROM, Neopixel-compatible LED

## Directory Structure
- `Firmware/` – Microcontroller firmware (C language)
- `Hardware/` – Schematic, PCB, and enclosure design files
- `IMG/` – Project-related images
- `debug_env/` – CAN simulation environment using BusMaster
- `.github/` – CI/CD settings
- Other project configuration files, license, README

## Main Features
- Real-time display of engine RPM, vehicle speed, temperature, pressure, and voltage
- 800x256 dot 16-bit color LCD display with brightness adjustment
- 8 RGB LEDs (Neopixel) for shift lights and warnings
- Odometer and trip log recording via external EEPROM
- Up to 8 analog inputs, supports vehicle speed pulse input
- Circuit and board design released under MIT license

## Distinctive Design Philosophy
- Recycled discontinued parts from old vehicles using modern technology
- Aiming for a simple, genuine-looking appearance
- Philosophy that views functionality as aesthetics
- Modular design divided into main board, LED board, and interface board
- Both hardware and software released as open source

## Development Roadmap (Simplified Version)
A roadmap showing future improvement policies and priorities.

- **High Priority**
- TypeN model development
- Data processing and display processing refactoring
- User repro support (priority)
- Documentation expansion (specification explanation, environment setup, build, and programming procedures)

- **Medium Priority**
- Secure repro support (OTA)
- Test environment enhancements (BusMaster scenario organization, unit test additions)
- Expansion guide development (sensor addition procedures, GUI theme customization examples)

- **Low Priority**
- Use case sharing (vehicle installation examples, operation videos)
