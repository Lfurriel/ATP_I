#include <stdio.h>
#include <math.h>

int main(void) {
  int mod, n = 1, resto, potencia;
  printf("Digite o N e o mod: ");
  scanf("%d %d", &n, &mod);
  for(int i = 0; i < 20; i++){
    potencia = pow(n, i);
    resto = potencia % mod;
    if(resto < 0){
      break;
    }
    printf("%d^%d = %d(mod%d)\n",n,i,resto,mod);
  }
  
  return 0;
}