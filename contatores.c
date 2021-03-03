/*
 * File:   contatores.c
 * Author: 21193066
 *
 * Created on 18 de Fevereiro de 2021, 15:15
 */


#include <xc.h>
#include "config.h"

void contatores_init(void) 
{
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD7 = 0;
    PORTDbits.RD5 = 0;
    PORTDbits.RD6 = 0;
    PORTDbits.RD7 = 0;
} 



void K1 (int x)
{
    PORTDbits.RD7 = x;
}


void K2 (int x)
{
    PORTDbits.RD6 = x;
}

void K3 (int x)
{
    PORTDbits.RD5 = x;
}