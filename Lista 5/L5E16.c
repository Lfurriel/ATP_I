/*Apresentar os resultados de uma tabuada de um número qualquer (digitado pelo usuário).
 A tabuada deve ser escrita no seguinte formato: multiplicando x multiplicador = resultado. (Ex. 2 x 2 = 4).
  Todos os valores devem ser calculados e apresentados ao final, seguindo o formato indicado.*/

#include <stdio.h>

int main(void) {


  int multiplicando, resultado;

  printf("Insira o multiplicando: \n");
  scanf("%d", &multiplicando);
  
  for(int i = 0; i <= 10; i++){
    resultado = multiplicando * i;
    printf("%d * %d = %d\n", multiplicando, i, resultado);
  }

  
  return 0;
}