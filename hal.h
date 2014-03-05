/*
 * Hal: hal.h
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: 05.03.2014
 * Description:
 * TODO
 */
#ifndef HAL_H_
#define HAL_H_

//GPIO5
#define LED1 						0x00200000   // Bit 21
#define LED0 						0x00400000   // Bit 22
#define GPIO5_OUT					(*((volatile unsigned long*) 0x4905603C)) // Data Out register
#define GPIO5_OE 					(*((volatile unsigned long*) 0x49056034)) // Output Data Enable Register
//PRCM
#define CM_FCLKEN_PER				(*((volatile unsigned long*) 0x48005000)) // Controls the modules functional clock activity.
#define CM_ICLKEN_PER				(*((volatile unsigned long*) 0x48005010)) // Controls the modules interface clock activity
//SCM
#define CONTROL_PADCONF_UART1_TX	(*((volatile unsigned long*) 0x4800217c)) // Pad configuration for GPIO_149
#define CONTROL_PADCONF_UART1_CTS	(*((volatile unsigned long*) 0x48002180)) // Pad configuration for GPIO_150

#endif
