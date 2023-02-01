/*Elaborar um programa para armazenar a série de Fibonacci, em um vetor fib, até o décimo quinto termo.
A série é formada pela sequência 1, 1, 2, 3, 5, 8, 13, 21, 34, ..., etc. Esta série é caracterizada pela
soma de um termo posterior com o seu anterior subsequente. Apresentar o resultado armazenado em fib.*/

#include <stdio.h>

#define max 26

int main(void) {

  int fib [max];
  int valor1 = 1;
  int aux = 0;
  
  
  for(int i = 0; i < max; i++){
    fib[i] = valor1 + aux;
    aux = valor1;
    valor1 = fib[i];
    printf("Posição [%d]: %d\n",i, fib[i]);
  }
  
  return 0;
}