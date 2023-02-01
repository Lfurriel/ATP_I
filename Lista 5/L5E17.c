/*Faça um programa que leia um vetor A capaz de armazenar 10 valores. Em seguida, um vetor B deve receber os valores A, excluindo-se números nulos e negativos. Apresente os vetores.*/

#include <stdio.h>

int main(void) {
  int vetorA [10];
  int vetorB [10];
  int vetorC [10];
  int l = 0, b = 0;


  for(int i = 0; i < 10; i++){
    printf("Digite o valor do vetorA[%d]:\n", i);
    scanf("%d", &vetorA[i]);
  }
  printf("\n");
  for(int j = 0; j < 10; j++){
    printf("VetorA[%d] = %d\n", j, vetorA[j]);
  }
  printf("\n");
  for(int k = 0; k < 10; k++){
    if(vetorA[k] > 0){
      vetorB[l] = vetorA[k];
      l++;
    } else {
      vetorC[b] = vetorA[k];
      b++;
    }
  }
   printf("\n");
  for(int g = 0; g < l; g++){
    printf("VetorB[%d]: %d\n",g , vetorB[g]);
  }
   printf("\n");
  for(int g = 0; g < b; g++){
    printf("VetorC[%d]: %d\n",g , vetorC[g]);
  }

  return 0;
}