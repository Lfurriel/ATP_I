/*Construa um programa para ler uma matriz 5 x 10 que indica as respostas de cinco alunos para
 10 questões de múltiplas escolhas. O programa deve ler também um vetor de 10 posições contendo
 o gabarito de respostas que podem ser a, b, c ou d. O programa deverá comparar as respostas de
 cada candidato com o gabarito e emitir um vetor denominado resultado, contendo a pontuação
 correspondente a cada aluno.*/

#include <stdio.h>
#include <string.h>

int main(void) {
  
  char respostas[5][10];
  char gabarito[10] ={'a', 'b', 'a', 'a', 'd', 'd', 'c', 'a', 'c', 'd'};
  int resultado[5];
  char alternativa;
  

  for(int i = 0; i < 1; i++){
    printf("\nRespostas aluno %d\n", i+1);
    for(int j = 0; j < 10;j++){
      printf("\tQuestão %d:\t", j+1);
      do{
      scanf(" %c", &alternativa);
      } while (alternativa == ' ');
      respostas[i][j] = alternativa;
      printf("%c", respostas[i][j]);
      if(alternativa == gabarito[j]){
        resultado[i]++;
      }
    }
    printf("Resultado aluno %d: %d\n", i+1, resultado[i]);
  }


//printf("Resultado: %d", resultado[0]);
  
  return 0;
}