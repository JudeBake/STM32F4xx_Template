/**
 * \file stm32f4xx_USARTPinAss.h
 * \brief This file redefine the pin name used in serial ports.
 *
 * \date May 1, 2013
 * \author julien
 */

#ifndef STM32F4XX_USARTPINASS_H_
#define STM32F4XX_USARTPINASS_H_

#include "stm32f4xx.h"

//USART port 1
#define USART1_GPIO_PORT			GPIOA
#define USART1_RX					GPIO_Pin_10
#define USART1_RX_SOURCE			GPIO_PinSource10
#define USART1_TX					GPIO_Pin_9
#define USART1_TX_SOURCE			GPIO_PinSource9
#define USART1_CLK					GPIO_Pin_8
#define USART1_CLK_SOURCE			GPIO_PinSource8
#define USART1_RTS					GPIO_Pin_12
#define USART1_RTS_SOURCE			GPIO_PinSource12
#define USART1_CTS					GPIO_Pin_11
#define USART1_CTS_SOURCE			GPIO_PinSource11

//USART port 2
#define USART2_GPIO_PORT			GPIOD
#define USART2_RX					GPIO_Pin_6
#define USART2_RX_SOURCE			GPIO_PinSource6
#define USART2_TX					GPIO_Pin_5
#define USART2_TX_SOURCE			GPIO_PinSource5
#define USART2_CLK					GPIO_Pin7
#define USART2_CLK_SOURCE			GPIO_PinSource7
#define USART2_RTS					GPIO_Pin_3
#define USART2_RTS_SOURCE			GPIO_PinSource3
#define USART2_CTS					GPIO_Pin_4
#define USART2_CTS_SOURCE			GPIO_PinSource4

//USART port 3
#define USART3_GPIO_PORT			GPIOB
#define USART3_RX					GPIO_Pin_11
#define USART3_RX_SOURCE			GPIO_PinSource11
#define USART3_TX					GPIO_Pin_10
#define USART3_TX_SOURCE			GPIO_PinSource10
#define USART3_CLK					GPIO_Pin_12
#define USART3_CLK_SOURCE			GPIO_PinSource12
#define USART3_RTS					GPIO_Pin_14
#define USART3_RTS_SOURCE			GPIO_PinSource14
#define USART3_CTS					GPIO_Pin_13
#define USART3_CTS_SOURCE			GPIO_PinSource13

//UART port 4
#define UART4_GPIO_PORT				GPIOC
#define UART4_RX					GPIO_Pin_11
#define UART4_RX_SOURCE				GPIO_PinSource11
#define UART4_TX					GPIO_Pin_10
#define UART4_TX_SOURCE				GPIO_PinSource10

//UART port 5
#define UART5_GPIO_PORT_RX			GPIOD
#define UART5_RX					GPIO_Pin_2
#define UART5_RX_SOURCE				GPIO_PinSource2
#define UART5_GPIO_PORT_TX			GPIOC
#define UART5_TX					GPIO_Pin_12
#define UART5_TX_SOURCE				GPIO_PinSource12

//USART port 6
#define USART6_GPIO_PORT			GPIOC
#define USART6_RX					GPIO_Pin_7
#define USART6_RX_SOURCE			GPIO_PinSource7
#define USART6_TX					GPIO_Pin_6
#define USART6_TX_SOURCE			GPIO_PinSource6
#define USART6_CLK					GPIO_Pin_8
#define USART6_CLK_SOURCE			GPIO_PinSource8
#define USART6_RTS					GPIO_Pin_14
#define USART6_RTS_SOURCE			GPIO_PinSource14
#define USART6_CTS					GPIO_Pin_13
#define USART6_CTS_SOURCE			GPIO_PinSource13


#endif /* STM32F4XX_USARTPINASS_H_ */
