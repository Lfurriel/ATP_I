/*Considere a seguinte struct:
Algorithm 3: Definição da struct paciente.
1 typedef struct
2 {
3 char nome[100];
4 char sexo; //’m’: masculino, ’f’: feminino
5 float peso;
6 float altura;
7 char cpf[12]; //apenas numeros
8 } paciente;
Leia os dados de 10 pacientes (vetor de struct). Dado um cpf digitado pelo
usuário, identificar no vetor a pessoa detentora desse cpf, calcular e mostrar
na tela o seu IMC. Fórmula IMC: peso/(alutra × altura)*/

#include <stdio.h>
#include <string.h>

#define n 10

int main(void) {
  struct paciente {
    char nome[100];
    char sexo; //’m’: masculino, ’f’: feminino
    float peso;
    float altura;
    char cpf[12]; // apenas numeros
  } paciente[n];
  float imc;
  char leCpf[12];

  for (int i = 0; i < n; i++) {
    printf("Digite seu nome: ");
    scanf(" %[^\n]s", paciente[i].nome);
    printf("Digite seu sexo: ");
    scanf("%c", &paciente[i].sexo);
    printf("Digite seu peso ");
    scanf("%f", &paciente[i].peso);
    printf("Digite sua altura: ");
    scanf("%f", &paciente[i].altura);
    printf("Digite seu cpf: ");
    scanf(" %[^\n]s", paciente[i].cpf);
  }

  printf("Digite seu cpf: ");
  scanf(" %[^\n]s", leCpf);

  for (int i = 0; i < n; i++) {
    if(strcmp(leCpf, paciente[i].cpf)){
      imc = paciente[i].peso/(paciente[i].altura*paciente[i].altura);
      printf("Nome: %s", paciente[i].nome);
      printf("IMC: %.1f", imc);
    }
  }

  return 0;
}