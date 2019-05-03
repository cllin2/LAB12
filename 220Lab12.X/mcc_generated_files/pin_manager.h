/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16F18446
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.00
        MPLAB 	          :  MPLAB X 5.10	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set enter aliases
#define enter_TRIS                 TRISAbits.TRISA2
#define enter_LAT                  LATAbits.LATA2
#define enter_PORT                 PORTAbits.RA2
#define enter_WPU                  WPUAbits.WPUA2
#define enter_OD                   ODCONAbits.ODCA2
#define enter_ANS                  ANSELAbits.ANSA2
#define enter_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define enter_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define enter_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define enter_GetValue()           PORTAbits.RA2
#define enter_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define enter_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define enter_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define enter_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define enter_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define enter_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define enter_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define enter_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set SDA1 aliases
#define SDA1_TRIS                 TRISAbits.TRISA4
#define SDA1_LAT                  LATAbits.LATA4
#define SDA1_PORT                 PORTAbits.RA4
#define SDA1_WPU                  WPUAbits.WPUA4
#define SDA1_OD                   ODCONAbits.ODCA4
#define SDA1_ANS                  ANSELAbits.ANSA4
#define SDA1_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define SDA1_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define SDA1_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define SDA1_GetValue()           PORTAbits.RA4
#define SDA1_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define SDA1_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define SDA1_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define SDA1_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define SDA1_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define SDA1_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define SDA1_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define SDA1_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set SCL1 aliases
#define SCL1_TRIS                 TRISAbits.TRISA5
#define SCL1_LAT                  LATAbits.LATA5
#define SCL1_PORT                 PORTAbits.RA5
#define SCL1_WPU                  WPUAbits.WPUA5
#define SCL1_OD                   ODCONAbits.ODCA5
#define SCL1_ANS                  ANSELAbits.ANSA5
#define SCL1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define SCL1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define SCL1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define SCL1_GetValue()           PORTAbits.RA5
#define SCL1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define SCL1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define SCL1_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define SCL1_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define SCL1_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define SCL1_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define SCL1_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define SCL1_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RB6 procedures
#define RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RB6_GetValue()              PORTBbits.RB6
#define RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define RB6_SetPullup()             do { WPUBbits.WPUB6 = 1; } while(0)
#define RB6_ResetPullup()           do { WPUBbits.WPUB6 = 0; } while(0)
#define RB6_SetAnalogMode()         do { ANSELBbits.ANSB6 = 1; } while(0)
#define RB6_SetDigitalMode()        do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set channel_ANB7 aliases
#define channel_ANB7_TRIS                 TRISBbits.TRISB7
#define channel_ANB7_LAT                  LATBbits.LATB7
#define channel_ANB7_PORT                 PORTBbits.RB7
#define channel_ANB7_WPU                  WPUBbits.WPUB7
#define channel_ANB7_OD                   ODCONBbits.ODCB7
#define channel_ANB7_ANS                  ANSELBbits.ANSB7
#define channel_ANB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define channel_ANB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define channel_ANB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define channel_ANB7_GetValue()           PORTBbits.RB7
#define channel_ANB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define channel_ANB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define channel_ANB7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define channel_ANB7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define channel_ANB7_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define channel_ANB7_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define channel_ANB7_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define channel_ANB7_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set down aliases
#define down_TRIS                 TRISCbits.TRISC0
#define down_LAT                  LATCbits.LATC0
#define down_PORT                 PORTCbits.RC0
#define down_WPU                  WPUCbits.WPUC0
#define down_OD                   ODCONCbits.ODCC0
#define down_ANS                  ANSELCbits.ANSC0
#define down_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define down_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define down_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define down_GetValue()           PORTCbits.RC0
#define down_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define down_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define down_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define down_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define down_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define down_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define down_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define down_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set up aliases
#define up_TRIS                 TRISCbits.TRISC1
#define up_LAT                  LATCbits.LATC1
#define up_PORT                 PORTCbits.RC1
#define up_WPU                  WPUCbits.WPUC1
#define up_OD                   ODCONCbits.ODCC1
#define up_ANS                  ANSELCbits.ANSC1
#define up_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define up_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define up_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define up_GetValue()           PORTCbits.RC1
#define up_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define up_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define up_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define up_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define up_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define up_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define up_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define up_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set menu aliases
#define menu_TRIS                 TRISCbits.TRISC2
#define menu_LAT                  LATCbits.LATC2
#define menu_PORT                 PORTCbits.RC2
#define menu_WPU                  WPUCbits.WPUC2
#define menu_OD                   ODCONCbits.ODCC2
#define menu_ANS                  ANSELCbits.ANSC2
#define menu_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define menu_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define menu_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define menu_GetValue()           PORTCbits.RC2
#define menu_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define menu_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define menu_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define menu_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define menu_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define menu_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define menu_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define menu_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()             do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()           do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set LED aliases
#define LED_TRIS                 TRISCbits.TRISC5
#define LED_LAT                  LATCbits.LATC5
#define LED_PORT                 PORTCbits.RC5
#define LED_WPU                  WPUCbits.WPUC5
#define LED_OD                   ODCONCbits.ODCC5
#define LED_ANS                  ANSELCbits.ANSC5
#define LED_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED_GetValue()           PORTCbits.RC5
#define LED_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define LED_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/