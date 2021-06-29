/*
 * Copyright (c) 2021 Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 * 
 */

#include <stdlib.h>

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

const int LCD_WIDTH = 240;
const int LCD_HEIGHT = 320;

int main()
{
    // initialize the lcd
    st7789_init(&lcd_config, LCD_WIDTH, LCD_HEIGHT);

    // make screen black
    st7789_fill(0x0000);

    while (1) {
        // create a random x, y, and color value
        int rand_x = rand() % LCD_WIDTH;
        int rand_y = rand() % LCD_HEIGHT;
        uint16_t rand_color = rand() % 0xffff;
        
        // move the cursor to the random x and y position
        st7789_set_cursor(rand_x, rand_y);

        // put the random color as the pixel value
        st7789_put(rand_color);
    }
}
