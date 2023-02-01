#include <stdio.h>
/*Efetuar a leitura de 3 números inteiros e apresentá-los em ordem crescente.
Utilize “seleção encadeada”.*/
int main(void) {
  int num1, num2, num3;
  printf("Digite um número inteiro: \n");
  scanf("%d", &num1);
  printf("Digite um segundo número inteiro: \n");
  scanf("%d", &num2);
  printf("Digite um terceiro número inteiro: \n");
  scanf("%d", &num3);
  
  if (num1 < num2 && num1 < num3) { // numero 1 é o menor
    if (num2 < num3) { 
      printf(" %d, %d, %d", num1, num2, num3);
    } else { 
      printf(" %d, %d, %d", num1, num3, num2);
    }
  } else if (num2 < num1 && num2 < num3) { // numero 2 é o menor
    if (num1 < num3) {
      printf(" %d, %d, %d", num2, num1, num3);
    } else {
      printf(" %d, %d, %d", num2, num3, num1);
    }
  } else {//numero 3 é o menor
    if(num1<num2){
      printf(" %d, %d, %d", num3, num1, num2);
    } else {
      printf(" %d, %d, %d", num3, num2, num1);
    }
  }
  return 0;
}