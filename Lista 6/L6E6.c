/*Faça um programa que gere números aleatórios entre 0 e 100 para preencher as posições de duas matrizes com dimensões 4 x 4.
 As matrizes devem ser nomeadas como A e B. Uma matriz C deve receber, em cada posição, o maior elemento nas posições
 correspondentes de A e B. Apresente as matrizes.*/

#include <stdio.h>
#include <stdlib.h>
#define n 4

int main(void) {
  int matrizA [n][n], matrizB[n][n], matrizC[n][n];
  srand(time(NULL));

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
     matrizA[i][j] = rand() % 100;
     matrizB[i][j] = rand() % 100;
      if(matrizA[i][j] > matrizB[i][j]) {
        matrizC[i][j] = matrizA[i][j];
      } else {
        matrizC[i][j] = matrizB[i][j];
      }
    }
  }
  printf("\nMatrizA:\n");
  for (int k=0;k<n;k++){
   for (int j=0;j<n;j++){
    printf("%d\t", matrizA[k][j]);
   }
 printf("\n");
 }

  printf("\nMatrizB:\n");
  for (int k=0;k<n;k++){
   for (int j=0;j<n;j++){
    printf("%d\t", matrizB[k][j]);
   }
 printf("\n");
 }

  printf("\nMatrizC:\n");
  for (int k=0;k<n;k++){
   for (int j=0;j<n;j++){
    printf("%d\t", matrizC[k][j]);
   }
 printf("\n");
 }
  
  return 0;
}