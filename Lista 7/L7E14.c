/*Faça um programa que receba a hora de início e de término de um jogo. Os valores deverão ser expressos em
 quantidade de horas e de minutos, bem como apenas em minutos e apenas em segundos. Considere que o tempo
 máximo de duração de um jogo é de 24 horas e que ele pode começar em um dia e terminar no outro.*/

#include <stdio.h>

int main(void) {
  struct tempo{
  int horaInicio, horaFim;
  int minutoInicio, minutoFim;
  }tempo;
  int horaTotal, minutoTotal, segundo, min;
  do{
    printf("\nDigite a hora inicial e hora final:\n");
    scanf("%d %d", &tempo.horaInicio, &tempo.horaFim);
  }while(tempo.horaInicio<0 || tempo.horaInicio>23 && tempo.horaFim<0 || tempo.horaInicio>23);
  do{
     printf("\nDigite a minuto inicial e minuto final:\n");
    scanf("%d %d", &tempo.minutoInicio, &tempo.minutoFim);
  }while(tempo.minutoInicio<0 || tempo.minutoInicio>60 && tempo.minutoFim<0 || tempo.minutoInicio>60);
  if(tempo.horaFim < tempo.horaInicio){
    tempo.horaFim+=24;
  }
  if(tempo.minutoFim < tempo.minutoInicio){
    tempo.minutoFim+=60;
    tempo.horaFim--;
  }
  horaTotal = tempo.horaFim - tempo.horaInicio;
  minutoTotal = tempo.minutoFim - tempo.minutoInicio;
  printf("\nO jogo teve %d horas e %d minutos\n", horaTotal, minutoTotal);
  min = (horaTotal * 60) + minutoTotal;
   printf("\nO tempo em minutos %d\n", min);
   segundo = (min * 60);
  printf("\nO tempo em segundos %d\n", segundo);
  return 0;
}