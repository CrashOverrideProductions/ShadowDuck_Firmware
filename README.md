# ShadowDuck Firmware

<!-- Repo Cover Image -->
<p align="center">
<img align="center" src="https://github.com/KobolSystems/ShadowDuck_Firmware/blob/main/repoLogo.png?raw=true" width="450px"/>
</p>


## Something
The Shadow Duck is a hardware platform designed for performing keystroke injection attacks. Our goal with this platform is to provide a budget-friendly, educational, and ethical pen-testing tool that resembles a legitimate USB stick, avoiding unnecessary scrutiny. We aim to give newcomers to cybersecurity the opportunity to experiment with these tools and eventually apply their skills in legitimate, professional roles within the industry.

## Changelog  <img alt="" align="right" src="https://img.shields.io/github/last-commit/KobolSystems/ShadowDuck_Firmware" />
All notable changes to this project will be documented in this file.

## 1.0 2024-05-22
- Migrated Arduino INO project to PlatformIO
- USBNova.ino renamed to main.cpp
- Added includes for Arduino.h to main.cpp
- Moved all "src" files to "src" folder and updated main.cpp
- Moved "config.h" and "debug.h" to includes folder
- Updated "hid.h" reference for config.h
- Updated "include/attack/attack.cpp" enclosed debug function calls with "#ifdef ENABLE_DEBUG"
- Updated "include/cli/cli.cpp" includes to updated locations
- Updated "include/duckparser/duckparser.cpp" includes to updated locations
- Updated "include/led/led.cpp" includes to updated locations
- Updated "include/msc/format.cpp" enclosed debug function calls with "#ifdef ENABLE_DEBUG"
- Updated "include/msc/msc.cpp" includes to updated locations
- Updated "include/msc/msc.cpp" enclosed debug function calls with "#ifdef ENABLE_DEBUG"
- Updated "include/preferences/preferences.cpp" includes to updated locations
- Updated "include/selector/selector.cpp" includes to updated locations
- Included external libries in platformio.ini -	spacehuhn/SimpleCLI @ ^1.1.4, adafruit/Adafruit TinyUSB Library @ ^2.2.3,  bblanchon/ArduinoJson @ ^6.21.3

**Build Params**
```ini
; PlatformIo.ini
[env:pico]
platform = https://github.com/maxgerhardt/platform-raspberrypi.git
board = pico
framework = arduino
board_build.core = earlephilhower
board_build.filesystem_size = 1m
board_build.f_cpu = 133000000L
build_flags = -DUSE_TINYUSB
lib_deps = 
	spacehuhn/SimpleCLI @ ^1.1.4
    adafruit/Adafruit TinyUSB Library @ ^2.2.3
    bblanchon/ArduinoJson @ ^6.21.3
```


 
## Current Builds <img alt="" align="right" src="https://img.shields.io/github/v/release/KobolSystems/ShadowDuck%20Firmware" />

| Version | Notes                          | Link                                                                                     |
|:-------:|--------------------------------|:-----------------------------------------------------------------------------------------|
| 1.0     | PlatformIO Port of USBNova F/W | [Link](https://github.com/KobolSystems/ShadowDuck_Firmware/releases/tag/PlatformIO-Port) |



## Latest Build Status
<p align="right">
<img align="center" src="https://cdn.platformio.org/images/platformio-logo.17fdc3bc.png" width="125px"/>
</p>

```C++
Verbose mode can be enabled via `-v, --verbose` option
CONFIGURATION: https://docs.platformio.org/page/boards/raspberrypi/pico.html
PLATFORM: Raspberry Pi RP2040 (1.12.0+sha.503933d) > Raspberry Pi Pico
HARDWARE: RP2040 133MHz, 264KB RAM, 2MB Flash
DEBUG: Current (blackmagic) External (blackmagic, cmsis-dap, jlink, pico-debug, picoprobe, raspberrypi-swd)
PACKAGES:
 - framework-arduinopico @ 1.30800.0+sha.d53d003
 - tool-rp2040tools @ 1.0.2
 - toolchain-rp2040-earlephilhower @ 5.120300.240125 (12.3.0)
Flash size: 2.00MB
Sketch size: 1.00MB
Filesystem size: 1.00MB
Maximium Sketch size: 1044480 EEPROM start: 0x101ff000 Filesystem start: 0x100ff000 Filesystem end: 0x101ff000
LDF: Library Dependency Finder -> https://bit.ly/configure-pio-ldf
LDF Modes: Finder ~ chain, Compatibility ~ soft
Found 63 compatible libraries
Scanning dependencies...
Dependency Graph
|-- SimpleCLI @ 1.1.4
|-- Adafruit TinyUSB Library @ 2.4.1
|-- ArduinoJson @ 6.21.5
|-- Adafruit NeoPixel @ 1.12.2
|-- Adafruit SPIFlash @ 4.3.4
|-- SdFat - Adafruit Fork @ 2.2.3
|-- SPI @ 1.0
Building in release mode
...
...
Generating UF2 image
elf2uf2 ".pio\build\pico\firmware.elf" ".pio\build\pico\firmware.uf2"
Retrieving maximum program size .pio\build\pico\firmware.elf
Flash size: 2.00MB
Sketch size: 1.00MB
Filesystem size: 1.00MB
Maximium Sketch size: 1044480 EEPROM start: 0x101ff000 Filesystem start: 0x100ff000 Filesystem end: 0x101ff000
Checking size .pio\build\pico\firmware.elf
Advanced Memory Usage is available via "PlatformIO Home > Project Inspect"
RAM:   [=         ]   8.4% (used 22148 bytes from 262144 bytes)
Flash: [==        ]  16.2% (used 168732 bytes from 1044480 bytes)
Building .pio\build\pico\firmware.bin
Building .pio\build\pico\firmware.bin.signed
=========================================================================================== [SUCCESS] Took 48.15 seconds ===================================================================================
```




## Licencing <img alt="" align="right" src="https://img.shields.io/badge/Licence-MIT-informational?style=flat&logoColor=white&color=FF9421" />

**MIT - LICENCE**

Copyright (c) 2024 Kobol Systems

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
