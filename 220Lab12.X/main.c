#include "mcc_generated_files/mcc.h"
#include "tm1650.h"
#include "clock.h"
#include "controller.h"
#include "button.h"
#include "beat.h"
#include "LED.h"
#include "DMX.h"

#include <stdint.h>
#include <stdio.h>



///*                         Main application

void main(void) {
    // initialize the device
    SYSTEM_Initialize();
    __delay_ms(500);
    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Per-ipheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    TM1650_init();
    CLOCK_init();
    BUTTONS_init();
    CONTROLLER_init();
    BEAT_init();
    DMX_init();
    LED_init();
    
    while (1) {
        BEAT_task();
        BUTTONS_task();
        CONTROLLER_task();
        DMX_task();
        LED_task();
       
      
    }
}
