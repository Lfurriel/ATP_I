/*Dada uma matriz A com dimensões 2 x 3, conforme indicado abaixo, imprima a
 matriz transposta de A.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define x 2
#define y 3

int main(void) {

  int matrizA[x][y];
  int matrizATransposta[y][x];
  int aux;
  srand(time(NULL));

  printf("\n\nImprimindo Matriz A:");
  for (int i = 0; i < x; i++) {
    printf("\n");
    for (int j = 0; j < y; j++) {
      matrizA[i][j] = rand() % 20;
      printf("%d\t", matrizA[i][j]);
    }
  }

  printf("\n\nImprimindo Matriz A Transposta:");
  for (int j = 0; j < y; j++) {
    printf("\n");
    for (int i = 0; i < x; i++) {
      printf("%d\t", matrizA[i][j]);
    }
  }

  return 0;
}