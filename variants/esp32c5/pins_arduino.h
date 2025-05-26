#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#define EXTERNAL_NUM_INTERRUPTS 29 // ESP32-C5 has up to 29 GPIOs
#define NUM_DIGITAL_PINS        9  // Exposed GPIOs: 0,1,2,3,6,7,26,27,28
#define NUM_ANALOG_INPUTS       5  // ADC1_CH0-CH3, CH5 (GPIO0-3, 6)

static const uint8_t PIN_0 = 0;   // Pin 10
static const uint8_t PIN_1 = 1;   // Pin 11
static const uint8_t PIN_2 = 2;   // Pin 12
static const uint8_t PIN_3 = 3;   // Pin 13
static const uint8_t PIN_6 = 6;   // Pin 15
static const uint8_t PIN_7 = 7;   // Pin 16, strapping pin
static const uint8_t PIN_26 = 26; // Pin 36, strapping pin
static const uint8_t PIN_27 = 27; // Pin 37, strapping pin
static const uint8_t PIN_28 = 28; // Pin 38, strapping pin

static const uint8_t TX = 20;     // UART0 TX, pin 20
static const uint8_t RX = 21;     // UART0 RX, pin 21
static const uint8_t LP_TX = 14;  // LP UART TX, pin 14
static const uint8_t LP_RX = 13;  // LP UART RX, pin 13

static const uint8_t SDA = 0;     // GPIO0, pin 10
static const uint8_t SCL = 1;     // GPIO1, pin 11

static const uint8_t SS = 7;      // Pin 16, strapping pin
static const uint8_t MOSI = 6;    // Pin 15
static const uint8_t MISO = 3;    // Pin 13
static const uint8_t SCK = 2;     // Pin 12

static const uint8_t A0 = 0;      // ADC1_CH0, pin 10
static const uint8_t A1 = 1;      // ADC1_CH1, pin 11
static const uint8_t A2 = 2;      // ADC1_CH2, pin 12
static const uint8_t A3 = 3;      // ADC1_CH3, pin 13
static const uint8_t A5 = 6;      // ADC1_CH5, pin 15

#define LED_BUILTIN 2 // GPIO2, pin 12

// Note: GPIO7, 26, 27, 28 are strapping pins; avoid using during boot

#include "pins_arduino_generic.h"

#endif
