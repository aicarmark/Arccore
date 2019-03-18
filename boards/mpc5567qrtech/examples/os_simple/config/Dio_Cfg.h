/*
* Configuration of module: Dio (Dio_Cfg.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC5567
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
  DIO_MPC5567_GENERIC_PORT = 0,
} Dio_PortTypesType;


// Channels	
#define DIO_CHANNEL_NAME_LED_K2	125

// Channel group

// Ports
#define DIO_PORT_NAME_DioPort_1 		(DIO_MPC5567_GENERIC_PORT)




// Pointers for convenience.
// Channels	
extern const Dio_ChannelType DioChannelConfigData[];
// Channel group
extern const Dio_ChannelGroupType DioConfigData[];
// Port
extern const Dio_PortType DioPortConfigData[];

#endif /*DIO_CFG_H_*/
