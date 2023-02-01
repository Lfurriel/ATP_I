/*Faça um programa que receba um número inteiro positivo N, e que calcule e mostre na tela a seguinte soma:
S = N + (N – 1)/2 + (N – 2)/3 + ... + 1/N*/

#include <stdio.h>

int main(void) {
  float n, max;
  float soma = 0;

  do{
    printf("Digite um N: ");
    scanf("%f", &max);
    if(max <= 0){
      printf("N precisa ser um número maior que 0\n");
    }
  } while (max <= 0);
  n = max;
  

  for(int i = 1; i <= max; i++){
    soma += n/i;
    n--;
  }

  printf("Soma = %.4f", soma);
  
  return 0;
}