/*!
    \file  systick.h
    \brief the header file of systick
*/

/*
    Copyright (C) 2016 GigaDevice

    2016-10-19, V1.0.0, demo for GD32F4xx
*/

#ifndef SYS_TICK_H
#define SYS_TICK_H

#include <stdint.h>

/* configure systick */
void systick_config(void);
/* delay a time in milliseconds */
void delay_1ms(uint32_t count);
/* delay decrement */
void delay_decrement(void);
void nopdelay_us(uint32_t t);
void nopdelay_ms(uint32_t t);

#endif /* SYS_TICK_H */
