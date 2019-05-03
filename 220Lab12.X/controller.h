#ifndef CONTROLLER_H
#define	CONTROLLER_H


extern uint16_t DMXAddress;

void CONTROLLER_init();
void dmxAddress_inc();
void dmxAddress_dec();
void CONTROLLER_task();
void BUTTONS_isPressed(bool active);

 
#endif	
