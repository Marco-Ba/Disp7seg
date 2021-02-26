/*
 * File:   botoes.c
 * Author: 21193066
 *
 * Created on 18 de Fevereiro de 2021, 15:21
 */


#include <xc.h>
#define S1 PORTDbits.RD3
#define S0 PORTDbits.RD2


void botoes_init(void)
{
    TRISDbits.TRISD3 = 1;
    TRISDbits.TRISD2 = 1;
}

char s1 (void)
{
    return(PORTDbits.RD3); 
}
char s0 (void)
{
    return(PORTDbits.RD2);
}

