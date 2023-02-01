/*Construir um programa em linguagem C para controlar o estoque de um produto.
Especificamente, o programa deve usar um registro composto por um campo (valor
numérico) que representa baixas do produto por dia da semana. Assim, um vetor
com seis posições indicará que cada uma define um dia útil da semana (incluindo
o sábado). O programa deve permitir leitura e escrita dos dados. O modelo é dado
a seguir:*/

#include <stdio.h>

int main(void) {
  struct prod {
    char nome[60];
    int codigo;
    float preco;
    int baixa[6];
  } produto;

  printf("Digite seu nome (produto)\n");
  scanf(" %[^\n]s", produto.nome);
  printf("\nDigite seu código\n");
  scanf("%d", &produto.codigo);
  printf("\nDigite seu preco\n");
  scanf("%f", &produto.preco);
  for (int j = 0; j < 6; j++) {
    printf("\nDigite a baixa do estoque no dia %d\n", j + 1);
    scanf("%d", &produto.baixa[j]);
  }

  printf("\n\n");
  printf("\nNome: %s\n", produto.nome);
  printf("\nCódigo: %d \t\t\t Preço: %.2f\n", produto.codigo, produto.preco);
  printf("\n\t\t1\t2\t3\t4\t5\t6\n");
  printf("BAIXA:\t");
  for (int j = 0; j < 6; j++) {
    printf("%d\t", produto.baixa[j]);
  }

  return 0;
}