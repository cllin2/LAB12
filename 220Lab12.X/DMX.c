#include "mcc_generated_files/mcc.h"
#include "tm1650.h"
#include "clock.h"
#include "controller.h"
#include "button.h"
#include <stdio.h>
#include "beat.h"
#include "LED.h"

#include <stdbool.h>
#include <xc.h>

uint16_t dmxChannelData[514];
int datapointer = 0;

static time_t lastTime = 0;
static bool ISReceiveDMXFrame = false;
static bool isDMXActive = false;


void DMX_Receive() {
    ISReceiveDMXFrame = true;
    if (RC1STAbits.FERR) {
        datapointer = 0;
    }
      // check for overrun erro to make each bytes are rcorded
dmxChannelData[datapointer++] = RC1REG; 

    if (RC1STAbits.OERR) {
        RC1STAbits.CREN = 0;// disable receiver
        RC1STAbits.CREN = 1;//enable receiver
    }
   
       
}

void DMX_init()
{
    EUSART1_SetRxInterruptHandler(DMX_Receive);
}

bool isDMXModeActive()
{
    return isDMXActive;
}

void DMXdigitAddress(color_t* color)
{
    color ->red = dmxChannelData[DMXAddress+0];
    color ->blue = dmxChannelData[DMXAddress+1];
    color ->green = dmxChannelData[DMXAddress+2];
    color ->white = dmxChannelData[DMXAddress+3];
    
}

void DMX_task(){
    
  time_t time = CLOCK_getTime();
  
    if (time - lastTime < 1000)
        return;
lastTime = time;  

  if (ISReceiveDMXFrame == true)
  {
      ISReceiveDMXFrame = false;
      isDMXActive = true;           
  } else
  {
      isDMXActive = false;
  }
    
}
