/****************************************************************************
 **		DC motor control for lab6
 ** 
 **      Description: TO COMPLETE BY THE STUDENT
 ** 
 **  Author          Date                Description/Version
 ** 
 *****************************************************************************/

#include <xc.h>
#include <stdint.h>
#include "include/initBoard.h"
#include "include/Tick.h"
void __delay32(int32_t);
#define     HEARTBEAT   _LATB10
//#define     PERIOD     // to complete 

//#define     PART1         // part selection

unsigned long on_time= 100, stamp; 

int main(void)
{
    initIO();
    TickInit();
    stamp = TickGet();
	while (1){
        HEARTBEAT ^= 1; //LED heartbeat
        __delay32(on_time);

    } // end while loop  
}// end main
