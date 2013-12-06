/**
 * \file SystemInitializer.cpp
 *
 * \date Created on: Dec 6, 2013
 * \date Last change on: &DATE&
 *
 * \author Created by: julien 
 * \author Last change by: &AUTHOR&
 *
 * \version Commit Id: &REVISION&
 */

#include "system_stm32f4xx.h"
#include "SystemInitializer.h"

void SystemInitializer::InitializeSystem(void)
{
	SystemInit();
}

