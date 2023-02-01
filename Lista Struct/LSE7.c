/*Crie uma struct (cliente banco) que contenha os seguintes dados bancários de um
cliente: nome (string), agência (inteiro), conta (inteiro), e saldo (real). Em seguida:
(a) Leia os dados de um cliente, gravando-os em uma variável struct. Leia também a operação bancária desejada pelo cliente, isto é: (1) para saque, (2) para depósito.
(b) Imprimir na tela o valor atualizado após o saque (caso selecione (1)), ou o valor agregado final na conta ap ́os o depósito (caso selecione (2)).*/

#include <stdio.h>
#include <string.h>

#define n 3

int main(void) {
  struct clienteBanco {
  char nome[80];
  int agencia;
  int conta;
  float saldo;
  } cliente[n];
  int op;
  float valor;

  for(int i = 0; i < n; i++){
    printf("Digite seu nome: ");
    scanf(" %[^\n]s", cliente[i].nome);
    printf("Digite sua agência: ");
    scanf("%d", &cliente[i].agencia);
    printf("Digite sua conta: ");
    scanf("%d", &cliente[i].conta);
    printf("Digite o saldo: ");
    scanf("%f", &cliente[i].saldo);
  }

for(int i = 0; i < n; i++){
  op=0;
  do{
    printf("\n\nCliente %s\n", cliente[i].nome);
    printf("Escolha:\n\t(1) saque, (2) depósito, (3) sair: ");
    scanf("%d",&op);
    if(op == 1){
      printf("Digite o valor que deseja sacar: ");
      scanf("%f", &valor);
      cliente[i].saldo-=valor;
      printf("Novo valor: %.2f", cliente[i].saldo);
    } else if (op == 2){
      printf("Digite o valor que deseja depositar: ");
      scanf("%f", &valor);
      cliente[i].saldo+=valor;
      printf("Novo valor: %.2f", cliente[i].saldo);
    }
  }while(op!=3);
}

  return 0;
}