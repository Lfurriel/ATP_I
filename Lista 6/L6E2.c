/*Construa um programa que contém uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.*/

#include <stdio.h>

int main(void) {
  int matriz [5][5];

  for(int i = 0; i < 5; i++){
    printf("\n");
    for(int j = 0; j < 5; j++){
     if(i == j){
       matriz[i][j] = 1;
     } else {
       matriz [i][j] = 0;
     }
      printf("%d\t", matriz[i][j]);
    }
  }
  
  return 0;
}