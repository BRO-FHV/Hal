/*
 * Hal: hw_timer.h
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: 05.03.2014
 * Description:
 * TODO
 */
#ifndef DMTIMER_H_
#define DMTIMER_H_

	//define	Time name		Start Address
	#define 	TIMER_0			0x44E05000
	#define 	TIMER_1MS		0x44E31000
	#define 	TIMER_2			0x48040000
	#define 	TIMER_3			0x48042000
	#define 	TIMER_4			0x48044000
	#define 	TIMER_5			0x48046000
	#define 	TIMER_6			0x48048000
	#define 	TIMER_7			0x4804A000

	//ONLY FOR TIMER 1 (1 ms)
	//define	Timer Register 			Offsets
	#define 	TIMER1_TIDR  			0x000 //Identification Register
	#define 	TIMER1_TIOCP_CFG		0x010 //Timer OCP Configuration Register
	#define 	TIMER1_TISTAT			0x014 //This register provides status information about the module, excluding the interrupt status information
	#define 	TIMER1_TISR				0x018 //The Timer Status Register is used to determine which of the timer events requested an interrupt. (T0, T2-T7: IRQSTATUS)
	#define 	TIMER1_TIER				0x01C //Timer Interrupt Enable Set Register (T0, T2-T7: IRQENABLE_SET)
	#define 	TIMER1_TWER				0x020 //Timer IRQ Wakeup Enable Register (T0, T2-T7: IRQWAKEEN)
	#define 	TIMER1_TCLR  			0x024 //Timer Control Register
	#define 	TIMER1_TCRR  			0x028 //Timer Counter Register
	#define 	TIMER1_TLDR  			0x02C //Timer Load Register
	#define 	TIMER1_TTGR 			0x030 //Timer Trigger Register
	#define 	TIMER1_TWPS 			0x034 //Timer Write Posting Bits Register
	#define 	TIMER1_TMAR  			0x038 //Timer Match Register
	#define 	TIMER1_TCAR1  			0x03C //Timer Capture Register
	#define 	TIMER1_TSICR  			0x040 //Timer Synchronous Interface Control Register
	#define 	TIMER1_TCAR2  			0x044 //Timer Capture 2 Register
	#define 	TIMER1_TPIR  			0x048 //This register is used for 1ms tick generation. The TPIR register holds the value of the positive increment. The value of this register
											  //is added with the value of the TCVR to define whether next value loaded in TCRR will be the sub-period value or the over-period value.
	#define 	TIMER1_TNIR  			0x04C //This register is used for 1ms tick generation. The TNIR register holds the value of the negative increment. The value of this register
											  //is added with the value of the TCVR to define whether next value loaded in TCRR will be the sub-period value or the over-period value.
	#define 	TIMER1_TCVR 			0x050 //This register is used for 1ms tick generation. The TCVR register defines whether next value loaded in TCRR will be the sub-period value or the over-period value.
	#define 	TIMER1_TOCR 			0x054 //This register is used to mask the tick interrupt for a selected number of ticks.
	#define 	TIMER1_TOWR 			0x058 //This register holds the number of masked overflow interrupts.

	//ONLY FOR TIMER 0, 2 - 7
	//define	Timer Register 		Offsets
	#define 	TIMER_TIDR  		0x000 //Identification Register
	#define 	TIMER_TIOCP_CFG		0x010 //Timer OCP Configuration Register
	#define 	TIMER_IRQ_EOI		0x020 //Timer IRQ End-of-Interrupt Register
	#define 	TIMER_IRQSTATUS_RAW	0x024 //Timer OCP Configuration Register
	#define 	TIMER_IRQSTATUS		0x028 //Timer Status Register (T1: TISR)
	#define 	TIMER_IRQENABLE_SET	0x02C //Timer Interrupt Enable Set Register (T1: TIER)
	#define 	TIMER_IRQENABLE_CLR	0x030 //Interrupt Enable Clear Register
	#define 	TIMER_IRQWAKEEN		0x034 //Timer IRQ Wakeup Enable Register (T1: TWER)
	#define 	TIMER_TCLR  		0x038 //Timer Control Register
	#define 	TIMER_TCRR  		0x03C //Timer Counter Register
	#define 	TIMER_TLDR  		0x040 //Timer Load Register
	#define 	TIMER_TTGR 			0x044 //Timer Trigger Register
	#define 	TIMER_TWPS 			0x048 //Timer Write Posting Bits Register
	#define 	TIMER_TMAR  		0x04C //Timer Match Register
	#define 	TIMER_TCAR1  		0x050 //Timer Capture Register
	#define 	TIMER_TSICR  		0x054 //Timer Synchronous Interface Control Register
	#define 	TIMER_TCAR2  		0x058 //Timer Capture 2 Register

	#define TCLR_ST   0x001u //Bit 0
	#define TCLR_AR   0x002u //Bit 1
	#define TCLR_CE   0x040u //Bit 6

	#define IRQENABLE_TCAR_EN_FLAG 	0x04u //Bit 2, IRQ enable for Capture
	#define IRQENABLE_OVF_EN_FLAG	0x02u //Bit 1, IRQ enable for Overflow
	#define IRQENABLE_MAT_EN_FLAG	0x01u //Bit 0, IRQ enable for Match

	#define IRQWAKEEN_TCAR_WUP_ENA 	0x04u //Bit 2, Wakeup generation for Capture
	#define IRQWAKEEN_OVF_WUP_ENA	0x02u //Bit 1, Wakeup generation for Overflow
	#define IRQWAKEEN_MAT_WUP_ENA	0x01u //Bit 0, Wakeup generation for Match

#endif
