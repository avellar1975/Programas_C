
#include <stdio.h>
#include <stdlib.h>


/*  Bloco de Programas -------------------------------------------------------------------------------*/

int
main ()
{

  char card[3];			//Uma string com 2 posicoes precisa ser definida com tamanho 3
  int count = 0;
  
  
  while(card[0] != 'X'){

  puts ("Digite uma carta: ");
  scanf ("%2s", card);

  int val = 0;

  switch (card[0]){
	  
	  case 'K':
	  case 'Q':
	  case 'J':
	  val = 10;
		break;

	  case 'A':
		val = 11;
		break;
		
	  case 'X':	
		continue;
	
	default:
		val = atoi (card); //Esta função converte uma string em um inteiro.
    }

	if((val < 2) || (val > 10)){
		
		puts("Valor de carta desconhecido \n ");
		continue;
	}
		
	
/* Verificar se o valor eh de 2 a 9 */
  if (val >= 2 && val <= 9)
    {
      puts ("A contagem subiu \n");
	  count++;
    }
	
/* Verificar se a carta foi 10, J, Q, ou K */
	else if (val == 10)
	{
      puts ("A contagem caiu \n");
	    count--;
    }
	
	printf("Contagem corrente: %i \n", count);
  }


  return 0;

}
