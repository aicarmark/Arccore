/*
* Configuration of module: PduR (PduR_PbCfg.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC5602B
*
* Module vendor:           ArcCore
* Generator version:       3.1.10
*
* Generated by Arctic Studio (http://arccore.com) 
*/


#include "PduR.h"


#if PDUR_CANIF_SUPPORT == STD_ON
#include "CanIf.h"
#endif
#if PDUR_CANTP_SUPPORT == STD_ON
#include "CanTp.h"
#endif
#if PDUR_LINIF_SUPPORT == STD_ON
#include "LinIf.h"
#endif
#if PDUR_COM_SUPPORT == STD_ON
#include "Com.h"
#endif
#if PDUR_DCM_SUPPORT == STD_ON
#include "Dcm.h"
#endif
#if PDUR_J1939TP_SUPPORT == STD_ON
#include "J1939Tp.h"
#endif



PduRTpBufferInfo_type PduRTpBuffers[] = {
};

PduRTpBufferInfo_type *PduRTpRouteBufferPtrs[] = {
   NULL
};


		
const PduRDestPdu_type PduRDestination_ENG_TX_PduRDestination = {
		.DestModule = ARC_PDUR_LINIF,
		.DestPduId = LINIF_PDU_ID_ENG_TX,
		.DataProvision = PDUR_DIRECT,
		.TxBufferRef = NULL
}; 		
const PduRDestPdu_type PduRDestination_LAMPS_RX_PduRDestination1 = {
		.DestModule = ARC_PDUR_COM,
		.DestPduId = COM_PDU_ID_LAMPS_RX,
		.DataProvision = PDUR_DIRECT,
		.TxBufferRef = NULL
}; 		
const PduRDestPdu_type PduRDestination_TCM_RX_PduRDestination = {
		.DestModule = ARC_PDUR_COM,
		.DestPduId = COM_PDU_ID_TCM_RX,
		.DataProvision = PDUR_DIRECT,
		.TxBufferRef = NULL
}; 

const PduRDestPdu_type * const PduRDestinations_ENG_TX[] = {		
	&PduRDestination_ENG_TX_PduRDestination,
	NULL
};
const PduRDestPdu_type * const PduRDestinations_LAMPS_RX[] = {		
	&PduRDestination_LAMPS_RX_PduRDestination1,
	NULL
};
const PduRDestPdu_type * const PduRDestinations_TCM_RX[] = {		
	&PduRDestination_TCM_RX_PduRDestination,
	NULL
};


const PduRRoutingPath_type PduRRoutingPath_ENG_TX = { 
	.SrcModule = ARC_PDUR_COM,
	.SrcPduId = COM_PDU_ID_ENG_TX,
	.SduLength = 64,
	.PduRDestPdus = PduRDestinations_ENG_TX
};	
const PduRRoutingPath_type PduRRoutingPath_LAMPS_RX = { 
	.SrcModule = ARC_PDUR_LINIF,
	.SrcPduId = LINIF_PDU_ID_LAMPS_RX,
	.SduLength = 32,
	.PduRDestPdus = PduRDestinations_LAMPS_RX
};	
const PduRRoutingPath_type PduRRoutingPath_TCM_RX = { 
	.SrcModule = ARC_PDUR_LINIF,
	.SrcPduId = LINIF_PDU_ID_TCM_RX,
	.SduLength = 64,
	.PduRDestPdus = PduRDestinations_TCM_RX
};	


const PduRRoutingPath_type * const PduRRoutingPaths[] = { 
	&PduRRoutingPath_ENG_TX,
	&PduRRoutingPath_LAMPS_RX,
	&PduRRoutingPath_TCM_RX,
	NULL
};


PduR_PBConfigType PduR_Config = {
	.PduRConfigurationId = 0,
	.RoutingPaths = PduRRoutingPaths,
	.TpBuffers = PduRTpBuffers,
	.TpRouteBuffers = PduRTpRouteBufferPtrs,
	.NRoutingPaths = 3
};
