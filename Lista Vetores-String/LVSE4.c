/*Escreva um programa que leia um vetor u de 10 elementos (float ou double) e
 * que copie seu conteúdo para um segundo vetor, v.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max 100

int main(void) {

  int vetorU[max], vetorV[max];
  srand(time(NULL));

  printf("VETOR U:\n");
  for (int i = 0; i < max; i++) {
    vetorU[i] = rand() % max;
    printf("%d ", vetorU[i]);
  }

  printf("\n\nVETOR V:\n");
  for (int i = 0; i < max; i++) {
    vetorV[i] = vetorU[i];
    printf("%d ", vetorV[i]);
  }

  return 0;
}