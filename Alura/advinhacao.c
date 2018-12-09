/* 	Autor Evandro Avellar
 *	Data 09/12/2018
 *	Título: Jogo de Adivinhação
 */
 
#include <stdio.h>

int main() {
	
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhação *\n");
	printf("******************************************\n");
	
	int numerosecreto = 42;
	int chute;
	
	for(int i =1; i <= 3; i++){
		
		printf("\nTentativa %d de 3\n", i);
		printf("Qual é o seu chute?\n");
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);

		int acertou = (chute == numerosecreto);
		int maior = (chute > numerosecreto);

		if(acertou) {
			printf("Parabéns! Você acertou!\n");
			printf("Jogue de novo, você é um bom jogador!\n");
		}
		else {

			if (maior) {
			printf("Seu chute é maior que o número secreto!\n");
			}

			else {
			printf("Seu chute é menor que número secreto\n");	
			}
		}
	}
}
