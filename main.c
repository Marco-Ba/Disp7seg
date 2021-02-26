/*
 * File:   main.c
 * Author: 21193066
 *
 * Created on 24 de Fevereiro de 2021, 14:05
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "display7seg.h"
#include "botoes.h"

void main(void)  
{
    char cont;
    char estado = 0;
    display7seg_init();
    botoes_init();
    
    while ( 1 )
    {
        switch (estado)
        {
            case 0:
                    if( s1() == 1)
                        estado = 1;
                    break;            
            case 1:
                    if( s1() == 0)
                        estado = 2;
                    break;
            case 2:
                    ++cont;
                    estado = 0;
                    break;
        }
        display7seg( cont );
           
        if( cont >= 10 )
            cont = 0;
        if( cont < 0 )
            cont = 9;
    }
}
