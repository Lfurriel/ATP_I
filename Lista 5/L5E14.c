/*Faça um programa que leia um vetor X capaz de armazenar cinco números inteiros. Em seguida, o programa deve
 dividir todos os elementos contidos em X pelo maior valor do vetor. Mostre o vetor antes e após os cálculos.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 5

int main(void) {
  srand(time(NULL));
  int vetorX[n];
  int maior;

  printf("VetorX: ");
  for(int i = 0; i < n; i++){
    vetorX[i] = rand() % 50;
    printf("%d\t", vetorX[i]);
    if(i == 0){
      maior = vetorX[i];
    } else if(vetorX[i] > maior){
      maior = vetorX[i];
    }
  }
  printf("\n");
  printf("VetorX com elementos divididos por %d: ", maior);
  for(int i = 0; i < n; i++){
    vetorX[i] = (vetorX[i] / maior);
    printf("%d\t", vetorX[i]);
  }
  return 0;
}