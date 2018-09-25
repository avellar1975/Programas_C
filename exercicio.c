#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // necessária para pow() e sqrt()

int main()
{
//	float A = 0, B = 0, X;
	int a = 2, b = 3;


	if(a != b){
		printf("\n a e b são diferentes \n");
	}
	else {
		printf("\n a e b são iguais \n");
	}

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d x %d = %d\n", a, b, a * b);
	printf("%d / %d = %0.1f\n", a, b, (float) a / b); // resultado fracionário
	printf("%d elevado a %d = %0.1f\n", a, b, pow(a,b)); // pow(base, expoente)
	printf("raiz quadrada de %d = %0.1f\n", a, sqrt(a));




	return 0;
}
