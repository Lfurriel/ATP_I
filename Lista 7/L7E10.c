/*Um provedor de acesso à Internet mantém o seguinte cadastro de clientes: código do cliente, e-mail,
 número de horas de acesso, página (S-sim ou N-não). Elaborar um programa em C que calcule e mostre um
 relatório contendo o valor a pagar por cada cliente, sabendo-se que as primeiras 20 horas de acesso custam
 R$35,00 e cada hora excedente tem o custo de R$2,50. Os clientes que têm páginas devem ter um acréscimo de
 R$40,00 a sua conta. O provedor tem um total de 20 clientes. O programa deve exibir um relatório em que cada
 registro deve aparecer em uma linha. Além disso, o programa deve exibir o total a receber.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define  n 20

int main(void) {

  srand(time(NULL));
  
  struct cliente{
  int codigo;
  int horas;
  char email[60];
  char pagina;
  float total;
  } cliente[n];

  float totalReceber = 0;
  //float aux = 0;

  for (int i = 0; i < n; i++){
    printf("\n--------------------------------\n");
    printf("Novo cliente\n");
    cliente[i].codigo = 100 + rand() % 900;
    printf("Digite as horas usadas do cliente %d: ", cliente[i].codigo);
    scanf("%d", &cliente[i].horas);
    printf("Digite o email do cliente %d: ", cliente[i].codigo);
    scanf(" %[^\n]s", cliente[i].email);
    printf("Cliente %d tem página? <s> Sim, <n> Não\n", cliente[i].codigo);
    scanf(" %c", &cliente[i].pagina);

    //calcula total por cliente
    cliente[i].total = 35.00;
    cliente[i].horas -= 20;
    if(cliente[i].horas > 0){
      cliente[i].total += cliente[i].horas * 2.50;
    }
    if(cliente[i].pagina == 's' || cliente[i].pagina == 'S'){
      cliente[i].total += 40.00;
    }
    printf("Total a pagar: %.2f\n\n", cliente[i].total);
    totalReceber += cliente[i].total;
  }

  //Apresenta os dados
  //A apresentação dos dados ficou meio bosta mas ok
  printf("\nRelatório");
  printf("\n-----------------------------\n");
  printf("Código\t|E-mail\t|Horas\t|Página\t|Total\n");
  for(int i = 0; i < n; i++){
    printf("%d\t\t|%s\t|%d\t\t|%c\t\t|%.2f\n", cliente[i].codigo, cliente[i].email, cliente[i].horas, cliente[i].pagina, cliente[i].total);
  }
  printf("Total a receber: %.2f", totalReceber);
  return 0;
}