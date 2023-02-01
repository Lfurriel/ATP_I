/*Escreva um programa para ler uma matriz 3 x 6 com valores reais. (a) Imprima a
soma de todos os elementos das colunas ímpares; (b) Imprima a média aritmética
dos elementos da segunda e quarta colunas; (c) Substitua os valores da sexta
coluna pela soma dos valores das colunas 1 e 2; (d) Imprima a matriz
modificada.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linha 3
#define coluna 6

int main(void) {

  srand(time(NULL));
  int matriz[linha][coluna], somaImpar = 0, aux[3];
  float media = 0;

  printf("Matriz original:");
  for (int i = 0; i < linha; i++) {
    printf("\n");
    for (int j = 0; j < coluna; j++) {
      matriz[i][j] = rand() % 10;
      printf("%d\t", matriz[i][j]);
    }
  }

  //(a)
  for (int i = 0; i < linha; i++) {
    for (int j = 0; j < coluna; j++) {
      if (matriz[i][j] % 2 != 0) {
        somaImpar += matriz[i][j];
      }
    }
  }
  printf("\n\n(a) Soma dos números ímpares: %d\n", somaImpar);

  //(b)
  for (int i = 0; i < linha; i++) {
    media += matriz[i][1]; // soma na coluna 2
  }
  for (int i = 0; i < linha; i++) {
    media += matriz[i][3]; // soma na coluna 4
  }
  media = media / (linha + linha);
  printf("\n\n(b) Media da soma das colunas 2 e 4: %.2f\n", media);

  //(c)
  for(int i = 0; i < linha; i++){
    aux[i] = matriz[i][0] + matriz[i][1];
    matriz[i][5] = aux[i];
  }
  printf("\n\n(c) Matriz modificada:");
  for (int i = 0; i < linha; i++) {
    printf("\n");
    for (int j = 0; j < coluna; j++) {
      printf("%d\t", matriz[i][j]);
    }
  }

  return 0;
}