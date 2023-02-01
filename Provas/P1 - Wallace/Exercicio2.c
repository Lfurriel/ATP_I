#include <stdio.h>

#define n 3


int main(void) {
  float matriz[n][n], tracoMatriz=0, somaLinhas[n], maiorSoma;

  //(a) Leia a matriz [n][n]
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("Digite [%d][%d]: ", i, j);
      scanf("%f", &matriz[i][j]);
    }
  }

  printf("\nMatriz:\n");
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%.2f\t", matriz[i][j]);
    }
    printf("\n");
  }

  //(b) Calcula traço da matriz
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i==j){
        tracoMatriz+=matriz[i][j];
      }
    }
  }
  printf("\n(b) Traço da matriz = %.2f\n\n", tracoMatriz);

  
  //(c) Soma das linhas
  for(int i = 0; i < n; i++){
    somaLinhas[i] = 0;
    for(int j = 0; j < n; j++){
      somaLinhas[i]+=matriz[i][j];
      if(i == 0){
        maiorSoma = somaLinhas[i];
      } else if (somaLinhas[i] > maiorSoma){
        maiorSoma = somaLinhas[i];
      }
    }
    printf("Linha %d = %.2f\n", i, somaLinhas[i]);
  }

  printf("\n(c) Maior soma absoluta = %.2f", maiorSoma);
  return 0;
}