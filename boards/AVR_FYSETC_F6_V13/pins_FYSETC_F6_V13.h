/**
 * @brief a pins configuration file for an Fysetc F6 V1.3 OAT.
 */

#pragma once

// DRIVER_TYPE_ULN2003 requires 4 digital outputs in Arduino pin numbering
#ifndef RA_IN1_PIN
    #define RA_IN1_PIN 70
#endif
#ifndef RA_IN2_PIN
    #define RA_IN2_PIN 38
#endif
#ifndef RA_IN3_PIN
    #define RA_IN3_PIN 54
#endif
#ifndef RA_IN4_PIN
    #define RA_IN4_PIN 55
#endif
#ifndef DEC_IN1_PIN
    #define DEC_IN1_PIN 39
#endif
#ifndef DEC_IN2_PIN
    #define DEC_IN2_PIN 56
#endif
#ifndef DEC_IN3_PIN
    #define DEC_IN3_PIN 60
#endif
#ifndef DEC_IN4_PIN
    #define DEC_IN4_PIN 61
#endif

//
// Sensorless homing DIAG pin is not directly connected to the MCU. Close
// the jumper next to the limit switch socket when using sensorless homing.
//
// DRIVER_TYPE_TMC2209_UART requires 4 digital pins in Arduino pin numbering
#ifndef RA_STEP_PIN
    #define RA_STEP_PIN 54  // STEP
#endif
#ifndef RA_DIR_PIN
    #define RA_DIR_PIN 55  // DIR
#endif
#ifndef RA_EN_PIN
    #define RA_EN_PIN 38  // Enable
#endif
#ifndef RA_DIAG_PIN
    #define RA_DIAG_PIN 3  // only needed for autohome function
#endif
#ifndef RA_MS0_PIN
    #define RA_MS0_PIN 51
#endif
#ifndef RA_MS1_PIN
    #define RA_MS1_PIN 52
#endif
#ifndef RA_MS2_PIN
    #define RA_MS2_PIN 70
#endif
// DRIVER_TYPE_TMC2209_UART requires 2 additional digital pins for SoftwareSerial, can be shared across all drivers
#ifndef RA_SERIAL_PORT_TX
    #define RA_SERIAL_PORT_TX 72  // SoftwareSerial TX port
#endif
#ifndef RA_SERIAL_PORT_RX
    #define RA_SERIAL_PORT_RX 71  // SoftwareSerial RX port
#endif
#ifndef RA_DRIVER_ADDRESS
    #define RA_DRIVER_ADDRESS 0b00
#endif
// DRIVER_TYPE_TMC2209_UART requires 4 digital pins in Arduino pin numbering
#ifndef DEC_STEP_PIN
    #define DEC_STEP_PIN 60  // STEP
#endif
#ifndef DEC_DIR_PIN
    #define DEC_DIR_PIN 61  // DIR
#endif
#ifndef DEC_EN_PIN
    #define DEC_EN_PIN 56  // Enable
#endif
#ifndef DEC_DIAG_PIN
    #define DEC_DIAG_PIN 14  // only needed for autohome function
#endif
#ifndef DEC_MS0_PIN
    #define DEC_MS0_PIN 51
#endif
#ifndef DEC_MS1_PIN
    #define DEC_MS1_PIN 52
#endif
#ifndef DEC_MS2_PIN
    #define DEC_MS2_PIN 39
#endif
// DRIVER_TYPE_TMC2209_UART requires 2 additional digital pins for SoftwareSerial, can be shared across all drivers
#ifndef DEC_SERIAL_PORT_TX
    #define DEC_SERIAL_PORT_TX 75  // SoftwareSerial TX port
#endif
#ifndef DEC_SERIAL_PORT_RX
    #define DEC_SERIAL_PORT_RX 73  // SoftwareSerial RX port
#endif
#ifndef DEC_DRIVER_ADDRESS
    #define DEC_DRIVER_ADDRESS 0b00
#endif

#define SW_SERIAL_UART 1
#ifndef UART_CONNECTION_TEST_TXRX
    #define UART_CONNECTION_TEST_TXRX 1
#endif

// DRIVER_TYPE_ULN2003 requires 4 digital outputs in Arduino pin numbering
#ifndef AZ_IN1_PIN
    #define AZ_IN1_PIN 74
#endif
#ifndef AZ_IN2_PIN
    #define AZ_IN2_PIN 58
#endif
#ifndef AZ_IN3_PIN
    #define AZ_IN3_PIN 43
#endif
#ifndef AZ_IN4_PIN
    #define AZ_IN4_PIN 48
#endif
#ifndef ALT_IN1_PIN
    #define ALT_IN1_PIN 47
#endif
#ifndef ALT_IN2_PIN
    #define ALT_IN2_PIN 24
#endif
#ifndef ALT_IN3_PIN
    #define ALT_IN3_PIN 26
#endif
#ifndef ALT_IN4_PIN
    #define ALT_IN4_PIN 28
#endif
// DRIVER_TYPE_TMC2209_UART requires 4 digital pins in Arduino pin numbering
#ifndef AZ_STEP_PIN
    #define AZ_STEP_PIN 43  // STEP
#endif
#ifndef AZ_DIR_PIN
    #define AZ_DIR_PIN 48  // DIR
#endif
#ifndef AZ_EN_PIN
    #define AZ_EN_PIN 58  // Enable
#endif
#ifndef AZ_DIAG_PIN
    #define AZ_DIAG_PIN 12  // only needed for autohome function
#endif
// DRIVER_TYPE_TMC2209_UART requires 2 additional digital pins for SoftwareSerial, can be shared across all drivers
#ifndef AZ_SERIAL_PORT_TX
    #define AZ_SERIAL_PORT_TX 47  // SoftwareSerial TX port
#endif
#ifndef AZ_SERIAL_PORT_RX
    #define AZ_SERIAL_PORT_RX 74  // SoftwareSerial RX port
#endif
#ifndef AZ_DRIVER_ADDRESS
    #define AZ_DRIVER_ADDRESS 0b00
#endif
// DRIVER_TYPE_TMC2209_UART requires 4 digital pins in Arduino pin numbering
#ifndef ALT_STEP_PIN
    #define ALT_STEP_PIN 26  // STEP
#endif
#ifndef ALT_DIR_PIN
    #define ALT_DIR_PIN 28  // DIR
#endif
#ifndef ALT_EN_PIN
    #define ALT_EN_PIN 24  // Enable
#endif
#ifndef ALT_DIAG_PIN
    #define ALT_DIAG_PIN 64  // only needed for autohome function
#endif
// DRIVER_TYPE_TMC2209_UART requires 2 additional digital pins for SoftwareSerial, can be shared across all drivers
#ifndef ALT_SERIAL_PORT_TX
    #define ALT_SERIAL_PORT_TX 77  // SoftwareSerial TX port
#endif
#ifndef ALT_SERIAL_PORT_RX
    #define ALT_SERIAL_PORT_RX 76  // SoftwareSerial RX port
#endif
#ifndef ALT_DRIVER_ADDRESS
    #define ALT_DRIVER_ADDRESS 0b00
#endif

// DRIVER_TYPE_ULN2003 requires 4 digital outputs in Arduino pin numbering
#ifndef FOCUS_IN1_PIN
    #define FOCUS_IN1_PIN 47
#endif
#ifndef FOCUS_IN2_PIN
    #define FOCUS_IN2_PIN 30
#endif
#ifndef FOCUS_IN3_PIN
    #define FOCUS_IN3_PIN 36
#endif
#ifndef FOCUS_IN4_PIN
    #define FOCUS_IN4_PIN 34
#endif
// DRIVER_TYPE_TMC2209_UART requires 4 digital pins in Arduino pin numbering. This is the E1 port.
#ifndef FOCUS_STEP_PIN
    #define FOCUS_STEP_PIN 36  // STEP
#endif
#ifndef FOCUS_DIR_PIN
    #define FOCUS_DIR_PIN 34  // DIR
#endif
#ifndef FOCUS_EN_PIN
    #define FOCUS_EN_PIN 30  // Enable
#endif
#ifndef FOCUS_DIAG_PIN
    #define FOCUS_DIAG_PIN 15  // only needed for autohome function
#endif
// DRIVER_TYPE_TMC2209_UART requires 2 additional digital pins for SoftwareSerial, can be shared across all drivers
#ifndef FOCUS_SERIAL_PORT_TX
    #define FOCUS_SERIAL_PORT_TX 81  // SoftwareSerial TX port
#endif
#ifndef FOCUS_SERIAL_PORT_RX
    #define FOCUS_SERIAL_PORT_RX 80  // SoftwareSerial RX port
#endif
#ifndef FOCUS_DRIVER_ADDRESS
    #define FOCUS_DRIVER_ADDRESS 0b00
#endif

//GPS pin configuration
#ifndef GPS_SERIAL_PORT
    #define GPS_SERIAL_PORT Serial1
#endif

// DISPLAY_TYPE_LCD_KEYPAD requires 6 digital & 1 analog output in Arduino pin numbering
#ifndef LCD_PIN4
    #define LCD_PIN4 35
#endif
#ifndef LCD_PIN5
    #define LCD_PIN5 11
#endif
#ifndef LCD_PIN6
    #define LCD_PIN6 25
#endif
#ifndef LCD_PIN7
    #define LCD_PIN7 10
#endif
#ifndef LCD_PIN8
    #define LCD_PIN8 29
#endif
#ifndef LCD_PIN9
    #define LCD_PIN9 37
#endif

// DISPLAY_TYPE_LCD_KEYPAD requires 1 analog input in Arduino pin numbering
#ifndef LCD_KEY_SENSE_PIN
    #define LCD_KEY_SENSE_PIN 13
#endif

//Pin to turn on dew heater MOSFET
#ifndef DEW_HEATER_PIN
    #define DEW_HEATER_PIN 5
#endif
