/* Cabecalho ------------------------------------------------------------------------------ */

/*  TITULO: Dominando Liguagem C
    DATA: 25/07/2018
    VERSCAO: 1.0 
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

int main ()
{

  float num1, num2, result;
  char op;
  
 // setlocale (LC_ALL, "Portuguese");


printf ("\n Digite dois numeros separados por virgula: \n");
scanf ("%f , %f", &num1, &num2);

 printf ("\n Digite a para adicao, s para subtracao, m para multiplicacao e d para divisao: \n");
 scanf (" %c", &op);

  if (op == 'a')
    {
      result = num1 + num2;
    }
  else if (op == 's')
    {
      result = num1 - num2;
    }
  else if (op == 'm')
    {
      result = num1 * num2;
    }
  else
    {
      result = num1 / num2;
    }

  printf ("\n Resultado: %.2f", result);

  return (0);

}