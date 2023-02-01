/*Escreva um programa para realizar apresentar a tabuada de um número informado pelo usuário,
seguindo formato: multiplicando x multiplicador = resultado. Os resultados desse processo devem
ser armazenados em um vetor res. Apresentar res.*/

#include <stdio.h>

int main(void) {

  int res [11];
  int multiplicando, resultado;

  printf("Insira o multiplicando: \n");
  scanf("%d", &multiplicando);
  
  for(int i = 0; i <= 10; i++){
    resultado = multiplicando * i;
    res[i] = resultado;
    printf("%d * %d = %d\n", multiplicando, i, resultado);
  }
   printf("\nImprimindo res:\n\n");
  for(int j = 0; j <= 10; j++){
    printf("res[%d] = %d\n", j, res[j]);
  }
  
  return 0;
}