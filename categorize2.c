#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	
	char line[80];				

	
	
	if (argc != 6){
		
		fprintf(stderr, "You need to give 5 arguments\n");
		return 1;
	}
	
	FILE *in 	= fopen("spooky.csv","r"); 	// abrindo arquivo como leitura w
	
	FILE *file1	= fopen(argv[2], "w"); 		// abrindo arquivo como escrita r
	FILE *file2	= fopen(argv[4], "w");		// abrindo arquivo como escrita r
	FILE *file3	= fopen(argv[5], "w");		// abrindo arquivo como escrita r
	
	
	while(fscanf (in, "%79[^\n]\n", line) == 1) {	// Enquanto consegue ler a linha e guardar no array line
		
		if (strstr (line, argv[1])){				// Se encontrar a STRING do argumento 2
			fprintf (file1, "%s\n", line);			// Escreve a linha no arquivo file1
		}
		else if (strstr (line, argv[3])){			// Se encontrar a STRING do argumento 4
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