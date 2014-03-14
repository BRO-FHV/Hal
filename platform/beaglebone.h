/*
 * Hal: beaglebone.h
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: Mar 14, 2014
 * Description: 
 * TODO
 */

#ifndef BEAGLEBONE_H_
#define BEAGLEBONE_H_

/**
 * Interrupt registers
 */
#define SOC_AINTC_REGS		(0x48200000)
#define INTC_MIR_CLEAR(n) 	(0x88 + ((n) * 0x20))

/**
 * Enable UART0 Module
 */
extern void UART0ModuleClkConfig(void);
/**
 * Select UART Pin Mux
 */
void UARTPinMuxSetup(unsigned int instanceNum);

#endif /* BEAGLEBONE_H_ */
