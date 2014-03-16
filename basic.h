/*
 * Hal: basic.h
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: Mar 14, 2014
 * Description: 
 * TODO
 */

#ifndef BASIC_H_
#define BASIC_H_

#define reg32r(b, r) (*(volatile uint32_t *)((b)+(r)))
#define reg32w(b, r, v) (*((volatile uint32_t *)((b)+(r))) = (v))
#define reg32m(b, r, v) (*((volatile uint32_t *)((b)+(r))) |= (v))
#define reg32a(b, r, v) (*((volatile uint32_t *)((b)+(r))) &= (v))
#define reg32an(b, r, v) (*((volatile uint32_t *)((b)+(r))) &= ~(v))


#endif /* BASIC_H_ */
