/*
 * Hal: uart.c
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: Mar 14, 2014
 * Description: 
 * TODO
 */

#include "../soc_AM335x.h"
#include "../hw_control_AM335x.h"
#include "../basic.h"
#include "hw_beaglebone.h"

extern void Uart0ModuleClkConfig(void) {
}

void UartPinMuxSetup(unsigned int instanceNum) {
	// only one instance exists
	if (0 == instanceNum) {
		/* Enable RXD */
		reg32w(SOC_CONTROL_REGS, CONTROL_CONF_UART_RXD(0),
				(CONTROL_CONF_UART0_RXD_CONF_UART0_RXD_PUTYPESEL | CONTROL_CONF_UART0_RXD_CONF_UART0_RXD_RXACTIVE));

		/* Enable TXD */
		reg32w(SOC_CONTROL_REGS, CONTROL_CONF_UART_TXD(0),
				CONTROL_CONF_UART0_TXD_CONF_UART0_TXD_PUTYPESEL);
	}
}
