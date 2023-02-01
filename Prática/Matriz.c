#include <stdio.h>

int main(void) {
  float A[3][4], S[3] = {0,0,0}, maior = 0, menor = 0;
  float valor = 0;
  int i, j;

  for(i = 0; i < 3; i++){
    for(j = 0; j < 4; j++){
     // printf("A[%d][%d]\n", i, j);
      valor = rand() % 42;
      A[i][j] = valor;
      //scanf("%f", &A[i][j]);
      if(A[i][j] > maior){
        maior = A[i][j];
      }
      
      if(A[i][j] < menor){
        menor = A[i][j];
      }
      
      S[i] += valor;
    }
  }

  printf("\nImprimindo a matriz\n");
  for(i = 0; i < 3; i++){
    printf("\n");
    for(j = 0; j < 4; j++){
      printf("%.2f\t", A[i][j]);
    }
  }
  printf("\n\nMaior: %.2f\n", maior);
  printf("\nMenor: %.2f\n", menor);
  printf("\n");
  for(int l = 0; l < 3; l++){
    printf("S[%d]: %.2f\n",l, S[l]);
  }
  
  return 0;
}