/*Construa um programa para apresentar a quantidade em bytes que a matriz A, exercício 24, ocupa na
memória principal. Responda: qual o limite m que o sistema consegue alocar memória sem provocar o
encerramento automático do programa? Apresente a quantidade de bytes da matriz A com o limite m.*/

#include <stdio.h>
#include <time.h>
#define m 1000

int main(void) {

  int matrizA [m][m][m];

srand(time(NULL));

  for (int i=0; i<m; i++){
    for(int j=0; j<m; j++){
      for(int r=0; r<m; r++){
      matrizA[i][j][r]=0;
      }
    }
  }
  printf("o tamanho é %lu bytes", sizeof(matrizA));
  return 0;
}