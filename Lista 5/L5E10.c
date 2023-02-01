/*Escreva um programa para controlar a conta de clientes de um banco. Para fins
 * ilustrativos, o programa deve trabalhar com cinco clientes. A conta de cada
 * cliente deve ter os seguintes dados: número, CPF, tipo (p-poupança ou
 * c-corrente) e saldo. O algoritmo deve permitir as seguintes operações:
 * cadastrar conta, buscar conta pelo cpf, buscar todas as contas de um
 * cliente(pelo cpf), efetuar depósito, efetuar retirada, mostrar saldos de
 * todas as contas. Se possível, o sistema deve ter a opção extrato.*/

#include <stdio.h>
#define n 5

int main(void) {
  int clientes[n] = {0, 0, 0, 0, 0}, cpf[n] = {0, 0, 0, 0, 0}, buscaCPF,
      buscaConta, countCliente = 0, op, erro = 1;
  char tipo[n], lerTipo;
  float saldoTotal = 0, somaSaldo, subtraiSaldo, saldo[n] = {0, 0, 0, 0, 0};

  do {
    do { // Validação entrada opção
      printf("\n\nSelecione uma opção:\n\n\t1- Criar Conta\n\t2- Buscar conta "
             "por número\n\t3- Buscar conta por CPF\n\t4- Buscar todas contas "
             "por CPF\n\t5- Efetuar depósito\n\t6- Efetuar retirada\n\t7- "
             "Mostrar saldo de todas as contas\n\t8- Sair\n\n");
      scanf("%d", &op);
      if (op < 1 || op > 8) {
        printf("Entrada inválida!\n");
      }
    } while (op < 1 || op > 8);

    if (op == 1 && countCliente <= 5) { // Cadastrar cliente
      clientes[countCliente] = rand() % 100;
      printf("Numero da sua conta: %d\n", clientes[countCliente]);
      printf("Insira seu CPF: ");
      scanf("%d", &cpf[countCliente]);
      do {
        printf("Insira o tipo da conta <c> Corrente ou <p> Poupança\n");
        scanf(" %c", &tipo[countCliente]);
        if (tipo[countCliente] != 'c' && tipo[countCliente] != 'p') {
          printf("Entrada Inválida!\n");
        }
      } while (tipo[countCliente] != 'c' && tipo[countCliente] != 'p');
      printf("Insira seu saldo inicial: ");
      scanf("%f", &saldo[countCliente]);
      countCliente++;
    }
    if (op == 1 && countCliente > 5) {
      printf("Não conseguimos cadastrar novos clientes!\n");
    }
    if (op == 2) { // Buscar conta por número
      erro = 1;
      printf("Insira o número da sua conta: ");
      scanf("%d", &buscaConta);
      for (int i = 0; i < n; i++) {
        if (buscaConta == clientes[i]) {
          printf("\nSua conta: %d\n", clientes[i]);
          printf("CPF: %d\n", cpf[i]);
          printf("Tipo de conta: %c\n", tipo[i]);
          printf("Saldo: %.2f\n", saldo[i]);
          erro = 0;
        } else if (i == 4 && erro == 1) {
          printf("Conta não encontrada!\n");
        }
      }
    }
    if (op == 3) { // Buscar conta por CPF
      erro = 1;
      printf("Insira o número do seu CPF: ");
      scanf("%d", &buscaCPF);
      printf("Insira o tipo de conta: ");
      scanf(" %c", &lerTipo);
      for (int i = 0; i < n; i++) {
        if (buscaCPF == cpf[i] && lerTipo == tipo[i]) {
          printf("\nSua conta: %d\n", clientes[i]);
          printf("CPF: %d\n", cpf[i]);
          printf("Tipo de conta: %c\n", tipo[i]);
          printf("Saldo: %.2f\n", saldo[i]);
          erro = 0;
        } else if (i == 4 && erro == 1) {
          printf("Conta não encontrada!\n");
        }
      }
    }
    if (op == 4) { // Buscar conta por CPF
      erro = 1;
      printf("Insira o número do seu CPF: ");
      scanf("%d", &buscaCPF);
      for (int i = 0; i < n; i++) {
        if (buscaCPF == cpf[i]) {
          printf("\nSua conta: %d\n", clientes[i]);
          printf("CPF: %d\n", cpf[i]);
          printf("Tipo de conta: %c\n", tipo[i]);
          printf("Saldo: %.2f\n", saldo[i]);
          erro = 0;
        } else if (i == 4 && erro == 1) {
          printf("Conta não encontrada!\n");
        }
      }
    }
    if (op == 5) { // Efetuar depósito
      erro = 1;
      printf("Insira o número da sua conta: ");
      scanf("%d", &buscaConta);
      for (int i = 0; i < n; i++) {
        if (buscaConta == clientes[i]) {
          printf("\nSua conta: %d\n", clientes[i]);
          printf("Saldo: %.2f\n", saldo[i]);
          printf("Insira o saldo adicional: ");
          scanf("%f", &somaSaldo);
          saldo[i] += somaSaldo;
          printf("\nNovo saldo: %.2f\n", saldo[i]);
          erro = 0;
        } else if (i == 4 && erro == 1) {
          printf("Conta não encontrada!\n");
        }
      }
    }
    if (op == 6) { // Efetuar retirada
      erro = 1;
      printf("Insira o número da sua conta: ");
      scanf("%d", &buscaConta);
      for (int i = 0; i < n; i++) {
        if (buscaConta == clientes[i]) {
          printf("\nSua conta: %d\n", clientes[i]);
          printf("Saldo: %.2f\n", saldo[i]);
          printf("Insira o squanto quer retirar: ");
          scanf("%f", &subtraiSaldo);
          saldo[i] -= subtraiSaldo;
          printf("\nNovo saldo: %.2f\n", saldo[i]);
          erro = 0;
        } else if (i == 4 && erro == 1) {
          printf("Conta não encontrada!\n");
        }
      }
    }
    if (op == 7) { // Efetuar retirada
      for (int i = 0; i < n; i++) {
        saldoTotal += saldo[i];
      }
      printf("Saldo total: %.2f", saldoTotal);
    }
  } while (op != 8);

  printf("Fim do processo");
  return 0;
}