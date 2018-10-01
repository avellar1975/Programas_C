/*
Exercício do livro USE A CABEÇA C
Página 94
Evandro Avellar
*/
#include <stdio.h>
#include <string.h>


char tracks[][80] = {
	"Meu coração é de papel\n",
	"Nova York",
	"Ho mia Kor",
	"Kiss me once",
	"Vida de gado",
};


void find_track(char search_for[]){
	int i;

	for (i = 0; i < 5; i++){
	
		if (strstr(tracks[i], search_for))
		printf ("Track %i: '%s' \n", i+1, tracks[i]);
		
	}
}


int main(){

	char search_for[80];
	printf("Procurar por: ");
	scanf("%79s",search_for); //linha que substituiu a busca do livro que nao funcionava
//	fgets(search_for,sizeof(search_for), stdin);
	find_track(search_for);

	return 0;
}


