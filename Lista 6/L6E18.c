/*Escreva um programa para ler e armazenar 10 registros de clientes. Cada registro é constituído por Nome
 (String), Telefone (String) e Idade (Integer). Os dados devem ser apresentados em formato de lista. Cada
 linha da lista é constituída por dados de um único cliente.*/

#include <stdio.h>
#include <string.h>
#define n 3

int main(void) {

  int idade[n];
  char nome[n][60];
  char telefone[n][10];

  for(int i = 0; i < n; i++){
    printf("\n\nCliente %d:\n", i+1);
    printf("\tNome: ");
    scanf(" %[^\n]s", nome[i]);
    printf("\tTelefone: ");
    scanf(" %[^\n]s", telefone[i]);
    printf("\tIdade: ");
    scanf("%d", &idade[i]);
  }
  printf("\n\n");
  for(int i = 0; i < n; i++){
    printf("Cliente %d:\t%s\t%s\t%d\n",i+1,nome[i],telefone[i],idade[i]);
  }
  
  return 0;
}