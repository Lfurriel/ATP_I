/*Escreva um programa em linguagem C para gerar, aleatoriamente, um vetor com 1000 números inteiros. Calcular e apresentar as informações:
A média dos números;
A média dos números pares;
A média dos números ímpares;
A quantidade de números pares;
A quantidade de números ímpares.*/

#include <stdio.h>

#define n 1000

int main(void) {

  int vetor[n];
  int par[n];
  int impar[n];
  int soma;
  int media;
  int somaPar = 0;
  int countPar = 0;
  int resultPar = 0;
  int somaImpar = 0;
  int countImpar = 0;
  int resultImpar = 0;
  int i = 0;

  for(i = 0; i < n; i++){
    vetor[i] = rand() % n;
    soma += vetor[i];
    printf("Vetor [%d]: %d\n", i, vetor[i]);
    if(vetor[i] % 2 == 0){
      par[countPar] = vetor[i];
      somaPar += par[countPar];
      countPar++;
    } else {
      impar[countImpar] = vetor[i];
      somaImpar += impar[countImpar];
      countImpar++;
    }
  }
  
  media = soma / i;
  resultImpar = somaImpar / countImpar;
  resultPar = somaPar / countPar;

   printf("\n");
  printf("Media do vetor: %d\n", media);
  printf("Media dos pares: %d\n", resultPar);
  printf("Media do impares: %d\n", resultImpar);
  
  return 0;
}
// MEU DEUS EU QRO ME MATAR