/* Cabecalho ------------------------------------------------------------------------------ */

/*  TITULO: Dominando Liguagem C
    DATA: 03/08/2018
    VERSCAO: 1.0 
	Programa para calcular raC-zes
*/

    /* CONSTANTES ---------------------------------------------------------------------- 
     *
     *
     * ------------------------------------------------------------------------------- */

    /* VARIAVEIS ---------------------------------------------------------------------- 
     *
     *
     * ------------------------------------------------------------------------------- */

    /* BIBLIOTECAS ---------------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>
#include <locale.h>

     /* ------------------------------------------------------------------------------- */

/* Cabecalho - Fim----------------------------------------------------------------------------------- */


/*  Bloco de Programas -------------------------------------------------------------------------------*/

int
main ()
{

  float ca, cb, cc;
  float raiz1, raiz2;
  float delta;
  
  setlocale (LC_ALL, "Portuguese");


printf ("\n Introduza os coeficientes de um polinomio do segundo grau: \n");
printf ("\n Coeficiente a = "); scanf ("%f", &ca);
printf ("\n Coeficiente b = "); scanf ("%f", &cb);
printf ("\n Coeficiente c = "); scanf ("%f", &cc);

	delta = sqrt(cb*cb - 4*ca*cc);
	raiz1 = (- cb + delta) / (2*ca);
	raiz2 = (- cb - delta) / (2*ca);
	printf("As raízes são %f e %f",raiz1, raiz2);
	
  return 0;

}