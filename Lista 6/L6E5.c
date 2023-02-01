/*Faça um programa que leia uma matriz 5 x 5, bem como um valor X. O programa deverá fazer uma busca desse valor na matriz e,
 ao final, escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.*/

#include <stdio.h>
#define n 5

int main(void) {
  int matriz[n][n];
  int casaI = 1000;
  int casaJ = 1000;
  int valorX = rand() % (n*n);
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
     matriz[i][j] = rand() % (n*n);
      if (matriz[i][j] == valorX && i <= 4 && j <= 4){
        casaI = i;
        casaJ = j;
      }
      printf("[%d][%d]: %d\n", i, j, matriz[i][j]);
    }
  }
  printf("\n");
  if(casaI <= 4 && casaJ <= 4){
    printf("Valor X (%d) se encontra em [%d][%d]", valorX, casaI, casaJ);
  } else {
    printf("Valor X não encontrado", valorX);    
  }
  
  return 0;
}