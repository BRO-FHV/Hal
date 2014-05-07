/*
 * mem.h
 *
 *  Created on: 13.06.2013
 *      Author: Daniel
 */

#ifndef MEM_GENARCH_H_
#define MEM_GENARCH_H_

#include <basic.h>

typedef uint8_t MemoryType;

typedef struct {
	Boolean occupied;
    Boolean reserved;
} MemPagetableLookup;

typedef struct {
    uint32_t globalStartAddress;
    uint32_t globalSize;
    uint32_t userStartAddress;
    uint32_t userSize;
    uint32_t pageTableTotalCount;
    uint32_t pageTableAllocatedCount;
    MemPagetableLookup* pageTableLookup;
} MemMemory;

typedef struct {
    uint32_t startAddress;
    uint32_t size;
} MemDevicememory;

extern uint32_t intvecs_start;
extern uint32_t intvecs_size;

extern uint8_t memory_count;
extern MemMemory* memories;
extern uint8_t device_memory_count;
extern MemDevicememory* device_memories;

void HalMemInit(void);

#endif /* MEM_H_ */
