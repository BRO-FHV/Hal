/*
 * Hal: hw_cpu.c
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: Mar 16, 2014
 * Description: 
 * TODO
 */
#include "hw_cpu.h"

void CPUirqd(void)
{
    // Disable IRQ in CPSR
    asm("    mrs     r0, CPSR\n\t"
        "    orr     r0, r0, #0x80\n\t"
        "    msr     CPSR_c, r0");
}

void CPUirqe(void)
{
    // Enable IRQ in CPSR
    asm("    mrs     r0, CPSR\n\t"
        "    bic     r0, r0, #0x80\n\t"
        "    msr     CPSR_c, r0");
}
