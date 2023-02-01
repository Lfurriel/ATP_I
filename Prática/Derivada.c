#include <stdio.h>
#include <math.h>

float derivada(float v[], int n, float x) {
  int i;
  float soma = 0;
  for (i = 1; i <= n; i++) {
    soma += v[i]*i*pow(x,i-1);
  }
  return soma;
}

int main(void) {
  int i;
  float x, v[3];

  for(i=0; i < 3; i++){
    printf("Digite o termo: ");
    scanf("%f", &v[i]);
    }
  printf("Digite o valor do ponto que quer derivar: ");
  scanf("%f", &x);
  printf("Resultado: %.2f", derivada(v,2,x));
  return 0;
}