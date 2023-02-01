/*Crie uma struct capaz de armazenar datas com três campos do tipo inteiro (dia, mês
e ano). Em seguida, faça um programa que leia cada um dos campos de uma struct do
tipo acima e que imprima na tela a seguinte formatação de data:
 dia/mês por extenso/ano (Exemplo: 10/julho/2022).*/

#include <stdio.h>
#include <string.h>

int main(void) {
  struct data{
  int dia;
  int ano;
  char mes[20];
  } data;

  printf("Digite o dia: ");
  scanf("%d", &data.dia);
  printf("Digite o mês (extenso): ");
  scanf(" %[^\n]s", data.mes);
  printf("Digite o ano: ");
  scanf("%d", &data.ano);

  printf("\n\n");
  printf("%d/%s/%d", data.dia, data.mes, data.ano);

  
  return 0;
}