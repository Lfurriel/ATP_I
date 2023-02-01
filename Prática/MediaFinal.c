#include <stdio.h>

int main(void) {

  float p1, p2, t;
  int faltas;
  float mediaFinal;
  

  printf("Digite a nota da P1, P2 e Trabalho: \n");
  scanf("%f %f %f", &p1, &p2, &t);

  printf("Digite o total de faltas: \n");
  scanf("%d", &faltas);

  mediaFinal = (p1+p2+t) / 3;

 if(faltas <= 9){
   if(mediaFinal >= 5){
     printf("Aluno aprovado com nota: %f", mediaFinal);
   } else {
     printf("Aluno reprovado com nota: %f", mediaFinal);
   }
 } else{
   printf("Aluno reprovado por faltas, total: %d", faltas);
 }
  return 0;
}