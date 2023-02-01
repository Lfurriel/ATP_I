/*Crie um programa que leia e permita armazenar o nome, altura e peso de 5 pessoas.
Cada pessoa deve ser representada por uma struct, que dever ́a ser alocada dentro de um
vetor (vetor de structs). Ap ́os isso, o programa dever ́a:
(a) Ler um valor de altura e um de peso espec ́ıfico;
(b) Listar todos os nomes com alturas maiores daquela que foi fornecida em (a);
(c) Listar todos os nomes com respectivos pesos acima do peso fornecido em (a).*/

#include <stdio.h>
#include <string.h>

#define n 3
int main(void) {
  struct pessoas{
  char nome[60];
  float altura;
  float peso;
  } pessoas[n];

  float peso;
  float altura;

  for(int i = 0; i < n; i++){
    printf("\n\nDigite o nome: ");
    scanf(" %[^\n]s", pessoas[i].nome);
    printf("Digite a altura: ");
    scanf("%f", &pessoas[i].altura);
    printf("Digite o peso: ");
    scanf("%f", &pessoas[i].peso);
  }
  printf("\n\n(a) Digite uma altura específica: ");
  scanf("%f", &altura);
  printf("(a) Digite um peso específico: ");
  scanf("%f", &peso);

  printf("\n\n(b) Pessoas maiores que %.2f:\n", altura);
  for(int i = 0; i < n; i++){
    if(pessoas[i].altura >= altura){
      printf("\t%s, %.2fm\n", pessoas[i].nome, pessoas[i].altura);
    }
  }

    printf("\n\n(c) Pessoas com peso maior que %.2f:\n", peso);
  for(int i = 0; i < n; i++){
    if(pessoas[i].peso >= peso){
      printf("\t%s, %.2fkg\n", pessoas[i].nome, pessoas[i].peso);
    }
  }
  
  return 0;
}