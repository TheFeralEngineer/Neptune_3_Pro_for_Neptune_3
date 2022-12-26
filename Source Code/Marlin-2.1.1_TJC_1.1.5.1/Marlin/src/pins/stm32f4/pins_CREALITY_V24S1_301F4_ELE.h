/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Creality V24S1_301F4 (STM32F401RC) board pin assignments as found on Ender 3 S1.
 */

#ifndef BOARD_INFO_NAME
  #define BOARD_INFO_NAME "Creality V24S1-301F4"
#endif

#ifndef DEFAULT_MACHINE_NAME
  #define DEFAULT_MACHINE_NAME "Ender-3 S1 F4"
#endif

//
// Limit Switches 
//
#define X_DIAG_PIN                          PA13    // PA13   X-;//PC14 Z+
#define Y_DIAG_PIN                          PB8
#define Z_DIAG_PIN                          PC13

#define X_STOP_PIN                        X_DIAG_PIN
#define Y_STOP_PIN                        Y_DIAG_PIN
#define Z_MIN_PIN                         Z_DIAG_PIN

//
// Z Probe must be this pin
//
#define Z_MIN_PROBE_PIN                     PA15  // PROBE

//
// Temperature Sensors
//
#define TEMP_0_PIN                          PC1   // TH1
#define TEMP_BED_PIN                        PC0   // TB1

//
// Steppers
//
#define X_ENABLE_PIN                        PD2
#define X_STEP_PIN                          PC12
#define X_DIR_PIN                           PB3

#define Y_ENABLE_PIN                        PC10
#define Y_STEP_PIN                          PC11
#define Y_DIR_PIN                           PA15

#define Z_ENABLE_PIN                        PC8
#define Z_STEP_PIN                          PC7
#define Z_DIR_PIN                           PC9

#define E0_ENABLE_PIN                       PC6
#define E0_STEP_PIN                         PB10
#define E0_DIR_PIN                          PB1


//
// LED
//
#define LED3_PIN                            PC6    //照明灯

//
// Heaters / Fans
//
#define HEATER_0_PIN                        PA6    // "HE"
#define HEATER_BED_PIN                      PA5    // "HB"
#define FAN_PIN                             PA7    // "FAN0"

//
// Auto fans
//
#define AUTO_FAN_PIN                        PB0
#ifndef E0_AUTO_FAN_PIN
  #define E0_AUTO_FAN_PIN           AUTO_FAN_PIN
#endif

//
// SD Card
//
#ifndef SDCARD_CONNECTION
  #define SDCARD_CONNECTION              ONBOARD
#endif
#define ONBOARD_SPI_DEVICE                    3
#define ONBOARD_SD_CS_PIN                   PB12   // SDSS
#define SD_DETECT_PIN                       PC3
#define SD_SS_PIN                            -1


#define DISABLE_DEBUG false // DISABLE_(DEBUG|JTAG) is not supported for STM32F4.
#define ALLOW_STM32F4

