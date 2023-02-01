/*Utilizando struct, fazer um programa que permita a entrada de nome, endereçoo e celular (apenas números, sem DDD) de 5 pessoas. Imprimir os dados de cada uma das pessoas cadastradas. Utilize o seguinte formato de saída de dados:
Fulano | Rua dos Toddynhos 185, Jd Yakult | 995674235
Goku | Rua do Kamisama 555, Planeta Vegeta | 992636789
e assim sucessivamente.*/

#include <stdio.h>
#include <string.h>

#define n 5

int main(void) {
  struct dados{
  char rua[60];
  char nome[60];
  int num;
  int fone;
  } dados[n];

  for(int i = 0; i < n; i++){
    printf("Digite seu nome: ");
    scanf(" %[^\n]s", dados[i].nome);
    printf("Digite o nome da rua: ");
    scanf(" %[^\n]s", dados[i].rua);
    printf("Digite o numero: ");
    scanf("%d", &dados[i].num);
    printf("Digite o fone: ");
    scanf("%d", &dados[i].fone);
  }

  for(int i = 0; i < n; i++){
    printf("%s | %s %d | %d\n", dados[i].nome, dados[i].rua, dados[i].num, dados[i].fone);
  }

  return 0;
}