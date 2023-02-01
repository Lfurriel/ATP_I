/*Escreva um algoritmo que leia a idade e altura de cada aluno de uma turma de
50 pessoas, e que calcule/imprima na tela: 
(a) A idade média dos alunos com menos de 1.70m de altura. 
(b) A altura média dos alunos com mais de 20 anos. 
(c) A idade do aluno mais velho da turma. 
(d) A idade do aluno mais novo da turma.*/

#include <stdio.h>
#define alunos 10

int main(void) {

  int idade[alunos], maisNovo, maisVelho, countBaixinhos = 0, countIdosos = 0;
  float idadeMedia = 0, altura[alunos], alturaMedia = 0;

  printf("Digite a idade do aluno 1: ");
  scanf("%d", &idade[0]);
  maisNovo = idade[0];
  maisVelho = idade[0];
  printf("Digite a altura do aluno 1: ");
  scanf("%f", &altura[0]);
  if (altura[0] < 1.70) {
    idadeMedia += idade[0];
    countBaixinhos++;
  }
  if (idade[0] > 20) {
    alturaMedia += altura[0];
    countIdosos++;
  }

  for (int i = 1; i < alunos; i++) {
    printf("Digite a idade do aluno %d: ", i + 1);
    scanf("%d", &idade[i]);
    if(idade[i] > maisVelho){
      maisVelho = idade[i];
    }
    if(idade[i]<maisNovo){
      maisNovo = idade[i];
    }
    printf("Digite a altura do aluno %d: ", i + 1);
    scanf("%f", &altura[i]);
    if (altura[i] < 1.70) {
      idadeMedia += idade[i];
      countBaixinhos++;
    }
    if (idade[i] > 20) {
      alturaMedia += altura[i];
      countIdosos++;
    }
  }

  idadeMedia += idadeMedia/countBaixinhos;
  alturaMedia += alturaMedia/countIdosos;
  

  printf("(a) Idade media baixinhos: %.2f\n", idadeMedia);
  printf("(b) Altura média dos véi: %.2f\n", alturaMedia);
  printf("(c) Idade do mais velho: %d\n", maisVelho);
  printf("(d) Idade do mais novo: %d\n", maisNovo);
  

  
  return 0;
}