/*Escreva um programa para calcular a conta dos clientes de uma lanchonete que oferece três tipos
de lanches, três tipos de pizzas e três tipos de bebidas. A capacidade da lanchonete é de 3 clientes.
O algoritmo deve permitir a escolha no menu das seguintes opções: 
Menu Principal: 
[1] – Lanches 
[2] – Pizzas 
[3] – Bebidas 
[4] – Fechar Conta 
[5] – Fechar Caixa 
[6] - Apresentar uma lista dos totais de produtos que foram consumidos
[7] – Sair
A opção 6 deve apresentar uma lista dos totais de produtos que foram consumidos, bem como o
total em R$. Os preços (R$) são: lanche (15,00); Pizzas (87,00); Bebidas (8,00).*/

#include <stdio.h>


int main(void) {
  float valorCaixa;
  float valorConta;
  float precoPizza = 87.00;
  float precoLanche = 15.00;
  float precoBebida = 8.00;
  int clientes = 1;
  int selecao;

    do {
      printf("Menu Principal:\n");
      printf("[1] Lanches\n");
      printf("[2] Pizza\n");
      printf("[3] Bebidas\n");
      printf("[4] Fechar conta\n");
      printf("[5] Fechar caixa\n");
      printf("[6] Mostrar conta\n");
      printf("[7] Sair\n");
      scanf("%d", &selecao);
    } while(selecao < 1 || selecao > 7);

    //Claramente n ta pronto :D
  
  
  return 0;
}