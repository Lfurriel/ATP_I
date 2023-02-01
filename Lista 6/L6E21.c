/*A tabela indicada abaixo é composta por M colunas, representando notas, e N linhas, representando o total de alunos. Escreva um programa que tenha a tabela armazenada em uma matriz e, em seguida, seja capaz de mostrar a média de cada aluno, bem como a média geral da turma. A tabela tem o formato abaixo.
Tabela (6x3)
7.5 8.5 7.8
8.4 9.2 6.8
9.1 10.0 9.5
4.0 5.2 4.6
5.7 3.4 4.3
4.3 6.0 5.8  */

#include <stdio.h>
#define m 3
#define n 2

int main(void) {

  float tabela[n][m];
  float aux = 0;
  float mediaAluno[n];
  float mediaTotal = 0;

  for(int i = 0; i < n; i++){
    printf("\n");
    for(int j = 0; j < m; j++){
      printf("Nota %d do aluno %d ", j+1, i+1);
      scanf("%f", &tabela[i][j]);
    }
  }

  // imprime tabela das notas
  printf("\nTabela das notas:");
  for(int i = 0; i < n; i++){
    printf("\n");
    for(int j = 0; j < m; j++){
      printf("%.2f\t", tabela[i][j]);
    }
  }

  // calcula media dos alunos
  for(int i = 0; i <= n; i++){
    aux = aux/m;
    mediaAluno[i-1] = aux;
    aux = 0;
    for(int j = 0; j < m; j++){
      aux += tabela[i][j];
    }
  }

  printf("\n\n");

  // imprime media alunos + calcula media total
  for(int i = 0; i < n; i++){
    printf("Média aluno %d: %.2f\n", i+1, mediaAluno[i]);
    mediaTotal += mediaAluno[i];
  }

  mediaTotal = mediaTotal/n;
  printf("\nMedia dos alunos: %.2f", mediaTotal);

  
  
  return 0;
}