#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "soc/soc_caps.h"

// UART Pins (Standard UART0)
static const uint8_t TX = 11;  // U0TXD (GPIO11, Physical Pin 11)
static const uint8_t RX = 12;  // U0RXD (GPIO12, Physical Pin 5)

// Low-Power UART Pins
#define WIRE1_PIN_DEFINED
static const uint8_t LP_TX = 5;  // LP_UART_TXD (GPIO5, Physical Pin 16)
static const uint8_t LP_RX = 4;  // LP_UART_RXD (GPIO4, Physical Pin 15)

// I2C Pins (Low-Power I2C)
static const uint8_t SDA = 6;  // LP_I2C_SDA (GPIO6, Physical Pin 7)
static const uint8_t SCL = 7;  // LP_I2C_SCL (GPIO7, Physical Pin 10)

// SPI Pins (FSPI)
static const uint8_t SS = 5;    // FSPIWP (GPIO5, Physical Pin 16)
static const uint8_t MOSI = 7;  // FSPID (GPIO7, Physical Pin 10)
static const uint8_t MISO = 2;  // FSPIQ (GPIO2, Physical Pin 4)
static const uint8_t SCK = 6;   // FSPICLK (GPIO6, Physical Pin 7)

// ADC Pins
static const uint8_t A0 = 1;  // ADC1_CH0 (GPIO1, Physical Pin 2)
static const uint8_t A1 = 2;  // ADC1_CH1 (GPIO2, Physical Pin 4)
static const uint8_t A2 = 3;  // ADC1_CH2 (GPIO3, Physical Pin 6)
static const uint8_t A3 = 4;  // ADC1_CH3 (GPIO4, Physical Pin 15)
static const uint8_t A4 = 5;  // ADC1_CH4 (GPIO5, Physical Pin 16)
static const uint8_t A5 = 6;  // ADC1_CH5 (GPIO6, Physical Pin 7)

// Enable/Reset Pin
static const uint8_t EN = 3;  // EN (Physical Pin 3)

// Strapping Pins (avoid using for general I/O unless necessary)
static const uint8_t STRAP_27 = 27;  // GPIO27 (Physical Pin 13)
static const uint8_t STRAP_28 = 28;  // GPIO28 (Physical Pin 14)
static const uint8_t STRAP_7 = 7;    // GPIO7 (Physical Pin 10)
static const uint8_t STRAP_MTMS = 2; // MTMS (GPIO2, Physical Pin 4)

#endif /* Pins_Arduino_h */





// Pin Definitions
//#define PIN_0   0     // GPIO0,    XTAL_32K_P, LP_GPIO0, LP_UART_DTRN
//#define PIN_1   1     // GPIO1,    XTAL_32K_N, LP_GPIO1, LP_UART_DSRN, ADC1_CH0
//#define PIN_EN  3     // EN        (Enable/Reset)
//#define PIN_2   2     // GPIO2,    LP_GPIO2, MTMS, LP_UART_RTSN, ADC1_CH1, FSPIQ
//#define PIN_4   12    // GPIO12,   U0RXD
//#define PIN_5   3     // GPIO3,    LP_GPIO3, MTDI, LP_UART_CTSN, ADC1_CH2
//#define PIN_6   6     // GPIO6,    LP_GPIO6, LP_I2C_SDA, ADC1_CH5, FSPICLK
//#define PIN_7   7     // GPIO7,    LP_GPIO7, LP_I2C_SCL, FSPID
//#define PIN_11  11    // GPIO11,   U0TXD 
//#define PIN_12  26    // GPIO26
//#define PIN_13  27    // GPIO27    (Strapping Pin)
//#define PIN_14  28    // GPIO28    (Strapping Pin, Boot)
//#define PIN_15  4     // GPIO4,    LP_GPIO4, LP_UART_RXD, MTCK, ADC1_CH3, FSPIHD
//#define PIN_16  5     // GPIO5,    LP_GPIO5, LP_UART_TXD, MTD0, ADC1_CH4, FSPIWP

