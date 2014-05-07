/*
 * mmu.c
 *
 *  Created on: 13.06.2013
 *      Author: Daniel
 */

#include "mmu.h"

uint8_t HalMmuGetDomainAccess(uint8_t domain)
{
    switch(domain)
    {
        case 0:
            return 0x03;
        default:
            return 0x01;
    }
}
