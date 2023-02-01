/*Fazer um programa pra calcular o valor aproximado de pi; Gottfried Leibniz*/

#include <stdio.h>
#include <math.h>

int main(void) {
  float pi, termo = 1, soma = 0, e, denominador = -1;
  int sinal = -1;
  
  printf("Informe o valor de e (note que quanto menor o 'e' mais aproximado será o valor de pi): "); scanf("%f",&e);
  printf("\n");
  
  do {
    sinal = -sinal;
    denominador += 2;
    termo = sinal / denominador;
    soma = soma + termo;
  } while(fabs(termo) > e);

  pi = 4 * soma;

  printf("Valor aproximado de pi para %f", e); printf(": %f\n",pi);
return 0;
}