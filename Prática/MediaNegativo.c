#include <stdio.h>

int main(void) {
  float v[6];
  float u[6];
  float soma = 0;
  float media = 0;
  int i, j = 0;

  for (i = 0; i < 6; i++) {
    printf("Digite um valor do campo %d do vetor V: \n", i);
    scanf("%f", &v[i]);
  }
  for (i = 0; i < 6; i++) {
    if (v[i] < 0) {
      u[j] = v[i];
      soma += v[i];
      j++;
    }
    //printf("V[%d]: %f\n", i, v[i]);
    //printf("soma %f\n", soma);
  }
  media = soma / j;
  printf("Média dos valores negativos: %f", media);

  return 0;
}