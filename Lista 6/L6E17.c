/*Faça um programa para armazenar as informações de 100 alunos. O programa deve permitir entradas do nome, número de matrícula, tipo de curso (0 ou 1), número do curso e a média geral de cada aluno. Como resultado, o programa deve apresentar: (a) todas as informações armazenadas; (b) número de matrícula de cada aluno vinculado ao tipo de curso 1; (b) nome e número de matrícula de cada aluno vinculado ao tipo de curso 1, do número do curso indicado pelo usuário e que obteve a melhor média.*/

//Vou imaginar que o segundo (b) seria (c) nome e número de matrícula de cada aluno vinculado ao tipo de curso 0



#include <stdio.h>
#include <string.h>
#define n 100

int main(void) {
  
  int numeroMatricula[n];
  int tipoCurso[n];
  int numeroCurso[n];
  float mediaGeral[n];
  char nomes[n][60];

  for(int i = 0; i < n; i++){
    printf("Insira o número de matrícula do aluno %d: ", i+1);
    scanf("%d", &numeroMatricula[i]);
     printf("Insira o nome do aluno %d: ", i+1);
     scanf(" %[^\n]s", nomes[i]);;
    printf("Insira o número do curso do aluno %d: ", i+1);
    scanf("%d", &numeroCurso[i]);
    do{
      printf("Insira o tipo do curso do aluno %d: ", i+1);
      scanf("%d", &tipoCurso[i]);
      if(tipoCurso[i] < 0 || tipoCurso[i] > 1){
        printf("Entrada inválida\n");
      } 
    } while(tipoCurso[i] < 0 || tipoCurso[i] > 1);
    
    printf("Insira média geral do aluno %d: ", i+1);
    scanf("%f", &mediaGeral[i]);
  }


  // (a)
  for(int i = 0; i < n; i++){
    printf("\n\n");
    printf("Aluno %d\n", i+1);
    printf("Número de matrícula: %d\n", numeroMatricula[i]);
    printf("Nome: %s\n", nomes[i]);
    printf("Número do curso: %d\n", numeroCurso[i]);
    printf("Tipo de curso: %d\n", tipoCurso[i]);
    printf("Media geral: %.2f\n", mediaGeral[i]);    
  }

  // (b)
  printf("\n\nAlunos tipo de curso 1:\n");
  for(int i = 0; i < n; i++){
    if(tipoCurso[i] == 1){
    printf("\n");
    printf("Aluno %d\n", i+1);
    printf("Número de matrícula: %d\n", numeroMatricula[i]);
    printf("Nome: %s", nomes[i]);
    }     
  }

  // (c)
  printf("\n\nAlunos tipo de curso 0:\n");
  for(int i = 0; i < n; i++){
    if(tipoCurso[i] == 0){
    printf("\n");
    printf("Aluno %d\n", i+1);
    printf("Número de matrícula: %d\n", numeroMatricula[i]);
    printf("Nome: %s", nomes[i]);
    }     
  }
  return 0;
}