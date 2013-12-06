/**
 * \file SystemInitializer.h
 * \class SystemInitializer
 * \brief Static class used to initialize the system
 *
 * This class is a C++ wrapper of the system_stm32f4xx.c file. It is a static
 * class.
 *
 * \date Created on: Dec 6, 2013
 * \date Last change on: &DATE&
 *
 * \author Created by: julien 
 * \author Last change by: &AUTHOR&
 *
 * \version Commit Id: &REVISION&
 */

#ifndef SYSTEMINITIALIZER_H_
#define SYSTEMINITIALIZER_H_

class SystemInitializer
{
public:
	static void InitializeSystem(void);
};

#endif /* SYSTEMINITIALIZER_H_ */
