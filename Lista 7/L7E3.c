/* Faça um programa em Linguagem C para criar um registro que permita armazenar os dados comumente
 contidos em um cheque bancário. O programa deve permitir entrada e saída dos dados.*/

#include <stdio.h>
#include <string.h>

#define n 2

int main(void) {

  struct cheque{
  char nome[60];
  char valorString[100];
  char assinatura[60];
  char data[10];
  char localEmissao[60];
  float valor;
  } cheques[n];


  for(int i = 0; i <n; i++){
    printf("Digite seu nome: ");
    scanf(" %[^\n]s", cheques[i].nome);
    printf("Digite data de hoje: ");
    scanf(" %[^\n]s", cheques[i].data);
    printf("Digite valor em texto: ");
    scanf(" %[^\n]s", cheques[i].valorString);
    printf("Digite valor: ");
    scanf("%f", &cheques[i].valor);
  }

  
  return 0;
}