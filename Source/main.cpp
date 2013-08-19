/*
 * \file main.cpp
 * \brief This file is main of the project.
 *
 * \date Apr 12, 2013
 * \author julien
 */

#include <stdlib.h>

#include "FreeRTOS.h"

#include "stm32f4xx_conf.h"
#include "stm32f4xx.h"
#include "SerialPortConf.h"

int main ()
{
	AsyncSerialPort1* portInstance = AsyncSerialPort1::getInstance();
	int8_t character;
	int8_t string[100];
	SerialStatus currentStatus;

	currentStatus = portInstance->portInit(SERIAL_NO_PARITY, SERIAL_1_STOP_BIT,
			SERIAL_8_BITS_DATA, SERIAL_NO_HW_FLOW_CTRL, SERIAL_SIMPLEX_RX,
			SERIAL_9600_BAUD, SERIAL_PORT1_PREEMP_PRIORITY,
			SERIAL_PORT1_SUBPRIORITY, SERIAL_INT_ENABLE);

	return 0;
}
