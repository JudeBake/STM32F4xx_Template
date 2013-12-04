/*
 * \file main.cpp
 * \brief This file is main of the project.
 *
 * \date	Created on: May 1, 2013
 * \date	Last change on: &DATE&
 * \author	Created by: julien
 * \author	Last change by: &AUTHOR&
 *
 * \version Commit Id: &REVISION&
 */

#include <stdlib.h>

#include "CFreeRTOS.h"

#include "stm32f4xx_conf.h"
#include "stm32f4xx.h"
#include "SerialPortConf.h"
#include "Uart1TestTask.h"

int main ()
{
	Uart1TestTask uart1Tester;

	uart1Tester.Create("uart1Tester", configMINIMAL_STACK_SIZE,
			tskIDLE_PRIORITY);

	/* Start the scheduler. */
	CFreeRTOS::InitHardwareForManagedTasks();
	CFreeRTOS::StartScheduler();

	return 0;
}
