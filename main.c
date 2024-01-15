/*
Escreva um programa em C para ler uma palavra e escrever:
-A primeira letra da palavra.
-A última letra da palavra.
-O número de letras existente na palavra (não usar a função strlen())
*/

#include <string.h>
#include <stdio.h>
#define TAM 10

int main(void) {
  int i,cont=0;
  char Frase[TAM];
  printf("Digite Uma Frase: ");
  gets(Frase);
  i=0;
  for(i=0;i<TAM;i++){
    if(Frase[i] == Frase[0]){
      if((Frase[0] >= 65 && Frase[0] <= 90)||(Frase[0]>=97 && Frase[0] <= 122)){
        printf("Primeira Palavra: %c",Frase[i]);
        printf("\n");
      }
    }if(Frase[i] == '\0'){
      printf("Ultima Palavra: %c",Frase[i-1]);
      printf("\n");
      break;
    }
  }//printf("O Numero de Letras : %d",cont-1);
  return 0;
}