/*Printar a soma dos termos menors que 'n' */

#include <stdio.h>

int main(void) {
int n;
int soma = 0;
int count = 1;
printf("Digite o valor de n:\n ");  
scanf("%d", &n);

  do{
    soma = soma + count;
    count ++;
  } while (count<=n);
printf("Soma = %d\n", soma);
  return 0;
}