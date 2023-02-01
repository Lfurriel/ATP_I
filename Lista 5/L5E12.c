/*Dado um vetor VIN de 10 elementos inteiros, criar um vetor VAI de 30 elementos, sendo que VAI[0], VAI[1] e VAI[2] recebe o valor de VIN[0] e assim por diante. Escrever um programa que leia VIN e imprima VAI.*/

#include <stdio.h>

int main(void) {
  int vin[10];
  int vai[30];
  int valor;
  int l = 0;

  for(int i = 0; i < 10; i++){
    valor = rand() % 20;
    vin[i] = valor;
    printf("VIN[%d]: %d\n", i, vin[i]);
  }
  printf("\n");
  for(int j = 0; j < 30; j += 3){
    vai[j] = vin [l];
    vai[j+1] = vin [l];
    vai[j+2] = vin [l];
    l++;
  }
  printf("\n");
  for(int k = 0; k < 30; k++){
    printf("VAI[%d]: %d\n", k, vai[k]);
  }

  
  return 0;
}