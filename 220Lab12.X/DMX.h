#ifndef DMX_H
#define DMX_H

#include <stdbool.h>

void DMX_task(void);
void DMX_init(void);
bool isDMXModeActive(void);
void DMXdigitAddress(color_t* color);

#endif 