#include <stdio.h>

int main(void) {
  int valor, countUm = 0, countVinte = 0, countCinquenta = 0, countCem = 0, countQuinhentos = 0;

  printf("Insira o valor a ser impresso: ");
  scanf("%d", &valor);

  //Verifica quantas notas de 500
  countQuinhentos = valor / 500;
  valor = valor % 500;

  //Verifica quantas notas de 100
  countCem = valor / 100;
  valor = valor % 100;

  //Verifica quantas notas de 50
  countCinquenta = valor / 50;
  valor = valor % 50;

  //Verifica quantas notas de 20
  countVinte = valor / 20;
  valor = valor % 20;

  //Verifica quantas moedas de 1
  countUm = valor / 1;
  valor = valor % 1;

  printf("Serão necessários: \n");
  printf("\t%d Notas de 500\n", countQuinhentos);
  printf("\t%d Notas de 100\n", countCem);
  printf("\t%d Notas de 50\n", countCinquenta);
  printf("\t%d Notas de 20\n", countVinte);
  printf("\t%d Moedas de 1\n", countUm);
  

  return 0;
}