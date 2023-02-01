/*Dificilimo exercicio pra trocar valor de duas variaveis*/

#include <stdio.h>

void troca(int *n1, int *n2){
  int aux;
  aux = *n1;
  *n1 = *n2;
  *n2 = aux;
}

int main(void) {
  int numA, numB;

  do{
    printf("Digite dois números distintos: ");
    scanf("%d %d",&numA, &numB);
    if (numA==numB){
      printf("Números precisam ser distintos\n");
    }
  } while(numA==numB);

  troca(&numA, &numB);

  printf("\n\nNúmero A: %d\n", numA);
  printf("Número B: %d", numB);
  
  
  return 0;
}