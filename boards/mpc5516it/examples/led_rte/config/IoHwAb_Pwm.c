/*
* Configuration of module: IoHwAb (IoHwAb_Pwm.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC551x
*
* Module vendor:           ArcCore
* Generator version:       3.1.3
*
* Generated by Arctic Studio (http://arccore.com) 
*/

#include "IoHwAb.h"
#include "IoHwAb_Internal.h"
/****************************************** Pwm outputs *******************************************/

/************************************ Parameterized Pwm output ************************************/

Std_ReturnType IoHwAb_Set_Duty(IoHwAb_SignalType signal, IoHwAb_DutyType duty, IoHwAb_StatusType *status) {

	IOHWAB_VALIDATE_RETURN(IOHWAB_SIGNAL_IS_VALID_PWM_DUTY_OUTPUT(signal), IOHWAB_PWMDUTY_SET_ID, IOHWAB_E_PARAM_SIGNAL, E_NOT_OK);

	switch (signal) {
	default: {
		return E_NOT_OK;
	}
		break;
	}
}

Std_ReturnType IoHwAb_Set_FrequencyAndDuty(IoHwAb_SignalType signal, IoHwAb_FrequencyType frequency, IoHwAb_DutyType duty, IoHwAb_StatusType *status) {

	IOHWAB_VALIDATE_RETURN(IOHWAB_SIGNAL_IS_VALID_PWM_FREQUENCYANDDUTY_OUTPUT(signal), IOHWAB_PWMFREQUENCYANDDUTY_SET_ID, IOHWAB_E_PARAM_SIGNAL, E_NOT_OK);

	switch (signal) {
	default: {
		return E_NOT_OK;
	}
		break;
	}
}

