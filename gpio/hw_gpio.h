/*
 * Driver: hw_gpio.h
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: 14.03.2014
 * Description: 
 * TODO
 */
/** ============================================================================
 *   \file  hw_gpio.h
 *
 *   \brief This file contains the peripheral information for gpio Moduls
 *
 *  ============================================================================
 */


#ifndef HW_GPIO_H_
#define HW_GPIO_H_

/***********************************************************************\
 * Bundles Definition
\***********************************************************************/



/*************************************************************************\
 * Registers Definition
\*************************************************************************/

#define GPIO_REVISION   (0x0)
#define GPIO_SYSCONFIG   (0x10)
#define GPIO_IRQSTATUS_RAW(n)   (0x24 + (n * 4))
#define GPIO_IRQSTATUS(n)   (0x2C + (n * 4))
#define GPIO_IRQSTATUS_SET(n)   (0x34 + (n * 4))
#define GPIO_IRQSTATUS_CLR(n)   (0x3C + (n * 4))
#define GPIO_IRQWAKEN(n)   (0x44 + (n * 4))
#define GPIO_SYSSTATUS   (0x114)
#define GPIO_CTRL   (0x130)
#define GPIO_OE   (0x134)
#define GPIO_DATAIN   (0x138)
#define GPIO_DATAOUT   (0x13C)
#define GPIO_LEVELDETECT(n)   (0x140 + (n * 4))
#define GPIO_RISINGDETECT   (0x148)
#define GPIO_FALLINGDETECT   (0x14C)
#define GPIO_DEBOUNCENABLE   (0x150)
#define GPIO_DEBOUNCINGTIME   (0x154)
#define GPIO_CLEARDATAOUT   (0x190)
#define GPIO_SETDATAOUT   (0x194)

/**************************************************************************\
 * Field Definition Macros
\**************************************************************************/

/* REVISION */
#define GPIO_REVISION_CUSTOM   (0x000000C0u)
#define GPIO_REVISION_CUSTOM_SHIFT   (0x00000006u)

#define GPIO_REVISION_FUNC   (0x0FFF0000u)
#define GPIO_REVISION_FUNC_SHIFT   (0x00000010u)

#define GPIO_REVISION_MAJOR   (0x00000700u)
#define GPIO_REVISION_MAJOR_SHIFT   (0x00000008u)

#define GPIO_REVISION_MINOR   (0x0000003Fu)
#define GPIO_REVISION_MINOR_SHIFT   (0x00000000u)

#define GPIO_REVISION_RTL   (0x0000F800u)
#define GPIO_REVISION_RTL_SHIFT   (0x0000000Bu)

#define GPIO_REVISION_SCHEME   (0xC0000000u)
#define GPIO_REVISION_SCHEME_SHIFT   (0x0000001Eu)


/* SYSCONFIG */
#define GPIO_SYSCONFIG_AUTOIDLE   (0x00000001u)
#define GPIO_SYSCONFIG_AUTOIDLE_SHIFT   (0x00000000u)
#define GPIO_SYSCONFIG_AUTOIDLE_AUTOMATIC   (0x1u)
#define GPIO_SYSCONFIG_AUTOIDLE_FREERUN   (0x0u)

#define GPIO_SYSCONFIG_ENAWAKEUP   (0x00000004u)
#define GPIO_SYSCONFIG_ENAWAKEUP_SHIFT   (0x00000002u)
#define GPIO_SYSCONFIG_ENAWAKEUP_DISABLE   (0x0u)
#define GPIO_SYSCONFIG_ENAWAKEUP_ENABLE   (0x1u)

#define GPIO_SYSCONFIG_IDLEMODE   (0x00000018u)
#define GPIO_SYSCONFIG_IDLEMODE_SHIFT   (0x00000003u)
#define GPIO_SYSCONFIG_IDLEMODE_FORCEIDLE   (0x0u)
#define GPIO_SYSCONFIG_IDLEMODE_NOIDLE   (0x1u)
#define GPIO_SYSCONFIG_IDLEMODE_SMARTIDLE   (0x2u)
#define GPIO_SYSCONFIG_IDLEMODE_SMARTIDLEWAKEUP   (0x3u)

#define GPIO_SYSCONFIG_SOFTRESET   (0x00000002u)
#define GPIO_SYSCONFIG_SOFTRESET_SHIFT   (0x00000001u)
#define GPIO_SYSCONFIG_SOFTRESET_NORMAL   (0x0u)
#define GPIO_SYSCONFIG_SOFTRESET_RESET   (0x1u)


/* IRQSTATUS_RAW_0 */
#define GPIO_IRQSTATUS_RAW_0_INTLINE   (0xFFFFFFFFu)
#define GPIO_IRQSTATUS_RAW_0_INTLINE_SHIFT   (0x00000000u)


/* IRQSTATUS_RAW_1 */
#define GPIO_IRQSTATUS_RAW_1_INTLINE   (0xFFFFFFFFu)
#define GPIO_IRQSTATUS_RAW_1_INTLINE_SHIFT   (0x00000000u)


/* IRQSTATUS_0 */
#define GPIO_IRQSTATUS_0_INTLINE   (0xFFFFFFFFu)
#define GPIO_IRQSTATUS_0_INTLINE_SHIFT   (0x00000000u)


/* IRQSTATUS_1 */
#define GPIO_IRQSTATUS_1_INTLINE   (0xFFFFFFFFu)
#define GPIO_IRQSTATUS_1_INTLINE_SHIFT   (0x00000000u)


/* IRQSTATUS_SET_0 */
#define GPIO_IRQSTATUS_SET_0_INTLINE   (0xFFFFFFFFu)
#define GPIO_IRQSTATUS_SET_0_INTLINE_SHIFT   (0x00000000u)


/* IRQSTATUS_SET_1 */
#define GPIO_IRQSTATUS_SET_1_INTLINE   (0xFFFFFFFFu)
#define GPIO_IRQSTATUS_SET_1_INTLINE_SHIFT   (0x00000000u)


/* IRQSTATUS_CLR_0 */
#define GPIO_IRQSTATUS_CLR_0_INTLINE   (0xFFFFFFFFu)
#define GPIO_IRQSTATUS_CLR_0_INTLINE_SHIFT   (0x00000000u)


/* IRQSTATUS_CLR_1 */
#define GPIO_IRQSTATUS_CLR_1_INTLINE   (0xFFFFFFFFu)
#define GPIO_IRQSTATUS_CLR_1_INTLINE_SHIFT   (0x00000000u)


/* SYSSTATUS */
#define GPIO_SYSSTATUS_RESETDONE   (0x00000001u)
#define GPIO_SYSSTATUS_RESETDONE_SHIFT   (0x00000000u)
#define GPIO_SYSSTATUS_RESETDONE_COMPLETE   (0x1u)
#define GPIO_SYSSTATUS_RESETDONE_ONGOING   (0x0u)


/* CTRL */
#define GPIO_CTRL_DISABLEMODULE   (0x00000001u)
#define GPIO_CTRL_DISABLEMODULE_SHIFT   (0x00000000u)
#define GPIO_CTRL_DISABLEMODULE_DISABLED   (0x1u)
#define GPIO_CTRL_DISABLEMODULE_ENABLED   (0x0u)

#define GPIO_CTRL_GATINGRATIO   (0x00000006u)
#define GPIO_CTRL_GATINGRATIO_SHIFT   (0x00000001u)
#define GPIO_CTRL_GATINGRATIO_N_1   (0x0u)
#define GPIO_CTRL_GATINGRATIO_N_2   (0x1u)
#define GPIO_CTRL_GATINGRATIO_N_4   (0x2u)
#define GPIO_CTRL_GATINGRATIO_N_8   (0x3u)


/* OE */
#define GPIO_OE_OUTPUTEN   (0xFFFFFFFFu)
#define GPIO_OE_OUTPUTEN_SHIFT   (0x00000000u)
#define GPIO_OE_OUTPUTEN_DISABLED   (0x1u)
#define GPIO_OE_OUTPUTEN_ENABLED   (0x0u)


/* DATAIN */
#define GPIO_DATAIN_DATAIN   (0xFFFFFFFFu)
#define GPIO_DATAIN_DATAIN_SHIFT   (0x00000000u)


/* DATAOUT */
#define GPIO_DATAOUT_DATAOUT   (0xFFFFFFFFu)
#define GPIO_DATAOUT_DATAOUT_SHIFT   (0x00000000u)


/* LEVELDETECT0 */
#define GPIO_LEVELDETECT0_LEVELDETECT0   (0xFFFFFFFFu)
#define GPIO_LEVELDETECT0_LEVELDETECT0_SHIFT   (0x00000000u)
#define GPIO_LEVELDETECT0_LEVELDETECT0_DISABLED   (0x0u)
#define GPIO_LEVELDETECT0_LEVELDETECT0_ENABLED   (0x1u)


/* LEVELDETECT1 */
#define GPIO_LEVELDETECT1_LEVELDETECT1   (0xFFFFFFFFu)
#define GPIO_LEVELDETECT1_LEVELDETECT1_SHIFT   (0x00000000u)
#define GPIO_LEVELDETECT1_LEVELDETECT1_DISABLED   (0x0u)
#define GPIO_LEVELDETECT1_LEVELDETECT1_ENABLED   (0x1u)


/* RISINGDETECT */
#define GPIO_RISINGDETECT_RISINGDETECT   (0xFFFFFFFFu)
#define GPIO_RISINGDETECT_RISINGDETECT_SHIFT   (0x00000000u)
#define GPIO_RISINGDETECT_RISINGDETECT_DISABLED   (0x0u)
#define GPIO_RISINGDETECT_RISINGDETECT_ENABLED   (0x1u)


/* FALLINGDETECT */
#define GPIO_FALLINGDETECT_FALLINGDETECT   (0xFFFFFFFFu)
#define GPIO_FALLINGDETECT_FALLINGDETECT_SHIFT   (0x00000000u)
#define GPIO_FALLINGDETECT_FALLINGDETECT_DISABLED   (0x0u)
#define GPIO_FALLINGDETECT_FALLINGDETECT_ENABLED   (0x1u)


/* DEBOUNCENABLE */
#define GPIO_DEBOUNCENABLE_DEBOUNCEENABLE   (0xFFFFFFFFu)
#define GPIO_DEBOUNCENABLE_DEBOUNCEENABLE_SHIFT   (0x00000000u)
#define GPIO_DEBOUNCENABLE_DEBOUNCEENABLE_DEBOUNCE   (0x1u)
#define GPIO_DEBOUNCENABLE_DEBOUNCEENABLE_NODEBOUNCE   (0x0u)


/* DEBOUNCINGTIME */
#define GPIO_DEBOUNCINGTIME_DEBOUNCETIME   (0x000000FFu)
#define GPIO_DEBOUNCINGTIME_DEBOUNCETIME_SHIFT   (0x00000000u)


/* CLEARDATAOUT */
#define GPIO_CLEARDATAOUT_INTLINE   (0xFFFFFFFFu)
#define GPIO_CLEARDATAOUT_INTLINE_SHIFT   (0x00000000u)


/* SETDATAOUT */
#define GPIO_SETDATAOUT_INTLINE   (0xFFFFFFFFu)
#define GPIO_SETDATAOUT_INTLINE_SHIFT   (0x00000000u)

/* GPIO OUTPU */
#define GPIO_OE_OUTPUTEN_DISABLED   (0x1u)
#define GPIO_OE_OUTPUTEN_ENABLED   (0x0u)

/* GPIO 0 */
/*************************************************************************\
 * Registers Definition
\*************************************************************************/

#define CM_WKUP_CLKSTCTRL   (0x0)
#define CM_WKUP_GPIO0_CLKCTRL   (0x8)
#define CM_WKUP_CM_L4_WKUP_AON_CLKSTCTRL   (0xcc)
#define CM_WKUP_CONTROL_CLKCTRL   (0x4)
#define CM_WKUP_L4WKUP_CLKCTRL   (0xc)

/* CM WKUP REgisters */

#define CM_WKUP_CLKSTCTRL_CLKACTIVITY_GPIO0_GDBCLK   (0x00000100u)
#define CM_WKUP_CLKSTCTRL_CLKACTIVITY_GPIO0_GDBCLK_SHIFT   (0x00000008u)
#define CM_WKUP_CLKSTCTRL_CLKACTIVITY_GPIO0_GDBCLK_ACT   (0x1u)
#define CM_WKUP_CLKSTCTRL_CLKACTIVITY_GPIO0_GDBCLK_INACT   (0x0u)
#define CM_WKUP_CLKSTCTRL_CLKACTIVITY_L4_WKUP_GCLK   (0x00000004u)
#define CM_WKUP_CLKSTCTRL_CLKACTIVITY_L4_WKUP_GCLK_SHIFT   (0x00000002u)
#define CM_WKUP_CLKSTCTRL_CLKACTIVITY_L4_WKUP_GCLK_ACT   (0x1u)
#define CM_WKUP_CLKSTCTRL_CLKACTIVITY_L4_WKUP_GCLK_INACT   (0x0u)
#define CM_WKUP_CLKSTCTRL_CLKTRCTRL   (0x00000003u)
#define CM_WKUP_CLKSTCTRL_CLKTRCTRL_SHIFT   (0x00000000u)
#define CM_WKUP_CLKSTCTRL_CLKTRCTRL_HW_AUTO   (0x3u)
#define CM_WKUP_CLKSTCTRL_CLKTRCTRL_NO_SLEEP   (0x0u)
#define CM_WKUP_CLKSTCTRL_CLKTRCTRL_SW_SLEEP   (0x1u)
#define CM_WKUP_CLKSTCTRL_CLKTRCTRL_SW_WKUP   (0x2u)

/* CM_L3_AON_CLKSTCTRL */
#define CM_WKUP_CM_L3_AON_CLKSTCTRL   (0x18)
#define CM_WKUP_CM_L3_AON_CLKSTCTRL_CLKACTIVITY_DBGSYSCLK   (0x00000004u)
#define CM_WKUP_CM_L3_AON_CLKSTCTRL_CLKACTIVITY_DBGSYSCLK_SHIFT   (0x00000002u)
#define CM_WKUP_CM_L3_AON_CLKSTCTRL_CLKACTIVITY_DBGSYSCLK_ACT   (0x1u)
#define CM_WKUP_CM_L3_AON_CLKSTCTRL_CLKACTIVITY_DBGSYSCLK_INACT   (0x0u)
#define CM_WKUP_CM_L3_AON_CLKSTCTRL_CLKACTIVITY_DEBUG_CLKA   (0x00000010u)
#define CM_WKUP_CM_L3_AON_CLKSTCTRL_CLKACTIVITY_DEBUG_CLKA_SHIFT   (0x00000004u)
#define CM_WKUP_CM_L3_AON_CLKSTCTRL_CLKACTIVITY_L3_AON_GCLK   (0x00000008u)
#define CM_WKUP_CM_L3_AON_CLKSTCTRL_CLKACTIVITY_L3_AON_GCLK_SHIFT   (0x00000003u)
#define CM_WKUP_CM_L3_AON_CLKSTCTRL_CLKACTIVITY_L3_AON_GCLK_ACT   (0x1u)
#define CM_WKUP_CM_L3_AON_CLKSTCTRL_CLKACTIVITY_L3_AON_GCLK_INACT   (0x0u)
#define CM_WKUP_CM_L3_AON_CLKSTCTRL_CLKTRCTRL   (0x00000003u)
#define CM_WKUP_CM_L3_AON_CLKSTCTRL_CLKTRCTRL_SHIFT   (0x00000000u)
#define CM_WKUP_CM_L3_AON_CLKSTCTRL_CLKTRCTRL_HW_AUTO   (0x3u)
#define CM_WKUP_CM_L3_AON_CLKSTCTRL_CLKTRCTRL_NO_SLEEP   (0x0u)
#define CM_WKUP_CM_L3_AON_CLKSTCTRL_CLKTRCTRL_SW_SLEEP   (0x1u)
#define CM_WKUP_CM_L3_AON_CLKSTCTRL_CLKTRCTRL_SW_WKUP   (0x2u)

/* CONTROL_CLKCTRL */
#define CM_WKUP_CONTROL_CLKCTRL_IDLEST   (0x00030000u)
#define CM_WKUP_CONTROL_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_WKUP_CONTROL_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_WKUP_CONTROL_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_WKUP_CONTROL_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_WKUP_CONTROL_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_WKUP_CONTROL_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_WKUP_CONTROL_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_WKUP_CONTROL_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_WKUP_CONTROL_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_WKUP_CONTROL_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_WKUP_CONTROL_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* GPIO0_CLKCTRL */
#define CM_WKUP_GPIO0_CLKCTRL_IDLEST   (0x00030000u)
#define CM_WKUP_GPIO0_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_WKUP_GPIO0_CLKCTRL_IDLEST_DISABLED   (0x3u)
#define CM_WKUP_GPIO0_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_WKUP_GPIO0_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_WKUP_GPIO0_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_WKUP_GPIO0_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_WKUP_GPIO0_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_WKUP_GPIO0_CLKCTRL_MODULEMODE_DISABLE   (0x0u)
#define CM_WKUP_GPIO0_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_WKUP_GPIO0_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_WKUP_GPIO0_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)

#define CM_WKUP_GPIO0_CLKCTRL_OPTFCLKEN_GPIO0_GDBCLK   (0x00040000u)
#define CM_WKUP_GPIO0_CLKCTRL_OPTFCLKEN_GPIO0_GDBCLK_SHIFT   (0x00000012u)
#define CM_WKUP_GPIO0_CLKCTRL_OPTFCLKEN_GPIO0_GDBCLK_FCLK_DIS   (0x0u)
#define CM_WKUP_GPIO0_CLKCTRL_OPTFCLKEN_GPIO0_GDBCLK_FCLK_EN   (0x1u)

/* CM_L4_WKUP_AON_CLKSTCTRL */
#define CM_WKUP_CM_L4_WKUP_AON_CLKSTCTRL_CLKACTIVITY_L4_WKUP_AON_GCLK   (0x00000004u)
#define CM_WKUP_CM_L4_WKUP_AON_CLKSTCTRL_CLKACTIVITY_L4_WKUP_AON_GCLK_SHIFT   (0x00000002u)
#define CM_WKUP_CM_L4_WKUP_AON_CLKSTCTRL_CLKACTIVITY_L4_WKUP_AON_GCLK_ACT   (0x1u)
#define CM_WKUP_CM_L4_WKUP_AON_CLKSTCTRL_CLKACTIVITY_L4_WKUP_AON_GCLK_INACT   (0x0u)

#define CM_WKUP_CM_L4_WKUP_AON_CLKSTCTRL_CLKTRCTRL   (0x00000003u)
#define CM_WKUP_CM_L4_WKUP_AON_CLKSTCTRL_CLKTRCTRL_SHIFT   (0x00000000u)
#define CM_WKUP_CM_L4_WKUP_AON_CLKSTCTRL_CLKTRCTRL_NO_SLEEP   (0x0u)
#define CM_WKUP_CM_L4_WKUP_AON_CLKSTCTRL_CLKTRCTRL_SW_SLEEP   (0x1u)
#define CM_WKUP_CM_L4_WKUP_AON_CLKSTCTRL_CLKTRCTRL_SW_WKUP    (0x2u)
#define CM_WKUP_CM_L4_WKUP_AON_CLKSTCTRL_CLKTRCTRL_HW_AUTO    (0x3u)

/* L4WKUP_CLKCTRL */
#define CM_WKUP_L4WKUP_CLKCTRL_IDLEST   (0x00030000u)
#define CM_WKUP_L4WKUP_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_WKUP_L4WKUP_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_WKUP_L4WKUP_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_WKUP_L4WKUP_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_WKUP_L4WKUP_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_WKUP_L4WKUP_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_WKUP_L4WKUP_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_WKUP_L4WKUP_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_WKUP_L4WKUP_CLKCTRL_MODULEMODE_DISABLE  (0x0u)



#endif /* HW_GPIO_H_ */
