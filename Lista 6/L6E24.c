/*Construa um programa para gerar uma matriz tridimensional nomeada A, com dimensões m x m x m,
sendo m=3. O valor para cada posição deve ser informado pelo usuário. Apresente a matriz A. Uma
matriz envolvendo três dimensões é comumente utilizada para representar imagens tridimensionais na
área de Computação Gráfica.*/

#include <stdio.h>
#define m 3

int main(void) {
  int A[m][m][m];
  for (int i=0; i<m; i++){printf("\n");
    for(int j=0; j<m; j++){
      for(int r=0; r<m; r++){
        printf("\ndigite o elemento da matriz na linha %d, coluna %d e profundidade %d\n", i, j, r);
        scanf("%d", &A[i][j][r]);
        printf("  %d   ", A[i][j][r]);
      }
    }
  }
  for (int i=0; i<m; i++){printf("\n");
    for(int j=0; j<m; j++){("\n");
      for(int r=0; r<m; r++){
        printf("  %d   ", A[i][j][r]);
      }
    }
  }
  return 0;
}