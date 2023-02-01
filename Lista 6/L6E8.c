/*Construa um programa para gerar automaticamente números entre 0 e 99 de uma
 cartela de bingo. Sabendo que cada cartela deverá conter 5 linhas de 5
 números, gere estes dados de modo que não tenha números repetidos dentro das
 cartelas. O programa deve exibir na tela a cartela gerada. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {
  int cartela[5][5], aux[25], random, repetido, count = 0;
  srand(time(NULL));

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      do {
        repetido = 0;
        random = rand() % 99;
        aux[count] = random;
        for (int l = 0; l < count; l++) {
          if (aux[l] == random) {
            repetido = 1;
          }
        }
      } while (repetido == 1);
      cartela[i][j] = random;
      count++;
    }
  }

  printf("B\tI\tN\tG\tO\n");
  for (int i = 0; i < 5; i++) {
    printf("\n");
    for (int j = 0; j < 5; j++) {
      printf("%d\t", cartela[i][j]);
    }
  }
  return 0;
}