/*Escreva um programa que leia dois vetores A e B com 10 posições. Em seguida, o programa deve realizar
a multiplicação entre os elementos (com o mesmo índice) contidos nos vetores. O resultado deve ser
armazenado em um vetor C. Mostre o vetor resultante.*/

#include <stdio.h>

int main(void) {
  int vetorA[10];
  int vetorB[10];
  int vetorC[10];
  int valor, mult;

  for (int i = 0; i < 10; i++){
    printf("Insira valor do vetor A posição [%d]\n", i);
    scanf("%d", &valor);
    vetorA[i] = valor;
  }
  for (int j = 0; j < 10; j++){
    printf("Insira valor do vetor B posição [%d]\n", j);
    scanf("%d", &valor);
    vetorB[j] = valor;
  }
  for (int k = 0; k < 10; k++){
    mult = vetorA[k] * vetorB[k];
    vetorC[k] = mult;
    printf("VetorC [%d] = %d\n", k, vetorC[k]);
  }
  
  
  return 0;
}