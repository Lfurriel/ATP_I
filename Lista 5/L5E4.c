/*Escreva um programa em linguagem C para que usuário forneça cinco valores inteiros. O programa deve permitir
entradas de valores maiores que 0. Os primeiros cinco valores devem ser armazenados em um vetor A e os demais
em um vetor B. Em seguida, o programa deve efetuar a multiplicação entre os valores disponíveis em A e B,
armazenando o resultado em um terceiro vetor C. As posições devem ser multiplicadas de maneira invertida,
ou seja, a primeira posição do vetor A deve ser multiplicada pela última posição do vetor B. O resultado deve
ser armazenado na última posição do vetor C. Esse processo deve ser realizado por meio de estruturas de repetições.*/

#include <stdio.h>

int main(void) {

  int A[5];
  int B[5];
  int C[5];
  int valor;
  int mult;
  int j = 0;
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
    mult = A[h] * B[l];
    printf("%d \n", mult);
    C[h] = mult;
    l--;
  }
  printf("A: %d %d %d %d %d \n", A[0], A[1], A[2], A[3], A[4]);
  printf("B: %d %d %d %d %d \n", B[0], B[1], B[2], B[3], B[4]);
  printf("C: %d %d %d %d %d \n", C[0], C[1], C[2], C[3], C[4]);

  return 0;
}