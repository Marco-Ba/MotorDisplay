/*
 * File:   botoes.c
 * Author: 21193066
 *
 * Created on 18 de Fevereiro de 2021, 15:21
 */


#include <xc.h>


void botoes_init(void)
{
    TRISDbits.TRISD3 = 1;
    TRISDbits.TRISD2 = 1;
}

char s1 (void)
{
    return(PORTDbits.RD0); 
}
char s0 (void)
{
    return(PORTDbits.RD1);
}

