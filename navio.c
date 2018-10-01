#include <stdio.h>


// Função que recebe dois ponteiros para atualização
void va_sudoeste(int *lat, int *lon){
	
	
	*lat = *lat - 1;
	*lon = *lon + 1;
	
}


int main(){
	
	int lat = 32;
	int lon = -64;
//	printf("%p , %p \n",&lat, &lon); Como imprimir os endereços de memória
	va_sudoeste(&lat, &lon);
	
	printf("Agora estamos em [%i, %i]", lat, lon);
	
	return 0;
	
}