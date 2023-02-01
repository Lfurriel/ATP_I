/*Faça um programa que, utilizando registros, leia o nome e data de nascimento (dia mês ano) de n pessoas
 (n = 40), calcule e mostre a idade de cada pessoa e o nome da pessoa mais velha. Suponha que não temos
 duas (ou mais) pessoas com a mesma idade.*/

#include <stdio.h>

#define n 4
int main(void) {

  typedef struct data{
  int dia;
  int mes;
  int ano;
  }Tdata;
  
  struct pessoa{
  char nome[60];
  Tdata data;
  int idade;
  }pessoa[n];
  
  int maisVelho, diaHj, mesHj, anoHj, aux;

  printf("\nDigite o dia de hoje\n");
  scanf("%d", &diaHj);
  printf("\nDigite o mês de hoje\n");
  scanf("%d", &mesHj);
  printf("\nDigite o ano de hoje\n");
  scanf("%d", &anoHj);
  for(int i=0; i<n; i++){
    printf("\nDigite seu nome\n");
    scanf(" %[^\n]s", pessoa[i].nome);
    printf("\nDigite o dia, mes e  ano de nascimento, respectivamente\n");
    scanf("%d %d %d", &pessoa[i].data.dia, &pessoa[i].data.mes, &pessoa[i].data.ano);
    pessoa[i].idade = anoHj-pessoa[i].data.ano;
    if(mesHj - pessoa[i].data.mes < 0){
      pessoa[i].idade--;
    } else if (mesHj - pessoa[i].data.mes == 0) {
      if (diaHj - pessoa[i].data.dia < 0) {
        pessoa[i].idade--;
      }
    }
    if(i==0){
      maisVelho=pessoa[i].idade;
      aux=i;
    } else if(pessoa[i].idade > maisVelho){
      maisVelho=pessoa[i].idade;
      aux=i;
    }
    }

    for (int i=0; i<n; i++) {
    printf("\no nome é: %s e a idade é: %d\n", pessoa[i].nome, pessoa[i].idade);
    }
    printf("\n O nome do mais velho é: %s\n", pessoa[aux].nome);

  return 0;

}