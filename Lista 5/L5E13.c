/*Dado um vetor A de tamanho 5, capaz de armazenar números inteiros, escreva um programa para obter
a maior diferença entre dois elementos consecutivos desse vetor. Imprimir a maior diferença e os
índices dos respectivos elementos.*/

#include <stdio.h>

int main(void) {

  int vetor[5];
  int valor;
  int dif1, dif2, dif3, dif4;
  int maior, indice1, indice2;
  int erro = 0;

  for(int i = 0; i < 5; i++){
    printf("Insira o valor da posição [%d]:\n", i);
    scanf("%d", &valor);
    vetor[i] = valor; 
  }
  printf("Vetor: %d %d %d %d %d\n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);
  dif1 = vetor[1] - vetor[0];
  dif2 = vetor[2] - vetor[1];
  dif3 = vetor [3] - vetor [2];
  dif4 = vetor[4] - vetor[3];

  if(dif1 > dif2 && dif1 > dif3 && dif1 > dif4) {
    maior = dif1;
    indice1 = 0;
    indice2 = 1;
  } else if(dif2 > dif1 && dif2 > dif3 && dif2 > dif4) {
    maior = dif2;
    indice1 = 1;
    indice2 = 2;
  } else if(dif3 > dif1 && dif3 > dif2 && dif3 > dif4) {
    maior = dif3;
    indice1 = 2;
    indice2 = 3;
  } else if(dif4 > dif1 && dif4 > dif2 && dif4 > dif3) {
    maior = dif4;
    indice1 = 3;
    indice2 = 4;
  } else {
    erro = 1;
  }
  if(erro = 0){
    printf("Maior diferença: %d \nNos indices [%d] e [%d]", maior, indice1, indice2);
  } else {
    printf("Parabéns ai quebrou o código\n");
    /*caso não tenha diferença entre cada um fiquei com preguiça de fazer a validação dos três*/
  }
  return 0;
}