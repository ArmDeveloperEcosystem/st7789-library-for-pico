/*
 * Copyright (c) 2021 Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 * 
 */

#include "pico/stdlib.h"
#include "pico/st7789.h"

// lcd configuration
const struct st7789_config lcd_config = {
    .spi      = PICO_DEFAULT_SPI_INSTANCE,
    .gpio_din = PICO_DEFAULT_SPI_TX_PIN,
    .gpio_clk = PICO_DEFAULT_SPI_SCK_PIN,
    .gpio_cs  = PICO_DEFAULT_SPI_CSN_PIN,
    .gpio_dc  = 20,
    .gpio_rst = 21,
    .gpio_bl  = 22,
};

const int lcd_width = 240;
const int lcd_height = 320;

int main()
{
    // initialize the lcd
    st7789_init(&lcd_config, lcd_width, lcd_height);

    while (1) {
        // make screen black
        st7789_fill(0x0000);

        // wait 1 second
        sleep_ms(1000);

        // make screen white
        st7789_fill(0xffff);

        // wait 1 second
        sleep_ms(1000);
    }
}
