/*
 * Copyright (C) 2019 Otto-von-Guericke Universität Magdeburg
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     miot_board_nucleo-f767zi
 * @{
 *
 * @file
 * @brief       Board initialization code for the MIOT nucleo-f767zi board
 *
 * @author      Maximilian Deubel <maximilian.deubel@ovgu.de>
 *
 * @}
 */

#define SPI1_SSEL GPIO_PIN(PORT_D, 15)
#define SPI3_SSEL GPIO_PIN(PORT_C, 8)
#define SPI4_SSEL GPIO_PIN(PORT_A, 15)
#define SPI5_SSEL GPIO_PIN(PORT_F, 1)
#define SPI6_SSEL GPIO_PIN(PORT_F, 12)

#include "board.h"
#include "periph/gpio.h"

void board_init(void)
{
    /* initialize the CPU */
    cpu_init();
#ifdef LED1_PIN
    gpio_init(LED1_PIN, GPIO_OUT);
#endif
#ifdef LED2_PIN
    gpio_init(LED2_PIN, GPIO_OUT);
#endif
    /* initialize SPI chip select lines */
    gpio_init(SPI1_SSEL, GPIO_OUT);
    gpio_set(SPI1_SSEL);
    gpio_init(SPI3_SSEL, GPIO_OUT);
    gpio_set(SPI3_SSEL);
    gpio_init(SPI4_SSEL, GPIO_OUT);
    gpio_set(SPI4_SSEL);
    gpio_init(SPI5_SSEL, GPIO_OUT);
    gpio_set(SPI5_SSEL);
    gpio_init(SPI6_SSEL, GPIO_OUT);
    gpio_set(SPI6_SSEL);
}
