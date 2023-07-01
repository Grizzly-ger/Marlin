/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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
 * Tenlog D3 Hero pin assignments
 * ATmega2560
 */

#define REQUIRE_MEGA2560
#include "env_validate.h"

#if HOTENDS > 2 || E_STEPPERS > 2
  #error "BNC3D ELEC supports up to 2 hotends / E steppers."
#endif

#define BOARD_INFO_NAME      "BNC3D ELEC"
#define DEFAULT_MACHINE_NAME BOARD_INFO_NAME

// //
// // Servos
// //
// #define SERVO0_PIN                            11
// #define SERVO1_PIN                             6
// #define SERVO2_PIN                            -1  // Original pin 5 used for hotend fans
// #define SERVO3_PIN                             4

//
// Limit Switches
//
#define X_MIN_PIN                              77
#define X_MAX_PIN                              79
#define Y_MIN_PIN                              33
#define Y_MAX_PIN                              -1
#define Z_MIN_PIN                              34
#define Z_MAX_PIN                              -1
#define Z2_MIN_PIN                             43
#define Z2_MAX_PIN                             -1

//
// Z Probe (when not Z_MIN_PIN)
//
// #ifndef Z_MIN_PROBE_PIN
//   #define Z_MIN_PROBE_PIN                     Z_MIN_PIN  // Ramps is normally 32
// #endif

//
// Steppers
//
#define X_STEP_PIN                            5
#define X_DIR_PIN                             3
#define X_ENABLE_PIN                          2

//#define HAS_X2_STEPPER
#define X2_STEP_PIN                           73
#define X2_DIR_PIN                            76
#define X2_ENABLE_PIN                         75

#define Y_STEP_PIN                            30
#define Y_DIR_PIN                             32
#define Y_ENABLE_PIN                          31

#define Z_STEP_PIN                            25
#define Z_DIR_PIN                             23
#define Z_ENABLE_PIN                          24

// #define Z2_STEP_PIN                           65
// #define Z2_DIR_PIN                            66
// #define Z2_ENABLE_PIN                         64

#define E0_STEP_PIN                           29
#define E0_DIR_PIN                            27
#define E0_ENABLE_PIN                         28
#define E0_STOP		    26

#define E1_STEP_PIN                           57
#define E1_DIR_PIN                            55
#define E1_ENABLE_PIN                         56
#define E1_STOP		    A0

//
// Temperature Sensors
//
#define TEMP_0_PIN                            9  // Analog Input
#define TEMP_1_PIN                            8  // Analog Input
// #define TEMP_2_PIN                            -1  // Analog Input // was Defined
#define TEMP_BED_PIN                          15  // Analog Input

// // SPI for MAX Thermocouple
// #if !HAS_MEDIA
//   #define TEMP_0_CS_PIN                       -1  // Don't use 53 if using Display/SD card
// #else
//   #define TEMP_0_CS_PIN                       -1  // Don't use 49 (SD_DETECT_PIN)
// #endif

//
// Heaters / Fans
//
#define HEATER_0_PIN                          44
#define HEATER_1_PIN                          7
// #define HEATER_2_PIN                          -1 // was Defined
#define HEATER_BED_PIN                         46

#define FAN0_PIN                               45
#define FAN1_PIN                               6  // Normally this would be a servo pin

// XXX Runout support unknown?
// #define NUM_RUNOUT_SENSORS                   2
// #define FIL_RUNOUT_PIN                      26
// #define FIL_RUNOUT2_PIN                     A0

//
// Misc. Functions
//
//#define PS_ON_PIN                           -1  // was defined
//#define CASE_LIGHT_PIN                       5
#define SDSS                                  53
//#ifndef LED_PIN
  //#define LED_PIN                           -1 // was defined
//#endif

//#define SPINDLE_LASER_PWM_PIN               -1  // Hardware PWM
//#define SPINDLE_LASER_ENA_PIN                4  // Pullup!

// Use the RAMPS 1.4 Analog input 5 on the AUX2 connector
//#define FILWIDTH_PIN                         5  // Analog Input

//
// LCD / Controller
//

//#if IS_RRD_SC

// #define LCD_PINS_RS                           -1
// #define LCD_PINS_EN                           -1
// #define LCD_PINS_D4                           -1
// #define LCD_PINS_D5                           -1
// #define LCD_PINS_D6                           -1
// #define LCD_PINS_D7                           -1
//#define BTN_EN1                             31
//#define BTN_EN2                             33
//#define BTN_ENC                             35
// #define SD_DETECT_PIN                         -1
//#ifndef KILL_PIN
  //#define KILL_PIN                          41
//#endif
//#ifndef BEEPER_PIN
// #define BEEPER_PIN                            -1
//#endif

//#endif // IS_RRD_SC

#define SDA_PIN			20
#define SDL_PIN			21


// #ifndef SDSUPPORT   // was defined
// // these pins are defined in the SD library if building with SD support
// #define SCK_PIN          52
// #define MISO_PIN         50
// #define MOSI_PIN         51
// #endif


//was defined
// #define LARGE_FLASH true

// //Rapduch
// #define MYSERIAL_SCREEN Serial2
// #define RESETLINE		9
// #define AUTOLEVELPIN	8

// #define PS_ON_PIN       -1

// //RGB LEDs
// #define GREEN			11
// #define	RED				12
// #define BLUE			13
// //Power Supply Relay
// #define	RELAY			10

// #define MLED			68//A14

// #define SDPOWER			-1