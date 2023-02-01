/*Escreva um programa em linguagem C para que usuário digite um nome e um sobrenome, sendo esses
armazenados em variáveis nome e sobrenome, respectivamente. As strings têm tamanhos máximos de 40
caracteres. Em seguida, o programa deve percorrer as strings, concatenar as entradas e armazenar o
resultado em uma string nomeada resultado, declarada com tamanho 80. Ao final, o programa deverá
apresentar o resultado da concatenação com o total de algarismos existentes.*/

#include <stdio.h>
#include <string.h>

int main(void) {
  char nome[40];
  char sobrenome[40];
  char resultado[80];
  int caracteres;

  printf("Insira nome: \n");
  gets(nome);
  printf("Insira sobrenome: \n");
  gets(sobrenome);

  strcat(resultado, nome);
  strcat(resultado, sobrenome);
  
  printf("Nome completo: ");
  puts(resultado);

  caracteres = strlen(resultado);
   printf("\nCaractéres: %d", caracteres);
  
  return 0;
}