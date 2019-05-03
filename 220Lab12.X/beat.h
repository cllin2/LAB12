#include "clock.h"
#include "tm1650.h"
#include "stdio.h"



#ifndef BEAT_H
#define	BEAT_H


void BEAT_init();
void BEAT_task();
bool BEAT_detected();
void putch(char character);
static void adcThresholdHandler();

#endif