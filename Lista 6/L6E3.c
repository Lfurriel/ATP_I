/*Construa um programa para preencher uma matriz 4 x 4 com o produto do valor da linha e da coluna de cada elemento. Em seguida, imprima na tela a matriz.*/

#include <stdio.h>

int main(void) {
  int matriz[4][4];
  
  for(int i = 0; i < 5; i++){
    printf("\n");
    for(int j = 0; j < 5; j++){
     matriz[i][j] = i * j;
      printf("%d\t", matriz[i][j]);
    }
  }
  return 0;
}