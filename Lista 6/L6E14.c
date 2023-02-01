
/*Um programa para ler a tabela acima e informar ao usuário o tempo requerido
para percorrer duas cidades: cidade origem e cidade destino. Essas cidades
origem e destino são digitadas pelo usuário. Esse processo deve ser repetido até
o momento em que duas cidades iguais são digitadas (origem e destino). O
programa deve permitir apenas entradas válidas;*/

#include <stdio.h>
#define c 7

int main(void) {
  int tabela[c][c] =
      {
          {0, 2, 11, 6, 15, 11, 1},  {2, 0, 7, 12, 4, 2, 15},
          {11, 7, 0, 11, 8, 3, 13},  {6, 12, 11, 0, 10, 2, 1},
          {15, 4, 8, 10, 0, 5, 13},  {11, 2, 3, 2, 5, 0, 14},
          {1, 15, 13, 1, 13, 14, 0},
      },
      origem, destino, aux[c * c], count = 0, tempoTotal = 0, cidade2, cidade3,
      tempo1, tempo2;

  printf("TABELA DAS CIDADES");
  for(int i = 0; i < c; i++){
    printf("\n");
    for(int j = 0; j < c; j++){
      printf("%d\t", tabela[i][j]);
    }
  }

  do {
    do {
      printf("\n\nDigite o número da cidade origem e da cidade destino\n");
      scanf("%d %d", &origem, &destino);
    } while (origem > 6 || origem < 0 || destino > 6 || destino < 0);
    if (origem != destino) {
      printf("\nO tempo é: %d\n", tabela[origem][destino]);
    } else {
      printf("\nPrograma encerrado\n");
    }
  } while (origem != destino);
  /*Um programa para imprimir a tabela dos tempos, sem repetições: apenas o
“triângulo” superior ou o “triângulo” inferior. A diagonal principal não deve
ser apresentada.*/
  for (int i = 0; i < c; i++) {
    printf("\n");
    for (int j = 0; j < c; j++) {
      if (i > j) {
        printf("%d\t", tabela[i][j]);
      }
    }
  }
  printf("\n\n");
  for (int i = 0; i < c; i++) {
    printf("\n");
    for (int j = 0; j < c; j++) {
      if (i < j) {
        printf("%d\t", tabela[i][j]);
      } else {
        printf("\t");
      }
    }
  }

  /*Um programa em que usuário pode fornecer uma sequência de cidades até que as
   * cidades origem e destino sejam iguais. Apresente o tempo parcial requerido
   * para percorrer as cidades, bem como o total para cumprir o percurso
   * especificado.*/

  do {
    printf("\nDigite o número da cidade origem e da cidade destino\n");
    scanf("%d %d", &origem, &destino);
  } while (origem > 6 || origem < 0 || destino > 6 || destino < 0);
  aux[count] = tabela[origem][destino];
  origem = destino;
  count++;
  do {
    do {
      origem = destino;
      printf("\nDigite o número da cidade destino\n");
      scanf("%d", &destino);
    } while (destino > 6 || destino < 0);
    aux[count] = tabela[origem][destino];
    count++;
  } while (origem != destino);
  for (int i = 0; i < count - 1; i++) {
    printf("\nTempo parcial %d: %d\n", i + 1, aux[i]);
    tempoTotal += aux[i];
  }
  printf("\nTempo total: %d\n", tempoTotal);
  /*Um programa que auxilie o usuário na escolha de um roteiro de férias. Para
isso, o usuário pode fornecer quatro cidades, sendo: a primeira cidade é origem;
a última cidade é o destino. As outras cidades caracterizam locais de
visita/pernoite. Ao final, o programa deve fornecer o percurso com o menor tempo
possível. Exemplo: origem para descanso 1, descanso 1 para destino; ou, origem
para descanso 2, descanso 2 para destino.*/
  do {
    do {
      printf("\nDigite o número da cidade origem e da cidade destino\n");
      scanf("%d %d", &origem, &destino);
      printf("\nDigite o número das cidades de parada\n");
      scanf("%d %d", &cidade2, &cidade3);
    } while (origem > 6 || origem < 0 || destino > 6 || destino < 0 ||
             cidade2 < 0 || cidade2 > 6 || cidade3 < 0 ||
             cidade3 > 6); // arrumare isso  aká
    tempo1 = tabela[origem][cidade2] + tabela[cidade2][cidade3] +
             tabela[cidade3][destino];
    tempo2 = tabela[origem][cidade3] + tabela[cidade2][cidade3] +
             tabela[cidade2][destino];
    if (tempo1 < tempo2) {
      printf("\nPercurso é o caraleo:%d->%d->%d->%d\nTempo:%d\n", origem,
             cidade2, cidade3, destino, tempo1);
    } else {
      printf("\nPercurso é o caraleo:%d->%d->%d->%d\nTempo:%d\n", origem,
             cidade3, cidade2, destino, tempo2);
    }
  } while (origem != destino);
  return 0;
}