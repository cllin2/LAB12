#include "mcc_generated_files/adcc.h"
#include "button.h"
#include "clock.h"
#include "tm1650.h"
#include "controller.h"
#include "beat.h"
#include "LED.h"

#include <xc.h>
#include <stdio.h>
#include <stdint.h>



/**
 * Increments the address and updates the display
 */

uint16_t DMXAddress = 1;

void dmxAddress_inc() {
    if (DMXAddress == 255)
        DMXAddress = 1;
    else
        DMXAddress++;

    // update the display
    TM1650_fastPrintNum(DMXAddress);
}

void CONTROLLER_init() {
    TM1650_fastPrintNum(DMXAddress);
}

/**
 * Decrements the address and updates the display
 */
void dmxAddress_dec() {
    if (DMXAddress == 1)
        DMXAddress = 255;
    else
        DMXAddress--;

    // update the display
    TM1650_fastPrintNum(DMXAddress);
}

static time_t lastTime = 0;
extern bool detected = false;
extern bool State = false;
static time_t lastActiveTime = 0;
static bool lastDetected = 0; // whether the last run detected a beat

void CONTROLLER_task() {
    time_t time = CLOCK_getTime();
    // only run every 10 ms
    if (time - lastTime < 25)
        return;
    lastTime = time;
    State = true;

    if (BUTTONS_isClicked(up)) {
        dmxAddress_inc();
    } else if (BUTTONS_isClicked(down)) {
        dmxAddress_dec();
    } else if (BUTTONS_isHeld(up)) {
        dmxAddress_inc();
    } else if (BUTTONS_isHeld(down)) {
        dmxAddress_dec();
    } else
    // LED_setColor(dmxAddress,dmxAddress,dmxAddress,dmxAddress);  //DMX task added 
      State = false;


    if (State) {
        TM1650_enable(true);
        lastActiveTime = CLOCK_getTime();
    }

    if (CLOCK_getTime() - lastActiveTime >= 5000) {
        TM1650_enable(false);
        lastActiveTime = CLOCK_getTime() - 5001;
    }
}

