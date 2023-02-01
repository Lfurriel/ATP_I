/*Considere a matriz indicada no exercício 3. Construa um programa para ler um
 * eixo de referência, sendo x (0), y (1) e z(2), e apresentar os valores dos
 * planos (matrizes) perpendiculares ao eixo dado como entrada. Os planos
 * (cortes/fatias) devem ser apresentados de 0 a m com os elementos
 * correspondentes. aplicações: Computação Gráfica, imagens tomográficas e
 * modelos de cores (RGB e CIELAB, também conhecido como L*a*b*).*/

#include <stdio.h>

#define m 3

int main(void) {
  int a[m][m][m];
  int op;

  printf("Original:");
  for (int x = 0; x < m; x++) {
    printf("\n\nx: %d", x);
    for (int y = 0; y < m; y++) {
      printf("\n");
      for (int z = 0; z < m; z++) {
        a[x][y][z] = z;
        printf("%d ", a[x][y][z]);
      }
    }
  }

  do {
    do {
      printf("\n\nEscolha:\n 1. Mostrar em x\n 2. Mostrar em y\n 3. Mostrar em Z\n "
             "4. Encerrar\n");
      scanf("%d", &op);
      if (op < 1 || op > 4) {
        printf("Entrada inválida!\n");
      }
    } while (op < 1 || op > 4);
    
    if (op == 1) {
      printf("\nEm X:");
      for (int x = 0; x < m; x++) {
        printf("\n\nx: %d", x);
        for (int y = 0; y < m; y++) {
          printf("\n");
          for (int z = 0; z < m; z++) {
            a[x][y][z] = z;
            printf("%d ", a[x][y][z]);
          }
        }
      }
    }
    if (op == 2) {
      printf("\nEm Y:");
      for (int y = 0; y < m; y++) {
        printf("\n\ny: %d", y);
        for (int x = 0; x < m; x++) {
          printf("\n");
          for (int z = 0; z < m; z++) {
            a[y][x][z] = z;
            printf("%d ", a[x][y][z]);
          }
        }
      }
    }
    if (op == 3) {
      printf("\nEm Z:");
      for (int z = 0; z < m; z++) {
        printf("\n\nz: %d", z);
        for (int x = 0; x < m; x++) {
          printf("\n");
          for (int y = 0; y < m; y++) {
            a[z][x][y] = y;
            printf("%d ", a[x][y][z]);
          }
        }
      }
    }
  } while (op != 4);
printf("\nEncerrando");
  return 0;
}