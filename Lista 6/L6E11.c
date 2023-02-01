/*Construa um programa para ler 32 elementos do tipo inteiro. Os valores devem
 ser armazenados em duas matrizes. Cada matriz deve armazenar metade dos valores
 lidos. Em seguida, o programa deve realizar a soma dos elementos contidos nas
 matrizes e apresentar os resultados. Cada soma é o resultado obtido a
 partir de duas posições equivalentes nas matrizes, por exemplo: A[1][1] +
 B[1][1].*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 4

int main(void) {
  int matrizA[n][n], matrizB[n][n], matrizR[n][n], vetor[2*n*n], l = 0, k =16;
  srand(time(NULL));
  
  for(int i = 0; i < (2*n*n); i++){
    //printf("Digite um valor: \n");
    //scanf("%d", &vetor[i]);
    vetor[i] = rand() % 100;
    printf("%d\n", vetor[i]);
  }

  printf("\n\nMatriz A:\n");
  for(int i = 0; i < n; i++){
    printf("\n");
    for(int j = 0; j < n; j++){
      matrizA[i][j] = vetor[l];
      l++;
      printf("%d\t", matrizA[i][j]);
    }
  }

  printf("\n\nMatriz B:\n");
  for(int i = 0; i < n; i++){
    printf("\n");
    for(int j = 0; j < n; j++){
      matrizB[i][j] = vetor[k];
      k++;
      printf("%d\t", matrizB[i][j]);
    }
  }

  printf("\n\nMatriz Resultante:\n");
  for(int i = 0; i < n; i++){
    printf("\n");
    for(int j = 0; j < n; j++){
      matrizR[i][j] = matrizA[i][j] + matrizB[i][j];
      printf("%d\t", matrizR[i][j]);
    }
  }
    
  return 0;
}