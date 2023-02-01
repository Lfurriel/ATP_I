/*Faça um programa em Linguagem C para criar uma estrutura composta pelos campos: notaprova,
 notatrabalho, média e nome. O programa deve permitir a leitura do nome e notas de um aluno.
  Em seguida, o programa deve calcular a média e armazenar no campo correspondente. 
  Imprimir os dados.*/

#include <stdio.h>
#include <stdlib.h>

#define n 1

int main(void) {
  struct aluno {
  char nome [60];
  float notaProva;
  float notaTrabalho;
  float media;
  } al[n];

  for(int i = 0; i < n; i++){
    printf("\n\nDigite o nome do aluno %d: ", i + 1);
    scanf(" %[^\n]s", al[i].nome);
    printf("Digite a nota da prova: ");
    scanf("%f", &al[i].notaProva);
    printf("Digite a nota do trabalho: ");
    scanf("%f", &al[i].notaTrabalho);
    al[i].media = (al[i].notaProva + al[i].notaTrabalho)/2;
    printf("%.2f", al[i].media);
  }

 
  return 0;
}