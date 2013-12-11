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
#include "SystemInitializer.h"

int main ()
{
	/*
	 * System Initialization
	 */
	SystemInitializer::InitializeSystem();

	/*
	 * Main Application
	 */
	//TODO: coding of the main app here

	/* Start the scheduler. */
	CFreeRTOS::StartScheduler();

	return 0;
}
