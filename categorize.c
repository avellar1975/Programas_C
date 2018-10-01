#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	
	char line[80];									// Array de caracteres tamanho 80
	FILE *in 	= fopen("spooky.csv","r"); 			// abrindo arquivo como leitura w
	FILE *file1	= fopen("ufos.csv", "w"); 			// abrindo arquivo como escrita r
	FILE *file2	= fopen("disappearances.csv", "w");	// abrindo arquivo como escrita r
	FILE *file3	= fopen("others.csv", "w");			// abrindo arquivo como escrita r
	
	while(fscanf (in, "%79[^\n]\n", line) == 1) {	// Enquanto consegue ler a linha e guardar no array line
		
		if (strstr (line, "UFO")){					// Se encontrar a STRING UFO
			fprintf (file1, "%s\n", line);			// Escreve a linha no arquivo file1
		}
		else if (strstr (line, "Disappearance")){	// Se encontrar a STRIN Disappearances
			fprintf (file2, "%s\n", line);
		}
		else{
			fprintf (file3, "%s\n", line);			// Caso contrário guarda a linha no file3
		}
			
	}
	// Fecha os três arquivos
	fclose (file1);
	fclose (file2);
	fclose (file3);
	
	return 0;
	
}