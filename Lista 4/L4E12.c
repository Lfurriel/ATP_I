#include <stdio.h>

#define pessoas 4

int main(void) {
  int countF = 0, countM = 0, porcentagemF, porcentagemM;
  float altura[pessoas], maiorF = 0, maiorM = 0, menorF = 1000, menorM = 1000, mediaF = 0;
  char sexo[pessoas];

  for(int i = 0; i < pessoas; i++){
    do{
      printf("Digite o sexo <F> Feminino ou <M> Masculino: ");
      scanf(" %c", &sexo[i]);

      if(sexo[i] != 'F' && sexo[i] != 'M'){
        printf("Entrada inválida!\n");
      }
    }while(sexo[i] != 'F' && sexo[i] != 'M');
    printf("Digite sua altura: ");
    scanf("%f", &altura[i]);
    if(sexo[i] == 'F'){
      countF++;
      mediaF += altura[i];
      if(altura[i] > maiorF){
        maiorF = altura[i];
      }
      if(altura[i] < menorF){
        menorF = altura[i];
      }
    } else {
      countM++;
      if(altura[i] > maiorM){
        maiorM = altura[i];
      }
      if(altura[i] < menorM){
        menorM = altura[i];
      }
    }
  }

  printf("\n--------------\n");
  //(a)
  printf("A maior mulher mede: %.2f\n", maiorF);
  printf("A maior mulher mede: %.2f\n", menorF);
  printf("O maior homem mede: %.2f\n", maiorM);
  printf("O menor homem mede: %.2f\n", menorM);

  printf("\n--------------\n");
  //(b)
  mediaF = mediaF/countF;
  printf("Media de altura das mulheres: %f\n", mediaF);

  printf("\n--------------\n");
  //(c)
  printf("Homens: %d\n", countM);
  printf("Mulheres: %d\n", countF);

  porcentagemF = (countF/pessoas)*100;
  porcentagemM = (countM/pessoas)*100;
  printf("Porcentagem mulheres: %d\n", porcentagemF);
  printf("Porcentagem homens: %d\n", porcentagemM);


  return 0;
}