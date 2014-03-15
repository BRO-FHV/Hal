/*
 * hw_interrupt.h
 *
 *  Created on: 15.03.2014
 *      Author: Johannes
 */

#ifndef HW_INTERRUPT_H_
#define HW_INTERRUPT_H_


#define REG_IDX_SHIFT (0x05)
#define REG_BIT_MASK (0x1F)
#define SOC_AINTC_REGS (0x48200000)

#define INTC_MIR_CLEAR(n) (0x88 + ((n) * 0x20))

#define INTC_SIR_IRQ (0x48200040)


#endif /* HW_INTERRUPT_H_ */
