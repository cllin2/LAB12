#include "LED.h"
#include "mcc_generated_files/adcc.h"
#include "clock.h"
#include "tm1650.h"
#include "controller.h"
#include "beat.h"
#include "DMX.h"

#include <stdio.h>

color_t color; 
color_t colors[10];
uint8_t Colordigit = 1;

void LED_setColor(uint8_t red, uint8_t green, uint8_t blue, uint8_t white) {
    CCPR1L = red >> 1;
    CCPR2L = green >> 1;
    CCPR3L = blue >> 1;
    CCPR4L = white >> 1;
}

void LED_init() {
  
    colors[0].red = 255;

    colors[2].blue = 123;
    colors[2].green = 123;
    
    colors[4].red = 255;
    colors[4].white = 255;
    
    colors[6].blue = 123;
    colors[6].green = 123;
    
    colors[8].red = 255;
    colors[8].green = 255;
    colors[8].blue = 255;
    colors[8].white = 255;
    
    colors[9].red = 255;
}

static time_t lastRun = 0;

void soundTask() {
    if (CLOCK_getTime() - lastRun < 100)
        return;

    lastRun = CLOCK_getTime();

    if (BEAT_detected()) {
        
        LED_setColor(colors[Colordigit].red, colors[Colordigit].green, colors[Colordigit].blue, colors[Colordigit].white);
        Colordigit++;
       if (Colordigit >= 10 ) {
           Colordigit = 1;
  }
     }
       else  LED_setColor(0, 0, 0, 0);
       
}

void LED_task() {
    if (isDMXModeActive()) {
        DMXdigitAddress(&color);
     LED_setColor(color.red,color.green,color.blue, color.white);
    }
    else  soundTask();
       
}



