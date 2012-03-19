/*
** ###################################################################
**     This code is generated by the Device Initialization Tool.
**     It is overwritten during code generation.
**     USER MODIFICATION ARE PRESERVED ONLY INSIDE EXPLICITLY MARKED SECTIONS.
**
**     Project   : SPI_linear
**     Processor : MC9S12XDP512BMPV
**     Version   : Bean 02.002, Driver 01.03, CPU db: 2.87.222
**     Datasheet : MC9S12XDP512RMV2 Rev. 2.18 May 2008
**     Date/Time : 10/04/2011, 12:26 PM
**     Abstract  :
**         This module contains device initialization code 
**         for selected on-chip peripherals.
**     Contents  :
**         Function "MCU_init" initializes selected peripherals
**
**     (c) Copyright UNIS, a.s. 1997-2008
**     UNIS, a.s.
**     Jundrovska 33
**     624 00 Brno
**     Czech Republic
**     http      : www.processorexpert.com
**     mail      : info@processorexpert.com
** ###################################################################
*/

#ifndef __SPI_linear_H
#define __SPI_linear_H 1

/* Include shared modules, which are used for whole project */


/* User declarations and definitions */
/*   Code, declarations and definitions here will be preserved during code generation */
/* End of user declarations and definitions */
extern void MCU_init(void);
/*
** ===================================================================
**     Method      :  MCU_init (bean MC9S12XDP512_112)
**
**     Description :
**         Device initialization code for selected peripherals.
** ===================================================================
*/



__interrupt void isr_default(void);
/*
** ===================================================================
**     Interrupt handler : isr_default
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/



__interrupt void iPIT1_mesure_temp(void);
/*
** ===================================================================
**     Interrupt handler : iPIT1_mesure_temp
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/



__interrupt void iPIT0_mesure_volt(void);
/*
** ===================================================================
**     Interrupt handler : iPIT0_mesure_volt
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/



__interrupt void isrVcan0tx(void);
/*
** ===================================================================
**     Interrupt handler : isrVcan0tx
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/



__interrupt void iCAN0RxISR(void);
/*
** ===================================================================
**     Interrupt handler : iCAN0RxISR
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/



__interrupt void isrVcan0err(void);
/*
** ===================================================================
**     Interrupt handler : isrVcan0err
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/



__interrupt void isrVcan0wkup(void);
/*
** ===================================================================
**     Interrupt handler : isrVcan0wkup
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/



__interrupt void isrVspi1(void);
/*
** ===================================================================
**     Interrupt handler : isrVspi1
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/



__interrupt void isrVporth(void);
/*
** ===================================================================
**     Interrupt handler : isrVporth
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/



__interrupt void iADC1_seq_complete(void);
/*
** ===================================================================
**     Interrupt handler : iADC1_seq_complete
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/



__interrupt void iADC0_seq_complete(void);
/*
** ===================================================================
**     Interrupt handler : iADC0_seq_complete
**
**     Description :
**         User interrupt service routine. 
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/






/* END SPI_linear */

#endif
/*
** ###################################################################
**
**     This file was created by UNIS Processor Expert 3.00 [04.12]
**     for the Freescale HCS12X series of microcontrollers.
**
** ###################################################################
*/
