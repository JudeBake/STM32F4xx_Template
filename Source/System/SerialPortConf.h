/**
 * \file SerialPortConf.h
 * \brief This file is used to configure the serial ports of the system.
 *
 * Comment/uncomment the lines to configure the serial ports that will be used
 * in the project.
 *
 * \date	Created on: May 1, 2013
 * \date	Last change on:
 * \author	Created by: julien
 * \author	Last change by:
 *
 * \version Revision:
 */

#ifndef SERIALPORTCONF_H_
#define SERIALPORTCONF_H_

#define ASYNC_SERIAL_PORT1			/**< Use serial port 1 as asynchronous.*/
#define ASYNC_SERIAL_PORT2			/**< Use serial port 2 as asynchronous.*/
#define ASYNC_SERIAL_PORT3			/**< Use serial port 3 as asynchronous.*/
#define ASYNC_SERIAL_PORT4			/**< Use serial port 4 as asynchronous.*/
#define ASYNC_SERIAL_PORT5			/**< Use serial port 5 as asynchronous.*/
#define ASYNC_SERIAL_PORT6			/**< Use serial port 6 as asynchronous.*/

//#define SYNC_SERIAL_PORT1			/**< Used serial port 1 as synchronous.*/
//#define SYNC_SERIAL_PORT2			/**< Used serial port 2 as synchronous.*/
//#define SYNC_SERIAL_PORT3			/**< Used serial port 3 as synchronous.*/
//#define SYNC_SERIAL_PORT6			/**< Used serial port 6 as synchronous.*/

//#define ONE_WIRE_SERIAL_PORT1		/**< Used serial port 1 as one-wire.*/
//#define ONE_WIRE_SERIAL_PORT2		/**< Used serial port 2 as one-wire.*/
//#define ONE_WIRE_SERIAL_PORT3		/**< Used serial port 3 as one-wire.*/
//#define ONE_WIRE_SERIAL_PORT4		/**< Used serial port 4 as one-wire.*/
//#define ONE_WIRE_SERIAL_PORT5		/**< Used serial port 5 as one-wire.*/
//#define ONE_WIRE_SERIAL_PORT6		/**< Used serial port 6 as one-wire.*/

//#define LIN_SERIAL_PORT1			/**< Used serial port 1 as LIN.*/
//#define LIN_SERIAL_PORT2			/**< Used serial port 2 as LIN.*/
//#define LIN_SERIAL_PORT3			/**< Used serial port 3 as LIN.*/
//#define LIN_SERIAL_PORT4			/**< Used serial port 4 as LIN.*/
//#define LIN_SERIAL_PORT5			/**< Used serial port 5 as LIN.*/
//#define LIN_SERIAL_PORT6			/**< Used serial port 6 as LIN.*/

//#define IRDA_SERIAL_PORT1			/**< Used serial port 1 as IrDa.*/
//#define IRDA_SERIAL_PORT2			/**< Used serial port 2 as IrDa.*/
//#define IRDA_SERIAL_PORT3			/**< Used serial port 3 as IrDa.*/
//#define IRDA_SERIAL_PORT4			/**< Used serial port 4 as IrDa.*/
//#define IRDA_SERIAL_PORT5			/**< Used serial port 5 as IrDa.*/
//#define IRDA_SERIAL_PORT6			/**< Used serial port 6 as IrDa.*/

//#define SMART_CARD_SERIAL_PORT1		/**< Used serial port 1 as Smartcard.*/
//#define SMART_CARD_SERIAL_PORT2		/**< Used serial port 2 as Smartcard.*/
//#define SMART_CARD_SERIAL_PORT3		/**< Used serial port 3 as Smartcard.*/
//#define SMART_CARD_SERIAL_PORT6		/**< Used serial port 6 as Smartcard.*/

/*
 * Building error for over defined serial port
 */
#if defined ASYNC_SERIAL_PORT1 && defined SYNC_SERIAL_PORT1
#error "Serial port 1 used in asynchronous and one synchronous."
#endif

#if defined ASYNC_SERIAL_PORT1 && defined ONE_WIRE_SERIAL_PORT1
#error "Serial port 1 used in asynchronous and one wire port."
#endif

#if defined ASYNC_SERIAL_PORT1 && defined LIN_SERIAL_PORT1
#error "Serial port 1 used in asynchronous and LIN port."
#endif

#if defined ASYNC_SERIAL_PORT1 && defined IRDA_SERIAL_PORT1
#error "Serial port 1 used in asynchronous and IrDa port."
#endif

#if defined ASYNC_SERIAL_PORT1 && defined SMART_CARD_SERIAL_PORT1
#error "Serial port 1 used in asynchronous and Smartcard port."
#endif

#if defined SYNC_SERIAL_PORT1 && defined ONE_WIRE_SERIAL_PORT1
#error "Serial port 1 used in synchronous and one wire port."
#endif

#if defined SYNC_SERIAL_PORT1 && defined LIN_SERIAL_PORT1
#error "Serial port 1 used in synchronous and LIN port."
#endif

#if defined SYNC_SERIAL_PORT1 && defined IRDA_SERIAL_PORT1
#error "Serial port 1 used in synchronous and IrDa port."
#endif

#if defined SYNC_SERIAL_PORT1 && defined SMART_CARD_SERIAL_PORT1
#error "Serial port 1 used in synchronous and Smartcard port."
#endif

#if defined ONE_WIRE_SERIAL_PORT1 && defined LIN_SERIAL_PORT1
#error "Serial port 1 used in one wire and LIN port."
#endif

#if defined ONE_WIRE_SERIAL_PORT1 && defined IRDA_SERIAL_PORT1
#error "Serial port 1 used in one wire and IrDa port."
#endif

#if defined ONE_WIRE_SERIAL_PORT1 && defined SMART_CARD_SERIAL_PORT1
#error "Serial port 1 used in one wire and Smartcard port."
#endif

#if defined LIN_SERIAL_PORT1 && defined IRDA_SERIAL_PORT1
#error "Serial port 1 used in LIN and IrDa port."
#endif

#if defined LIN_SERIAL_PORT1 && defined SMART_CARD_SERIAL_PORT1
#error "Serial port 1 used in LIN and Smartcard port."
#endif

#if defined IRDA_SERIAL_PORT1 && defined SMART_CARD_SERIAL_PORT1
#error "Serial port 1 used in IrDa and Smartcard port."
#endif

#if defined ASYNC_SERIAL_PORT2 && defined SYNC_SERIAL_PORT2
#error "Serial port 2 used as asynchronous and synchronous port."
#endif

#if defined ASYNC_SERIAL_PORT2 && defined ONE_WIRE_SERIAL_PORT2
#error "Serial port 2 used in asynchronous and one wire port."
#endif

#if defined ASYNC_SERIAL_PORT2 && defined LIN_SERIAL_PORT2
#error "Serial port 2 used in asynchronous and LIN port."
#endif

#if defined ASYNC_SERIAL_PORT2 && defined IRDA_SERIAL_PORT2
#error "Serial port 2 used in asynchronous and IrDa port."
#endif

#if defined ASYNC_SERIAL_PORT2 && defined SMART_CARD_SERIAL_PORT2
#error "Serial port 2 used in asynchronous and Smartcard port."
#endif

#if defined SYNC_SERIAL_PORT2 && defined ONE_WIRE_SERIAL_PORT2
#error "Serial port 2 used in synchronous and one wire port."
#endif

#if defined SYNC_SERIAL_PORT2 && defined LIN_SERIAL_PORT2
#error "Serial port 2 used in synchronous and LIN port."
#endif

#if defined SYNC_SERIAL_PORT2 && defined IRDA_SERIAL_PORT2
#error "Serial port 2 used in synchronous and IrDa port."
#endif

#if defined SYNC_SERIAL_PORT2 && defined SMART_CARD_SERIAL_PORT2
#error "Serial port 2 used in synchronous and Smartcard port."
#endif

#if defined ONE_WIRE_SERIAL_PORT2 && defined LIN_SERIAL_PORT2
#error "Serial port 2 used in one wire and LIN port."
#endif

#if defined ONE_WIRE_SERIAL_PORT2 && defined IRDA_SERIAL_PORT2
#error "Serial port 2 used in one wire and IrDa port."
#endif

#if defined ONE_WIRE_SERIAL_PORT2 && defined SMART_CARD_SERIAL_PORT2
#error "Serial port 2 used in one wire and Smartcard port."
#endif

#if defined LIN_SERIAL_PORT2 && defined IRDA_SERIAL_PORT2
#error "Serial port 2 used in LIN and IrDa port."
#endif

#if defined LIN_SERIAL_PORT2 && defined SMART_CARD_SERIAL_PORT2
#error "Serial port 2 used in LIN and Smartcard port."
#endif

#if defined IRDA_SERIAL_PORT2 && defined SMART_CARD_SERIAL_PORT2
#error "Serial port 2 used in IrDa and Smartcard port."
#endif

#if defined ASYNC_SERIAL_PORT3 && defined SYNC_SERIAL_PORT3
#error "Serial port 3 used as asynchronous and synchronous port."
#endif

#if defined ASYNC_SERIAL_PORT3 && defined ONE_WIRE_SERIAL_PORT3
#error "Serial port 3 used in asynchronous and one wire port."
#endif

#if defined ASYNC_SERIAL_PORT3 && defined LIN_SERIAL_PORT3
#error "Serial port 3 used in asynchronous and LIN port."
#endif

#if defined ASYNC_SERIAL_PORT3 && defined IRDA_SERIAL_PORT3
#error "Serial port 3 used in asynchronous and IrDa port."
#endif

#if defined ASYNC_SERIAL_PORT3 && defined SMART_CARD_SERIAL_PORT3
#error "Serial port 3 used in asynchronous and Smartcard port."
#endif

#if defined SYNC_SERIAL_PORT3 && defined ONE_WIRE_SERIAL_PORT3
#error "Serial port 3 used in synchronous and one wire port."
#endif

#if defined SYNC_SERIAL_PORT3 && defined LIN_SERIAL_PORT3
#error "Serial port 3 used in synchronous and LIN port."
#endif

#if defined SYNC_SERIAL_PORT3 && defined IRDA_SERIAL_PORT3
#error "Serial port 3 used in synchronous and IrDa port."
#endif

#if defined SYNC_SERIAL_PORT3 && defined SMART_CARD_SERIAL_PORT3
#error "Serial port 3 used in synchronous and Smartcard port."
#endif

#if defined ONE_WIRE_SERIAL_PORT3 && defined LIN_SERIAL_PORT3
#error "Serial port 3 used in one wire and LIN port."
#endif

#if defined ONE_WIRE_SERIAL_PORT3 && defined IRDA_SERIAL_PORT3
#error "Serial port 3 used in one wire and IrDa port."
#endif

#if defined ONE_WIRE_SERIAL_PORT3 && defined SMART_CARD_SERIAL_PORT3
#error "Serial port 3 used in one wire and Smartcard port."
#endif

#if defined LIN_SERIAL_PORT3 && defined IRDA_SERIAL_PORT3
#error "Serial port 3 used in LIN and IrDa port."
#endif

#if defined LIN_SERIAL_PORT3 && defined SMART_CARD_SERIAL_PORT3
#error "Serial port 3 used in LIN and Smartcard port."
#endif

#if defined IRDA_SERIAL_PORT3 && defined SMART_CARD_SERIAL_PORT3
#error "Serial port 3 used in IrDa and Smartcard port."
#endif

#if defined ASYNC_SERIAL_PORT4 && defined ONE_WIRE_SERIAL_PORT4
#error "Serial port 4 used in asynchronous and one wire port."
#endif

#if defined ASYNC_SERIAL_PORT4 && defined LIN_SERIAL_PORT4
#error "Serial port 4 used in asynchronous and LIN port."
#endif

#if defined ASYNC_SERIAL_PORT4 && defined IRDA_SERIAL_PORT4
#error "Serial port 4 used in asynchronous and IrDa port."
#endif

#if defined ONE_WIRE_SERIAL_PORT4 && defined LIN_SERIAL_PORT4
#error "Serial port 4 used in one wire and LIN port."
#endif

#if defined ONE_WIRE_SERIAL_PORT4 && defined IRDA_SERIAL_PORT4
#error "Serial port 4 used in one wire and IrDa port."
#endif

#if defined LIN_SERIAL_PORT4 && defined IRDA_SERIAL_PORT4
#error "Serial port 4 used in LIN and IrDa port."
#endif

#if defined ASYNC_SERIAL_PORT5 && defined ONE_WIRE_SERIAL_PORT5
#error "Serial port 5 used in asynchronous and one wire port."
#endif

#if defined ASYNC_SERIAL_PORT5 && defined LIN_SERIAL_PORT5
#error "Serial port 5 used in asynchronous and LIN port."
#endif

#if defined ASYNC_SERIAL_PORT5 && defined IRDA_SERIAL_PORT5
#error "Serial port 5 used in asynchronous and IrDa port."
#endif

#if defined ONE_WIRE_SERIAL_PORT5 && defined LIN_SERIAL_PORT5
#error "Serial port 5 used in one wire and LIN port."
#endif

#if defined ONE_WIRE_SERIAL_PORT5 && defined IRDA_SERIAL_PORT5
#error "Serial port 5 used in one wire and IrDa port."
#endif

#if defined LIN_SERIAL_PORT5 && defined IRDA_SERIAL_PORT5
#error "Serial port 5 used in LIN and IrDa port."
#endif

#if defined ASYNC_SERIAL_PORT6 && defined SYNC_SERIAL_PORT6
#error "Serial port 6 used as asynchronous and synchronous port."
#endif

#if defined ASYNC_SERIAL_PORT6 && defined ONE_WIRE_SERIAL_PORT6
#error "Serial port 6 used in asynchronous and one wire port."
#endif

#if defined ASYNC_SERIAL_PORT6 && defined LIN_SERIAL_PORT6
#error "Serial port 6 used in asynchronous and LIN port."
#endif

#if defined ASYNC_SERIAL_PORT6 && defined IRDA_SERIAL_PORT6
#error "Serial port 6 used in asynchronous and IrDa port."
#endif

#if defined ASYNC_SERIAL_PORT6 && defined SMART_CARD_SERIAL_PORT6
#error "Serial port 6 used in asynchronous and Smartcard port."
#endif

#if defined SYNC_SERIAL_PORT6 && defined ONE_WIRE_SERIAL_PORT6
#error "Serial port 6 used in synchronous and one wire port."
#endif

#if defined SYNC_SERIAL_PORT6 && defined LIN_SERIAL_PORT6
#error "Serial port 6 used in synchronous and LIN port."
#endif

#if defined SYNC_SERIAL_PORT6 && defined IRDA_SERIAL_PORT6
#error "Serial port 6 used in synchronous and IrDa port."
#endif

#if defined SYNC_SERIAL_PORT6 && defined SMART_CARD_SERIAL_PORT6
#error "Serial port 6 used in synchronous and Smartcard port."
#endif

#if defined ONE_WIRE_SERIAL_PORT6 && defined LIN_SERIAL_PORT6
#error "Serial port 6 used in one wire and LIN port."
#endif

#if defined ONE_WIRE_SERIAL_PORT6 && defined IRDA_SERIAL_PORT6
#error "Serial port 6 used in one wire and IrDa port."
#endif

#if defined ONE_WIRE_SERIAL_PORT6 && defined SMART_CARD_SERIAL_PORT6
#error "Serial port 6 used in one wire and Smartcard port."
#endif

#if defined LIN_SERIAL_PORT6 && defined IRDA_SERIAL_PORT6
#error "Serial port 6 used in LIN and IrDa port."
#endif

#if defined LIN_SERIAL_PORT6 && defined SMART_CARD_SERIAL_PORT6
#error "Serial port 6 used in LIN and Smartcard port."
#endif

#if defined IRDA_SERIAL_PORT6 && defined SMART_CARD_SERIAL_PORT6
#error "Serial port 6 used in IrDa and Smartcard port."
#endif

/*
 * Includes of the used peripherals
 */
#ifdef ASYNC_SERIAL_PORT1
#include "AsyncSerialPort1.h"
#endif

//TODO: includes coresponding class for ports mode.

#endif /* SERIALPORTCONF_H_ */
