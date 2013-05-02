/*
 * SystemPeriphConf.h
 *
 *  Created on: May 2, 2013
 *      Author: julien
 */

#ifndef SYSTEMPERIPHCONF_H_
#define SYSTEMPERIPHCONF_H_

/*
 * Serial Port Config
 * Comment/uncomment the line to configure the serial peripherics that will be
 * used in the project.
 */
#define ASYNC_SERIAL_PORT1
#define ASYNC_SERIAL_PORT2
#define ASYNC_SERIAL_PORT3
#define ASYNC_SERIAL_PORT4
#define ASYNC_SERIAL_PORT5
#define ASYNC_SERIAL_PORT6

//#define SYNC_SERIAL_PORT1
#define SYNC_SERIAL_PORT2
#define SYNC_SERIAL_PORT3
#define SYNC_SERIAL_PORT6

//...

#if defined ASYNC_SERIAL_PORT1 && defined SYNC_SERIAL_PORT1
#error "Serial Port 1 used as Asynchrone and Synchrone Port."
#endif


#endif /* SYSTEMPERIPHCONF_H_ */
