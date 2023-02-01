/*Construa um programa para reproduzir a saída indicada na imagem abaixo. Para tanto, use # define size
10 e as variáveis nomeadas como: variáveis simples, sendo i, c, f e d com os tipos int, char, float e double,
respectivamente; vetores, sendo vet_i, vet_c, vet_f e vet_d, com os tipos int, char, float e double,
respectivamente; matrizes, sendo m_i, m_c, m_f e m_d, com os tipos int, char, float e double,
respectivamente. O programa não deve usar laços.*/

#include <stdio.h>

#define size 10

int main(void) {

  //variáveis 

  int i, vet_i[size], m_i[size][size];
  char c, vet_c[size], m_c[size][size];
  float f, vet_f[size], m_f[size][size];
  double d,  vet_d[size], m_d[size][size];

  printf("\nTIPO.................SIZE\n");
  printf("\nTamanho: i, c, f, d");
  printf("\n int:%lu", sizeof(i));
  printf("\n char:%lu", sizeof(c));
  printf("\n float:%lu", sizeof(f));
  printf("\n double:%lu", sizeof(d));
  printf("\nTamanho: vet_i, vet_c, vet_f, vet_d");
  printf("\n int:%lu", sizeof(vet_i));
  printf("\n char:%lu", sizeof(vet_c));
  printf("\n float:%lu", sizeof(vet_f));
  printf("\n double:%lu", sizeof(vet_d));
  printf("\nTamanho: m_i, m_c, m_f, m_d");
  printf("\n int:%lu", sizeof(m_i));
  printf("\n char:%lu", sizeof(m_c));
  printf("\n float:%lu", sizeof(m_f));
  printf("\n double:%lu", sizeof(m_d));

  return 0;

}