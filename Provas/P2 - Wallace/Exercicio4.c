#include <stdio.h>

#define n 3 //Linhas e colunas da matriz

int main(void) {
  int matriz[n][n];
  int multiplicaLinha;
  int permutaN = 1;
  int erro = 0; //1 true, 0 false

  //Leitura dos elementos da matriz
  for(int i = 0; i < n; i++){
    printf("\n");
    for(int j = 0; j < n; j++){
      printf("Digite o valor da matriz [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  for(int i = 1; i < n; i++){
    permutaN += i * permutaN; //Calculando a permutação de N
  }

  //Impressão da matriz
    for(int i = 0; i < n; i++){
    printf("\n");
    for(int j = 0; j < n; j++){
      printf("%d\t", matriz[i][j]);
    }
  }

  printf("\n\n");

  for(int i = 0; i < n; i++){
    multiplicaLinha = 1;
    for(int j = 0; j < n; j++){
      multiplicaLinha *= matriz[i][j];
    }
    if(multiplicaLinha != permutaN){ //Validação
        erro = 1; //true
        break; //Quebra do laço for
      }
  }

  if(erro == 0) { //erro false
    printf("A matriz é um quadrado latino");
  } else {
    printf("A matriz NÃO é um quadrado latino");
  }

  
  
  return 0;
}