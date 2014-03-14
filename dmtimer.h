/*
 * Hal: dmtimer.h
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: 05.03.2014
 * Description:
 * TODO
 */
#ifndef DMTIMER_H_
#define DMTIMER_H_

	#define 	DMTIMER_1MS			0x44E31000
	#define 	DMTIMER0			0x44E05000
	#define 	DMTIMER2			0x48040000

	//Timer Register Offsets DMTimer0
	#define 	TIDR  		0x000
	#define 	TISTAT  	0x014
	#define 	TISR  		0x028
	#define 	TIER  		0x02C
	#define 	TMAR  		0x04C
	#define 	TCLR  		0x038
	#define 	TLDR  		0x040
	#define 	TCRR  		0x03C
	#define 	TWER  		0x034
	#define 	TTGR 		0x044

	#define INTC_MIR_CLEAR1 0x482000C8 //0x48200000 + Offset C8
	#define INTC_SIR_IRQ 0x48200040

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
