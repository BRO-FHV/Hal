/*
 * Hal: basic.h
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: Mar 14, 2014
 * Description: 
 * TODO
<<<<<<< HEAD
 *
 */



#ifndef BASIC_H_
#define BASIC_H_

#include <inttypes.h>

#define wait(x)	while(x);
#define reg32r(b, r) (*(volatile uint32_t *)((b)+(r)))
#define reg32w(b, r, v) (*((volatile uint32_t *)((b)+(r))) = (v))
<<<<<<< HEAD
#define reg32m(b, r, v) (*((volatile uint32_t *)((b)+(r))) |= (v))
#define reg32a(b, r, v) (*((volatile uint32_t *)((b)+(r))) &= (v))
=======
 */

#ifndef BASIC_H_
#define BASIC_H_

#define reg32r(b, r) (*(volatile uint32_t *)((b)+(r)))
#define reg32w(b, r, v) (*((volatile uint32_t *)((b)+(r))) = (v))
<<<<<<< HEAD
>>>>>>> origin/feature/gpio
=======
#define reg32m(b, r, v) (*((volatile uint32_t *)((b)+(r))) |= (v))
#define reg32a(b, r, v) (*((volatile uint32_t *)((b)+(r))) &= (v))
#define reg32an(b, r, v) (*((volatile uint32_t *)((b)+(r))) &= ~(v))

>>>>>>> origin/feature/gpioLed
=======
#define reg32wor(b, r, v) (*((volatile uint32_t *)((b)+(r))) |= (v))
#define reg32wxor(b, r, v) (*((volatile uint32_t *)((b)+(r))) ^= (v))
>>>>>>> origin/feature/timer

#endif /* BASIC_H_ */
