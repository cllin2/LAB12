#ifndef LED_H
#define	LED_H

#include <stdio.h>
#include <stdint.h>


void LED_task(void);
void LED_init(void);
void LED_setColor(uint8_t red, uint8_t green, uint8_t blue, uint8_t white);
void soundTask();
   

typedef enum {
    MODE_AUTO,
    MODE_DMX,
    MODE_SOUND
} mode_t;

typedef struct {
    int red;
    int green;
    int blue;
    int white;  
} color_t ;

extern color_t colors[10];

#endif
