/*Escreva um programa em linguagem C para que usuário digite um nome. A entrada deve ser armazenada em
uma variável nome, declarada com 40 caracteres. Em seguida, o programa deve percorrer a string nome e
apresentar cada letra em uma linha. O programa deve percorrer a string somente até a última letra do
nome. Ao final, o programa deverá apresentar também o total de algarismos existentes.*/

#include <stdio.h>
#include <string.h>

int main(void) {

  char nome[40];
  char letra;
  int count = 0;

  printf("Digite um nome: \n");
  gets(nome);
  count = strlen(nome);
  
  for(int i = 0; i < strlen(nome); i++){
    letra = nome[i];
    printf("CharAt [%d]: %c\n",i, letra);
  }
  printf("Número de algarismos: %d", count);

  return 0;
}