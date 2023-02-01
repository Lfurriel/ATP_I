/*Escreva um programa em linguagem C para que usuário forneça 10 valores inteiros. O programa deve permitir
entradas de valores maiores que 0. Os primeiros cinco valores devem ser armazenados em um vetor A e os demais
em um vetor B. Em seguida, o programa deve efetuar a troca dos valores existentes em A e B, considerando a
regra: o valor da última posição do vetor A é trocado com o valor da primeira posição do vetor B, o valor da
penúltima posição do vetor A é trocado com o valor da segunda posição do vetor B e assim sucessivamente. Esse
processo deve ser realizado por meio de estruturas de repetições.*/

#include <stdio.h>

int main(void) {

  int A[5];
  int B[5];
  int aux;
  int valor;
  int j = 0;
  int p = 5;
  int l = 4;
  
  
  for(int i = 0; i< 10; i++){
    printf("Digite um número: \n");
    scanf("%d", &valor);
    if(valor > 0){
      if(i<5){
        A[i] = valor;
      } else {
        B[j] = valor;
        j++;
      }
      
    } else {
    printf("O valor digitado tem que ser maior do que 0 \n");
      i--;
    }
  }
  printf("A: %d %d %d %d %d \n", A[0], A[1], A[2], A[3], A[4]);
  printf("B: %d %d %d %d %d \n", B[0], B[1], B[2], B[3], B[4]);
  for(int h = 0; h < 5; h++){
    aux = A[h];
    A[h] = B[l];
    B[l] = aux;
    l--;
  }
  printf("\nA: %d %d %d %d %d \n", A[0], A[1], A[2], A[3], A[4]);
   printf("----------------------");
  printf("\nB: %d %d %d %d %d \n", B[0], B[1], B[2], B[3], B[4]);
  
  return 0;
}