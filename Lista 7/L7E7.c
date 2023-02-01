/*Construir um programa em linguagem C para controlar o estoque de um produto. Especificamente,
 o programa deve usar um registro composto por um campo (valor numérico) que representa baixas
 do produto por dia da semana. Assim, um vetor com seis posições indicará que cada uma define
 um dia útil da semana (incluindo o sábado). O programa deve permitir leitura e escrita dos dados.
 O modelo é dado a seguir:*/

#include <stdio.h>

#define n 2
int main(void) {
  struct prod{
  char nome[60];
  int codigo;
  float preco;
  int baixa[6];
  }produto[n];
  for(int i=0; i<n; i++){
  printf("Digite seu nome (produto)\n");
  scanf(" %[^\n]s", produto[i].nome);
  printf("\nDigite seu código\n"); 
  scanf("%d", &produto[i].codigo);
  printf("\nDigite seu preco\n"); 
  scanf("%f", &produto[i].preco);
    for(int j=0; j<6; j++){
  printf("\nDigite a baixa do estoque no dia %d\n", j+1);
  scanf("%d", &produto[i].baixa[j]);
      }
    }
  for(int i=0; i<n; i++){
    printf("\n\n");
    printf("\nNome: %s\n", produto[i].nome);
    printf("\nCódigo: %d \t\t\t Preço: %.2f\n", produto[i].codigo, produto[i].preco);
    printf("\n\t\t1\t2\t3\t4\t5\t6\n");
    printf("BAIXA:\t");
    for(int j=0; j<6; j++){
    printf("%d\t", produto[i].baixa[j]);
    }
  }
  return 0;
}