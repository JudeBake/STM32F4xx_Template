/*
 * main.cpp
 *
 *  Created on: Apr 12, 2013
 *      Author: julien
 */

#include <stdlib.h>

#include "FreeRTOS.h"

#include "stm32f4xx_conf.h"
#include "stm32f4xx.h"

int main ()
{
	int x = 1;
	int y = 1;
	int z = 0;

	while(1)
	{
		z = x+ y;
		y++;
		x = y - 1;
	}
	return 0;
}
