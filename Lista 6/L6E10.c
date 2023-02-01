/*Construa um programa para corrigir uma prova com 10 questões de múltipla
escolha (a, b, c, d ou e), em uma turma com três alunos. Cada questão vale 1
ponto. O programa deve ler o gabarito, a matrícula (número inteiro) de cada
aluno e suas respostas. Calcule e escreva: Para cada aluno, escreva sua
matrícula, suas respostas e sua nota. O percentual de aprovação, assumindo
média 7.0.*/

#include <stdio.h>
#define alunos 3
#define questoes 10

int main(void) {
  char respostas[alunos][questoes];
  char gabarito[questoes] = {'a', 'b', 'c', 'a', 'd', 'e', 'a', 'c', 'd', 'e'};
  int nota[alunos] = {0, 0, 0};
  int matricula[alunos];

  for (int i = 0; i < alunos; i++) {
    printf("\nAluno %d:\n", i + 1);
    printf("Insira o número de matrícula: ");
    scanf("%d", &matricula[i]);
    for (int j = 0; j < questoes; j++) {
      printf("Resposta questão %d: ", j + 1);
      scanf(" %c", &respostas[i][j]);
      if (respostas[i][j] == gabarito[j]) {
        nota[i]++;
      }
    }
  }

  printf("\nGabarito: ");
  for (int i = 0; i < questoes; i++) {
    printf("%c\t", gabarito[i]);
  }

  for (int i = 0; i < alunos; i++) {
    printf("\n\nAluno %d: \n", i + 1);
    printf("\tMatrícula %d\n", matricula[i]);
    printf("\tNota %d\n", nota[i]);
    for (int j = 0; j < questoes; j++) {
      printf("\t%c", respostas[i][j]);
    }
  }

  return 0;
}