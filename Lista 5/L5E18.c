/* Escreva um programa em linguagem C para gerar, aleatoriamente, 10 números inteiros. Os valores devem
ser armazenados um vetor com 11 posições. Em seguida, o programa deve solicitar duas entradas, um elemento
e um índice. O índice deve ser um valor entre 0 e 9. O elemento informado deve ser inserido na posição
especificada, deslocando todos os elementos seguintes. Imprimir o resultado. */

#include <stdio.h>

int main(void) {

  int vetor[11];
  int indice;
  int elemento;
  int random;

  vetor[10] = 0;

  for(int i = 0; i < 10; i++){
    random = rand() % 20;
    vetor[i] = random;
    printf("Posição %d = %d\n", i , vetor[i]);
  }
  printf("Posição 10 = %d \n", vetor[10]);

  printf("Selecione o índice [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]: \n");
  scanf("%d", &indice);
  printf("Insira o elemento: \n");
  scanf("%d", &elemento);

  for(int n = 10; n > indice; n-- ){
    vetor[n] = vetor[n-1];
  }
  vetor[indice] = elemento;
  for (int j = 0; j <= 10; j++){
    printf("Posição %d = %d\n", j , vetor[j]);
  }

  return 0;
}