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
#include "SystemInitializer.h"
#include "AsyncSerialPort1TestTask.h"

int main ()
{
	/**
	 * System Initialization
	 */
	SystemInitializer::InitializeSystem();

	/*
	 * Main Application
	 */
	static AsyncSerialPort1TestTask asyncSerialPort1Tester;

	//init hardware
	CFreeRTOS::InitHardwareForManagedTasks();

	//create task
	asyncSerialPort1Tester.Create("uart1Tester", configMINIMAL_STACK_SIZE,
			tskIDLE_PRIORITY + 1UL);

	/* Start the scheduler. */
	CFreeRTOS::StartScheduler();

	return 0;
}
