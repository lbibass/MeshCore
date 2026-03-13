/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"

#include "nrf.h"
#include "wiring_constants.h"
#include "wiring_digital.h"

const uint32_t g_ADigitalPinMap[] = {
  // P0
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
  29, 30, 31,

  // P1
  32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47
};

void initVariant()
{
    // Initialize the digital pins as inputs or outputs
    pinMode(PIN_LED1, OUTPUT);
    digitalWrite(PIN_LED1, HIGH);

    pinMode(LED_BLUE, OUTPUT);
    digitalWrite(LED_BLUE, HIGH);

    // Initialize LoRa pins
    pinMode(P_LORA_RESET, OUTPUT);
    digitalWrite(P_LORA_RESET, HIGH);

    pinMode(LORA_CS, OUTPUT);
    digitalWrite(LORA_CS, HIGH);

    // pinMode(GPS_EN_GPIO, OUTPUT);
    // digitalWrite(GPS_EN_GPIO, HIGH); // GPS on initially

    // pinMode(SCREEN_12V_ENABLE, OUTPUT);
    // digitalWrite(SCREEN_12V_ENABLE, LOW); //

    pinMode(BATTERY_CHARGING_INV, INPUT);
}
