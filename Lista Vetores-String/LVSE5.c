/*Faça um programa que leia um vetor N de 20 elementos (tipo inteiro). Em seguida, inverta o 1o elemento com o último, o 2o com o penúltimo e assim por diante, até inverter o 10o com o 11o. No final, escreva na tela o vetor N assim modificado.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max 10

int main(void) {

  int n[max], aux, count = max;

  printf("Vetor Original:\n");
  for(int i = 0; i < max; i++){
    n[i] = rand() % max;
    printf("%d ", n[i]);
  }

  printf("\n\nVetor Modificado:\n");
  for(int i = 0; i < max; i++){
    count--;
    aux = n[i];
    n[i] = n[count];
    n[count] = aux;

    printf("%d ", n[i]);
    
    
  }

  return 0;
}