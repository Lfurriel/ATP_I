/*Construa um programa para ler uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int matriz[4][4], count = 0;
  srand(time(NULL));
  
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
     printf("Isira posição [%d][%d] da matriz:\n", i, j);
     scanf("%d", &matriz[i][j]);
     //matriz[i][j] = rand() % 15;
    }
  }

  for(int i = 0; i < 4; i++){
    printf("\n");
   for(int j = 0; j < 4; j++){ 
    printf("%d\t", matriz[i][j]);
     if(matriz[i][j] > 10){
       count++;
     }
   }
  }

  printf("\n\nQuantidade de valores maiores que 10: %d", count);
   
  return 0;
}