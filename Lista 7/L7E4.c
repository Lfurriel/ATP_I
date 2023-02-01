/*Crie um tipo registro chamado Cadastro que tenha os campos Nome (Alfanumérico), Ender (Endereco),
Dnasc (Data), Telefone (Alfanumérico). No mesmo programa, crie os tipos Data e Endereco. Crie um
vetor Contato do tipo Cadastro com 10 elementos. Faça um programa que leia todos os elementos de
Contato e em seguida os imprima.*/

#include <stdio.h>
#include <string.h>
#define n 10
int main(void) {
  typedef struct data{
  int dia, ano;
  char mes[20];
  }data;
  typedef struct end{
  int CEP, num;
  char rua[60], complemento[30]; 
  }end;
  struct cad{
  char nome[60];
  int phone;
  end endereco;
  data dnasc;
  }cad[n];

  for(int i = 0; i < n; i++) {   
    printf("\n Digite o dia de nascimento\n");
    scanf("%d", &cad[i].dnasc.dia);
    printf("\n Digite o ano de nascimento\n");
    scanf("%d", &cad[i].dnasc.ano);
    printf("\n Digite o dia de nascimento\n");
    scanf(" %[^\n]s", cad[i].dnasc.mes);
    printf("Digite a rua do endereco:\n");
    scanf(" %[^\n]s", cad[i].endereco.rua);
    printf("Digite o numero da rua:\n");
    scanf("%d", &cad[i].endereco.num);
    printf("\nDigite o CEP");
    scanf("%d", &cad[i].endereco.CEP);
    printf("Digite o complemento:\n");
    scanf(" %[^\n]s", cad[i].endereco.complemento);
    printf("\nDigite o telefone");
    scanf("%d", &cad[i].phone);
    printf("\nDigite o nome");
    scanf(" %[^\n]s", cad[i].nome);

    printf("Fim do registro %d\n\n\n", i+1);
    
  }

  // ai faltaria só printar esses valores

  return 0;
}