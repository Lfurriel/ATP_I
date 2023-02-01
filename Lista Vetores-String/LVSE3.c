/*Faça um programa para ler um vetor de 10 elementos (float ou double). Após
carregar o vetor, determinar e imprimir na tela: (a) O maior elemento do vetor.
(b) O menor elemento do vetor.*/

#include <stdio.h>

#define max 3

int main(void) {
  float vetor[max], maior, menor;

  printf("Digite numero da posição 1 do vetor: ");
  scanf("%f", &vetor[0]);
  maior = vetor[0];
  menor = vetor[0];
  for (int i = 1; i < max; i++) {
    printf("Digite numero da posição %d do vetor: ", i+1);
    scanf("%f", &vetor[i]);
    if(vetor[i] > maior){
      maior = vetor[i];
    }
    if(vetor[i] < menor){
      menor = vetor[i];
    }
  }

  printf("Maior: %.2f", maior);
  printf("Menor: %.2f", menor);
  return 0;
}