/*Repita o exercício 1, porém os resultados são armazenados em uma terceira
 matriz.*/

/*Exercicio 1: Construa um programa para ler uma matriz 4 x 4, conte e escreva
quantos valores maiores que 10 ela possui.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 4

int main(void) {
  int matrizA[n][n], matrizResultante[n][n] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}}, count = 0;
  srand(time(NULL));

  
  printf("\nMatriz A:\n");
  for(int i = 0; i < n; i++){
    printf("\n");
    for(int j = 0; j < n; j++){
      matrizA[i][j] = rand()%20;
      printf("%d\t", matrizA[i][j]);
      if(matrizA[i][j] > 10){
        count++;
        matrizResultante[i][j] = matrizA[i][j];
      }
    }
  }
  
  printf("\n\nContagem de números maior que 10: %d", count);
  printf("\nMatriz Resultante:\n");
  for(int i = 0; i < n; i++){
    printf("\n");
    for(int j = 0; j < n; j++){
      matrizA[i][j] = rand()%20;
      printf("%d\t", matrizResultante[i][j]);
    }
  }

  
  return 0;
}