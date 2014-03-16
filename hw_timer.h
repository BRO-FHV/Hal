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
	#define 	TIMER0			0x44E05000
	#define 	TIMER_1MS		0x44E31000
	#define 	TIMER2			0x48040000
	#define 	TIMER3			0x48042000
	#define 	TIMER4			0x48044000
	#define 	TIMER5			0x48046000
	#define 	TIMER6			0x48048000
	#define 	TIMER7			0x4804A000


	//define	Timer Register 		Offsets
	#define 	TIMER_TIDR  		0x000 //Identification Register
	#define 	TIMER_TIOCP_CFG		0x010 //Timer OCP Configuration Register
	#define 	TIMER_IRQ_EOI		0x020 //Timer IRQ End-of-Interrupt Register
	#define 	TIMER_IRQSTATUS_RAW	0x024 //Timer OCP Configuration Register
	#define 	TIMER_IRQSTATUS		0x028 //Timer Status Register (TISR)
	#define 	TIMER_IRQENABLE_SET	0x02C //Timer Interrupt Enable Set Register (TIER)
	#define 	TIMER_IRQENABLE_CLR	0x030 //Interrupt Enable Clear Register
	#define 	TIMER_IRQWAKEEN		0x034 //Timer IRQ Wakeup Enable Register (TWER)
	#define 	TIMER_TCLR  		0x038 //Timer Control Register
	#define 	TIMER_TCRR  		0x03C //Timer Counter Register
	#define 	TIMER_TLDR  		0x040 //Timer Load Register
	#define 	TIMER_TTGR 			0x044 //Timer Trigger Register
	#define 	TIMER_TWPS 			0x048 //Timer Write Posting Bits Register
	#define 	TIMER_TMAR  		0x04C //Timer Match Register


	#define 	TIMER_TISTAT		0x014

	#define 	IRQ_EOI		0x20

	#define INTC_MIR_CLEAR1 0x482000C8 //0x48200000 + Offset C8
	//#define INTC_SIR_IRQ 0x48200040

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
