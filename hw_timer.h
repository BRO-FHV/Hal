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
	#define 	TIMER1_TISR				0x018 //The Timer Status Register is used to determine which of the timer events requested an interrupt. (T0, T2-T7: IRQENABLE_SET)
	#define 	TIMER1_TIER				0x01C //Timer Interrupt Enable Set Register
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









	#define CM_PER 		0x44E00000
	#define CM_WKUP 	0x44E00400

	#define TIMER_INITIAL_COUNT             (0xFF000000u)
	#define TIMER_RLD_COUNT                 (0xFFE00000u)

	#define DMTIMER_TCLR_AR   (0x00000002u)

	#define DMTIMER_TCLR_CE   (0x00000040u)

	/* Value used to enable the timer in one-shot and compare mode */
	#define DMTIMER_ONESHOT_CMP_ENABLE          (DMTIMER_TCLR_CE)
	/* Value used to enable the timer only in one-shot mode */
	#define DMTIMER_ONESHOT_NOCMP_ENABLE        (0x0000000)
	/* Value used to enable the timer in auto-reload and compare mode */
	#define DMTIMER_AUTORLD_CMP_ENABLE          (DMTIMER_TCLR_AR | DMTIMER_TCLR_CE)
	/* Value used to enable the timer only in auto-reload mode */
	#define DMTIMER_AUTORLD_NOCMP_ENABLE        (DMTIMER_TCLR_AR)
#endif
