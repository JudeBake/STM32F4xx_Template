/*
 * \file SerialPortConf.h
 * \brief This file is used to configure the serial ports of the system.
 *
 * Comment/uncomment the lines to configure the serial ports that will be used
 * in the project.
 *
 * \date May 2, 2013
 * \author julien
 */

#ifndef SERIALPORTCONF_H_
#define SERIALPORTCONF_H_

/**
 * \brief Defines used for asynchronous serial ports.
 */
#define ASYNC_SERIAL_PORT1
#define ASYNC_SERIAL_PORT2
#define ASYNC_SERIAL_PORT3
#define ASYNC_SERIAL_PORT4
#define ASYNC_SERIAL_PORT5
#define ASYNC_SERIAL_PORT6

//#define SYNC_SERIAL_PORT1
//#define SYNC_SERIAL_PORT2
//#define SYNC_SERIAL_PORT3
//#define SYNC_SERIAL_PORT6

//...

/*
 * Building error for over defined peripherals
 */
#if defined ASYNC_SERIAL_PORT1 && defined SYNC_SERIAL_PORT1
#error "Serial port 1 used as asynchronous and synchronous port."
#endif

#if defined ASYNC_SERIAL_PORT2 && defined SYNC_SERIAL_PORT2
#error "Serial port 2 used as asynchronous and synchronous port."
#endif

#if defined ASYNC_SERIAL_PORT3 && defined SYNC_SERIAL_PORT3
#error "Serial port 3 used as asynchronous and synchronous port."
#endif

#if defined ASYNC_SERIAL_PORT6 && defined SYNC_SERIAL_PORT6
#error "Serial port 6 used as asynchronous and synchronous port."
#endif

/*
 * Includes of the used peripherals
 */
#ifdef ASYNC_SERIAL_PORT1
#include "AsyncSerialPort1.h"
#endif

#endif /* SERIALPORTCONF_H_ */
