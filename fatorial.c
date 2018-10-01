/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

unsigned int fat (unsigned int num){
    unsigned int fatorial;
    if(num == 1)
    return (1);
    else
        fatorial = num  * fat (num - 1);
    return fatorial;
}
    
void main(){
    
    unsigned int numero;
    printf("\n Digite seu numero positivo: "); scanf("%u", &numero);
    printf("\n O fatorial de %u eh %5u.", numero, fat(numero));
}