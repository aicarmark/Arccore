/*
* Configuration of module: Rte (Rte_Data.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    TMS570
*
* Module vendor:           ArcCore
* Generator version:       0.0.13
*
* Generated by Arctic Studio (http://arccore.com) 
*/

/* Rte_Data.h */

#ifndef RTE_DATA_H
#define RTE_DATA_H

#include "Rte_Type.h"
#include "cirq_buffer.h"

extern UInt16 Rte_Buf_Tester_prototype_Result_result;

void Rte_WriteBuffer_Rte_Buf_Tester_prototype_Result_result(UInt16 Value);

void Rte_TesterRunnable();

void Rte_FreqReqRunnable();

Std_ReturnType Rte_Multiply(const UInt8 arg1, const UInt8 arg2, UInt16* result);

void Rte_LoggerRunnable();

void Rte_Logger2Runnable();

#endif
