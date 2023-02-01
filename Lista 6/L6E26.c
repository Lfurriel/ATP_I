/*Construa um programa para gerar uma estrutura n-dimensional, sendo n=4. Cada
dimensão é definida por m divisões, sendo m=3. Logo, a estrutrura, nomeada como
A, tem m x m x m x m elementos conectados. A estrutura deve receber elementos
informados pelo usuário ou gerados automaticamente. Apresente a estrutura A.*/

//Não faço ideia se isso está certo

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 3

int main(void) {
  int estruturaA[m][m][m][m];
  srand(time(NULL));

  for(int i = 0; i < m; i++){
    printf("\n\n");
    for(int j = 0; j < m; j++){
      printf("\n");
      for(int k = 0; k < m; k++){
        printf("\n");
        for(int l = 0; l < m; l++){
          estruturaA[i][j][k][l] = rand() % 100;
          printf("%d\t", estruturaA[i][j][k][l]);
        }
      }
    }  
  }

  return 0;
}