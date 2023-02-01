/*Seja A e B dois vetores contendo 10 elementos inteiros. Fazer um programa para:
a) ler A e B.
b) Calcular a soma dos elementos de A.
c) Calcular a soma dos elementos de B.
d) Obter o vetor C, que é a soma dos vetores A e B.
e) Obter o vetor D, subtraindo B de A.*/

#include <stdio.h>

int main(void) {

  int vetorA[10];
  int vetorB[10];
  int vetorC[10];
  int vetorD[10];
  int somaA = 0, somaB =0, subtraiA = 0, subtraiB =0, valor;
  int count = 0;

  //Scan valores de A
  for(int i = 0; i < 10; i++){
    printf("Insira valor de A[%d]:\n ", i);
    scanf("%d", &valor);
    vetorA[i] = valor;
  }
  
  // Scan valores de B
  for(int j = 0; j < 10; j++){
    printf("Insira valor de B[%d]:\n ", j);
    scanf("%d", &valor);
    vetorB[j] = valor; 
  }

  // Print A e B
  for(int f = 0; f < 20; f++){
    if(f < 10){
       printf("VetorA[%d]: %d\n", f, vetorA[f]);
    } else {
      printf("VetorB[%d]: %d\n", count, vetorB[count]);
      count++;
    }
  }

  //Soma A - Subtrai A
  for(int l = 0; l < 10; l++){
    somaA += vetorA[l];
    subtraiA -= vetorA[l]; 
  }
  printf("Soma dos valores de A: %d\n", somaA);
  printf("Subtração dos valores de A: %d\n", subtraiA);
  
  //Soma B - Subtrai B
   for(int n = 0; n < 10; n++){
    somaB += vetorB[n];
    subtraiB -= vetorB[n];
   
  }
  printf("Soma dos valores de B: %d\n", somaB);
  printf("Subtração dos valores de B: %d\n\n", subtraiB);

  for(int h = 0; h < 10; h++){
    vetorC[h] = vetorA[h] + vetorB[h];
    printf("VetorC[%d] = %d\n", h, vetorC[h]);
  }
  printf("\n");
  for(int g = 0; g < 10; g++){
    vetorD[g] = vetorB[g] - vetorA[g];
    printf("VetorD[%d] = %d\n", g, vetorD[g]);
  }
  return 0;
}