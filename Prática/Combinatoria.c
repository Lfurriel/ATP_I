#include <stdio.h>

int fatorial(int n){
  int fat = 1;
  for (int i = 0; i < n; i++){
    fat += fat * i;
  }
  return fat;
}

int combinatoria (int a, int b, int c){
  int resultado = a/(b*c);
  return resultado;
}

int main(void) {
  int n, m, k;
  do {
    printf("Digite dois números: ");
    scanf("%d %d", &n, &m);
  } while (n < 0 || m < 0 || (n-m) < 0);
  n = fatorial(n);
  m = fatorial(m);
  k = fatorial(k);
  printf("n: %d\n", n);
  printf("m: %d\n", m);
  printf("k: %d\n", k);
  
  printf("Resultado = %d", combinatoria(n,m,k));
  
  return 0;
}