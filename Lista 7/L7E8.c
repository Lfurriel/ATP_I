/*8. Construir um programa em linguagem C para controlar o saldo bancário de 20
clientes. Alguns dados importantes são: número da conta; data de abertura da
conta; cliente; saldo; e, limite especial. Complementar o controle das
informações com outros dados comumente vinculados aos dados de um cliente/conta.
Os dados pessoais de um cliente (nome, sobrenome, sexo e outros) devem ser
armazenados em um registro cliente. Os dados de cada conta devem ser armazenados
em um registro conta. Cada conta está associada a um cliente.

O programa deve permitir ler todos dados. Calcular e imprimir o saldo médio das
mulheres, o saldo médio dos homens, o maior e o menor saldo entre homens e
mulheres, cliente mais antigo, cliente com o maior limite especial, clientes com
saldos negativos e listar os clientes por saldo bancário (ordem crescente).*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define n 1
int main(void) {
  srand(time(NULL));
  typedef struct data {
    int dia, mes, ano;
  } Tdata;

  typedef struct endereco {
    char rua[60], complemento[20];
    int numero, CEP;
  } Tend;

  typedef struct cliente {
    char nome[60], sobrenome[70], sexo;
    int phone;
    char cpf[15];
  } Tcliente;

  struct dados {
    int numConta;
    float saldo, limite;
    Tcliente cliente;
    Tdata data;
    Tend endereco;
  } dado[n];

  float saldoMedioF = 0, saldoMedioM = 0, maiorSaldoM, maiorSaldoF, menorSaldoM,
        menorSaldoF, maiorLimite;
  int contaNegativos = 0, indicesNegativos[n], maisAntigo, maisAntigoIndice,
      countF = 0, countM = 0, maiorLimiteIndice;

  for (int i = 0; i < n; i++) {
    printf("\n Digite o dia, o mes e o ano da criação da conta \n");
    scanf("%d %d %d", &dado[i].data.dia, &dado[i].data.mes, &dado[i].data.ano);
    printf("\n Digite seu nome\n");
    scanf(" %[^\n]s", dado[i].cliente.nome);
    printf("\n Digite seu sobrenome\n");
    scanf(" %[^\n]s", dado[i].cliente.sobrenome);
    // validar tudo depois, Juju gatinha(escrito por mim mesma)
    printf("\nDigite o sexo, f para feminino e m para masculino\n");
    scanf(" %c", &dado[i].cliente.sexo);
    printf("\nDigite o telefone (电话号码)\n"); // A empresa bancaria bugou e
                                                // virou chinesa, made in china
    scanf("%d", &dado[i].cliente.phone);
    printf("\nDigite o CPF\n");
    scanf(" %[^\n]s", dado[i].cliente.cpf);
    printf("\nDigite o saldo\n");
    scanf("%f", &dado[i].saldo);
    printf("\nDigite o limite\n");
    scanf("%f", &dado[i].limite);
    printf("\nDigite o nome da rua\n");
    scanf(" %[^\n]s", dado[i].endereco.rua);
    printf("\nDigite o complemento\n");
    scanf(" %[^\n]s", dado[i].endereco.complemento);
    printf("\nDigite o número da casa, por favor meu amigx\n");
    scanf("%d", &dado[i].endereco.numero);
    printf("\nDigite o CEP, por favor meu amigx\n");
    scanf("%d", &dado[i].endereco.CEP);
    dado[i].numConta = 100 + rand() % 899;
    printf("\nO número da conta é: %d\n", dado[i].numConta);

    // Verificação maior limite
    if (i == 0) {
      maiorLimite = dado[i].limite;
      maiorLimiteIndice = i;
    } else if (dado[i].limite > maiorLimite) {
      maiorLimite = dado[i].limite;
      maiorLimiteIndice = i;
    }

    // Verificação conta mais antiga
    if (i == 0) {
      maisAntigo = dado[i].data.ano;
      maisAntigoIndice = i;
    } else if (dado[i].data.ano > maisAntigo) {
      maisAntigo = dado[i].data.ano;
      maisAntigoIndice = i;
    }

    // Verificação do maior e menos saldo feminino
    if (dado[i].cliente.sexo == 'f' || dado[i].cliente.sexo == 'F') {
      if (i == 0) {
        menorSaldoF = dado[i].saldo;
        maiorSaldoF = dado[i].saldo;
      } else {
        if (dado[i].saldo > maiorSaldoF) {
          maiorSaldoF = dado[i].saldo;
        }
        if (dado[i].saldo < menorSaldoF) {
          menorSaldoF = dado[i].saldo;
        }
      }

      // Saldo médio feminino
      saldoMedioF += dado[i].saldo;
      countF++;
    }

    // Verificação do maior e menos saldo masculino
    if (dado[i].cliente.sexo == 'm' || dado[i].cliente.sexo == 'M') {
      if (i == 0) {
        menorSaldoM = dado[i].saldo;
        maiorSaldoM = dado[i].saldo;
      } else {
        if (dado[i].saldo > maiorSaldoM) {
          maiorSaldoM = dado[i].saldo;
        }
        if (dado[i].saldo < menorSaldoM) {
          menorSaldoM = dado[i].saldo;
        }
      }

      // Saldo médio masculino
      saldoMedioM += dado[i].saldo;
      countM++;
    }

    // verifica saldo negativo
    if (dado[i].saldo < 0) {
      indicesNegativos[contaNegativos] = i;
      contaNegativos++;
    }
  }

  if (countF > 0) {
    saldoMedioF = saldoMedioF / countF;
  }
  if (countM > 0) {
    saldoMedioM = saldoMedioM / countM;
  }

  // Saldos Masculino
  if (countM > 0) {
    printf("\n\nMASCULINO\n");
    printf("Maior saldo masculino: %.2f\n", maiorSaldoM);
    printf("Menor saldo masculino: %.2f\n", menorSaldoM);
    printf("Média saldo masculino: %.2f", saldoMedioM);
  }
  // Saldos Feminino
  if (countF > 0) {
    printf("\n\nFEMININO\n");
    printf("Maior saldo feminino: %.2f\n", maiorSaldoF);
    printf("Menor saldo feminino: %.2f\n", menorSaldoF);
    printf("Média saldo feminino: %.2f", saldoMedioF);
  }

  printf("\n\nMaior Limite: %.2f", maiorLimite);

  printf("\n\nConta mais antiga:\n");
  printf("\tNúmero da conta: %d", dado[maisAntigoIndice].numConta);
  printf("\tData da criação da conta: %d-%d-%d",
         dado[maisAntigoIndice].data.dia, dado[maisAntigoIndice].data.mes,
         dado[maisAntigoIndice].data.ano);
  printf("\tCPF: %s", dado[maisAntigoIndice].cliente.cpf);

  // Imprimir conta dos clientes com saldos negativos
  if (contaNegativos > 0) {
    printf("\n\n------ SALDOS NEGATIVOS ------\n");
    for (int i = 0; i < contaNegativos; i++) {
      printf("Conta %d:\n", dado[indicesNegativos[i]].numConta);
      printf("\tCPF: %s\n", dado[indicesNegativos[i]].cliente.cpf);
      printf("\tNome: %s %s\n", dado[indicesNegativos[i]].cliente.nome,
             dado[indicesNegativos[i]].cliente.sobrenome);
      printf("\tSaldo: %.2f\n", dado[indicesNegativos[i]].saldo);
      printf("\n\n");
    }
  } else {
    printf("\n\n------ SEM CONTAS COM SALDOS NEGATIVOS ------\n\n");
  }
  return 0;
}