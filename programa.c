//------------------------------------------------
#include <stdio.h>

#define LIMITE 30
//------------------------------------------------


int main(){

	float peso, altura, imc;


	printf("\n Qual o seu peso e altura separados por vírgula? ");
	scanf("%f %f", &peso, &altura); //argumentos de entrada serão separados por vírgulas

	imc = peso/(altura);

	printf("\n Seu i.m.c. é %.1f", imc);

	if( imc <= LIMITE ) 	printf("\n você não está obeso!\n");
	else 			printf("\n você está obeso!\n");



}
