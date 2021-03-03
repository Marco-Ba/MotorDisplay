/*
 * File:   main.c
 * Author: 21193066
 *
 * Created on 3 de Março de 2021, 16:36
 */


#include <xc.h>
#include "config.h"
#include "botoes.h"
#include "delay.h"
#include "display7seg.h"
#include "contatores.h"

void main(void) 
{
    int estado = 0;
    int t;
    while ( 1 )
    {
       switch (estado) 
       {
           case 0:
                   botoes_init();
                   contatores_init();
                   display7seg_init();
                   estado =1;
                   break;
           case 1: 
                  
                   break;
       }       
    }    
}

