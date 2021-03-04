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
    char cont;
    display7seg_init();
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
                   if(s1() == 1)
                       estado =2;
                   
                   break;
           case 2:
                   
                   K1(1);
                   K2(1);
                   K3(0);
                   t =2000;
                   estado =3; 
                   break;
           case 3:
                    if(s0()==1)
                   {
                     K1(0);
                     K2(0);
                     K3(0);
                     estado =1;
                   }
                    
                   delay (1);
                    --t;
                   if(t<=0)
                     
                    estado =4; 
                   break;
           case 4:
                   ++cont;
                  
                   estado =5;
                   break;
           case 5:
                  
                     K1(1);
                     K2(0);
                     K3(1);
                   if(s0()==1)
                   estado =6;
                   break;
           case 6:
                   K1(0);
                   K2(0);
                   K3(0);
                   estado =1;
                   break;
                  
           
       }       
       display7seg( cont );
           
        if( cont >= 10 )
            cont = 0;
        
    }
}

