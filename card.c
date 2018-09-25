/*
 * Programa do Livro Use a Cabeça case
 * Capítulo 1
 * Página 8
 */

 #include <stdio.h>
 #include <stdlib.h>


 int main() {
   char card_name[3];
   puts("Digite com o nome da carta: ");
   scanf("%2s\n", card_name);
   int val = 0;

   if (card_name[0]=='K') {
     val  = 10;
   } else if (card_name[0]=='Q') {
     val = 10;
   } else if (card_name[0]=='J') {
     val = 10;
   } else if (card_name[0]=='A') {
     val  = 11;
   } else{
     val = atoi(card_name);
   }

printf("A carta vale: %i\n", val);

if (val==10) {
  printf("Diminua uma carta\n");
} else if((val>2) && (val<7)){
  printf("Aumente uma carta\n");
} else{
  printf("Não faça nada\n");
}
   return 0;
 }
