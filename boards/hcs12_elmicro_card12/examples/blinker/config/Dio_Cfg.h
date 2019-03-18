/*
* Configuration of module: Dio (Dio_Cfg.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    HCS12
*
* Module vendor:           ArcCore
* Generator version:       2.0.0
*
* Generated by Arctic Studio (http://arccore.com) 
*/


#if !(((DIO_SW_MAJOR_VERSION == 1) && (DIO_SW_MINOR_VERSION == 0)) )
#error Dio: Configuration file expected BSW module version to be 1.0.*
#endif


#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#define DIO_VERSION_INFO_API    STD_OFF
#define DIO_DEV_ERROR_DETECT    STD_OFF

#define DIO_END_OF_LIST  (-1u)

// Physical ports
typedef enum
{
  DIO_PORT_A = 0,
  DIO_PORT_E = 1,
  DIO_PORT_B = 2,
  DIO_PORT_H = 3,
  DIO_PORT_J = 4,
  DIO_PORT_K = 5,
  DIO_PORT_M = 6,
  DIO_PORT_P = 7,
  DIO_PORT_S = 8,
  DIO_PORT_T = 9,
} Dio_PortTypesType;


// Channels	
#define DIO_CHANNEL_NAME_LED_CHANNEL	31

// Channel group

// Ports
#define DIO_PORT_NAME_HPort 		(DIO_PORT_H)




// Pointers for convenience.
// Channels	
extern const Dio_ChannelType DioChannelConfigData[];
// Channel group
extern const Dio_ChannelGroupType DioConfigData[];
// Port
extern const Dio_PortType DioPortConfigData[];

#endif /*DIO_CFG_H_*/
