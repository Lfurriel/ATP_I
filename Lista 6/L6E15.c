/*Dada a matriz B (100 x 200), escrever um programa para calcular a soma
 dos elementos da quadragésima (40) coluna e a soma dos valores da trigésima
 (30) linha.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linhas 100
#define colunas 200

int main(void) {
  srand(time(NULL));

  int matrizB[linhas][colunas], somaLinha = 0, somaColuna = 0;

  for (int i = 0; i < linhas; i++) {
    printf("\n");
    for (int j = 0; j < colunas; j++) {
      matrizB[i][j] = rand() % 10;
      printf("%d\t", matrizB[i][j]);
    }
  }

  for (int i = 0; i < colunas; i++) {
    somaLinha += matrizB[29][i];
  }
  printf("\n\nSoma da trigésima linha: %d\n", somaLinha);

  for (int j = 0; j < linhas; j++) {
    somaColuna += matrizB[j][39];
  }
  printf("Soma da quadragésima coluna: %d\n", somaColuna);

  return 0;
}