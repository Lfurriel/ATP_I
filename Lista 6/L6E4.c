/*Faça um programa que leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.*/

#include <stdio.h>
#define n 20

int main(void) {
  int matriz[n][n];
  int maiorI;
  int maiorJ;
  int maiorValor = 0;
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
     matriz[i][j] = rand() % (n*n);
      if (matriz[i][j] > maiorValor){
        maiorI = i;
        maiorJ = j;
        maiorValor = matriz[i][j];
      }
      printf("[%d][%d]: %d\n", i, j, matriz[i][j]);
    }
  }
  printf("\n");
  printf("Maior valor se encontra no campo [%d][%d]: %d", maiorI, maiorJ, maiorValor);
  return 0;
}