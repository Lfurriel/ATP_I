/*Construa um programa para determinar a próxima jogada em um Jogo da Velha.
 * Assumir que o tabuleiro é representado por uma matriz de 3 x 3, na qual cada
 * posição representa uma das casas do tabuleiro. A matriz pode conter somente
 * os valores -1, 0, 1. Estes valores representam uma casa contendo uma peça do
 * jogador A (-1), uma casa vazia do tabuleiro (0), e uma casa contendo uma peça
 * do jogador B (1).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// TODO problema que estou tendo: tem momentos que a "máquina" sobreescreve as
// jogadas -1 e as vezes as suas proprias jogadas. Ponto: o do-while não está
// 100%

int main(void) {
  int tabuleiro[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
  int linha, coluna;
  int venceA = 0, venceB = 0;

  srand(time(NULL));

  for (int i = 0; i < 8; i++) {

    // horizontais
    for (int i = 0; i < 3; i++) {
      if (tabuleiro[i][0] == -1 && tabuleiro[i][1] == -1 &&
          tabuleiro[i][2] == -1) {
        venceA = 1;
      } else if (tabuleiro[i][0] == 1 && tabuleiro[i][1] == 1 &&
                 tabuleiro[i][2] == 1) {
        venceB = 1;
      }
    }
    // verticais
    for (int j = 0; j < 3; j++) {
      if (tabuleiro[0][j] == -1 && tabuleiro[1][j] == -1 &&
          tabuleiro[2][j] == -1) {
        venceA = 1;
      } else if (tabuleiro[0][j] == 1 && tabuleiro[1][j] == 1 &&
                 tabuleiro[2][j] == 1) {
        venceB = 1;
      }
    }
    // diagonal principal
    if (tabuleiro[0][0] == -1 && tabuleiro[1][1] == -1 &&
        tabuleiro[2][2] == -1) {
      venceA = 1;
    } else if (tabuleiro[0][0] == 1 && tabuleiro[1][1] == 1 &&
               tabuleiro[2][2] == 1) {
      venceB = 1;
    }

    // diagonal secundária
    if (tabuleiro[2][0] == -1 && tabuleiro[1][1] == -1 &&
        tabuleiro[0][2] == -1) {
      venceA = 1;
    } else if (tabuleiro[2][0] == 1 && tabuleiro[1][1] == 1 &&
               tabuleiro[0][2] == 1) {
      venceB = 1;
    }

    if(venceA == 1 || venceB == 1){
      break;
    }

    if (i % 2 == 0) {
      printf("\n");
      // imprime tabuleiro
      for (int x = 0; x < 3; x++) {
        printf("\n");
        for (int y = 0; y < 3; y++) {
          {
            printf("%d\t", tabuleiro[x][y]);
            // if (tabuleiro[x][y] == -1) {
            //   printf("X ");
            // } else if (tabuleiro[x][y] == 1) {
            //   printf("O ");
            // } else {
            //   printf("- ");
            // }
          }
        }
      }

      do {
        printf("\n\nSua vez!\nInsira a linha e coluna onde quer jogar:\n");
        scanf("%d %d", &linha, &coluna);
        if (tabuleiro[linha][coluna != 0]) {
          printf("Casa ja ocupada!\n");
        }
      } while (tabuleiro[linha][coluna] != 0);
      tabuleiro[linha][coluna] = -1;

    } else {
      do {
        linha = rand() % 3;
        coluna = rand() % 3;
      } while (tabuleiro[linha][coluna] != 0);
      tabuleiro[linha][coluna] = 1;
    }
  }

  // imprime tabuleiro
  for (int x = 0; x < 3; x++) {
    printf("\n");
    for (int y = 0; y < 3; y++) {
      printf("%d\t", tabuleiro[x][y]);
    }
  }

  // -1 : X
  //  1 : O
  // IMPORANTE: X COMEÇA E TERMINA JOGANDO

  for (int x = 0; x < 3; x++) {
    printf("\n");
    for (int y = 0; y < 3; y++) {
      {
        if (tabuleiro[x][y] == -1) {
          printf("X ");
        } else if (tabuleiro[x][y] == 1) {
          printf("O ");
        } else {
          printf("- ");
        }
      }
    }
  }

  printf("\n\n");
  if (venceA == 0 && venceB == 0) {
    printf("Empate!");
  } else if (venceA == 1) {
    printf("Jogador A (X) vence!");
  } else {
    printf("Jogador B (O) vence!");
  }

  return 0;
}