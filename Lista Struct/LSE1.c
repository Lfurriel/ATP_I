/*Escreva uma programa que receba um número inteiro (que representa um intervalo
de tempo medido em minutos) e que transforme esse intervalo no correspondente
número de horas e minutos. Exemplo: converte 131 minutos em 2 horas e 11
minutos. Grave o resultado em uma struct tal como definida a seguir:
-------------------------------------------------------------------
Algorithm 1: Programa converte minutos.
-------------------------------------------------------------------
1 #include <stdio.h>
2 #include <stdlib.h>
3 //Defini ̧c ̃ao da struct ’horamin’
4 typedef struct horamin
5 {
6 int horas;
7 int minutos;
8 } horamin;
9 //Programa principal
10 int main()
11 ...
-------------------------------------------------------------------*/

#include <stdio.h>

int main(void) {

  int n;
  struct tempo {
    int horas;
    int minutos;
  } tempo;

  printf("Digite o número que será convertido: ");
  scanf("%d", &n);

  tempo.horas = 0;
  if (n > 60) {
    do {
      tempo.horas++;
      n -= 60;
    } while (n > 60);
  }
  tempo.minutos = n;

  printf("%d hora(s) e %d minuto(s)", tempo.horas, tempo.minutos);
  return 0;
}