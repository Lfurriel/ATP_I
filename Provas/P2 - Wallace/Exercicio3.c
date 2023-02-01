#include <stdio.h>

int main(void) {
  int alturaMontanha = 180;
  int alturaTyrion = 135;
  int ano = 2023;

  //Apresentação primeiro ano
  printf("Ano: 2022\n");
  printf("Montanha: %dcm\n", alturaMontanha);
  printf("Tyrion:\t  %dcm\n", alturaTyrion);
 
  do{
    printf("\nAno: %d\n", ano);
    alturaMontanha += 4; //Montanha cresce 4cm ao ano
    alturaTyrion += 12; //Tyrion cresce 12cm ao ano
    printf("Montanha: %dcm\n", alturaMontanha);
    printf("Tyrion:\t  %dcm\n", alturaTyrion);
    ano++;
  } while( alturaTyrion <= alturaMontanha);

  //Apresentação quando Tyrion for maior que montanha
  printf("\n----------------------\n");
  printf("\nTyrion será maior que montanha em %d\n", ano-1);
  printf("Montanha: %dcm\n", alturaMontanha);
  printf("Tyrion:\t  %dcm\n", alturaTyrion);;
  return 0;
}