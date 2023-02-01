/*Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a matriz gerada numa matriz
 triangular inferior, ou seja, atribuindo zero a todos os elementos acima da diagonal principal. Imprima a matriz
 original e a matriz transformada.*/

#include <stdio.h>

int main(void) {
  int matriz[4][4];
  
  for(int i =0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      if(j > i){
        matriz[i][j] = 0;
      } else {
        matriz[i][j] = rand() % 20;
      }
    printf("[%d][%d]: %d\n", i,j,matriz[i][j]);
    }
  }
  return 0;
}