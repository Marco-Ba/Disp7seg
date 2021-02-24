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

void main(void)  
{
    int cont;
    display7seg_init();
    
    while ( 1 )
    {
        display7seg( cont );
        delay( 1000 );
        cont++;
        if( cont >=16 )
            cont = 0;
        
    }    
}
