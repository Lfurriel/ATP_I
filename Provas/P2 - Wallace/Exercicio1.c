#include <stdio.h>

#define n 10

int main(void) {

  //(a)
  struct eletrodomestico {
  char nome[15];
  float potencial;
  float tempo;
  } eletro[n];
  float consumoUnico[n];
  float consumoPercent[n];
  float consumoTotal = 0;
  float dias;

  //(b) Leitura dos eletrdomésticos
  for(int i = 0; i < n; i++){
    printf("Digite o nome do eletrodoméstico:\n");
    scanf(" %[^\n]s", eletro[i].nome);
    printf("Digite o potencial:\n");
    scanf("%f", &eletro[i].potencial);
    printf("Digite o tempo ativo por dia:\n");
    scanf("%f", &eletro[i].tempo);
    printf("\n-----------------------\n");
  }

  //(c)
  printf("Digite os dias que serão contabiizados:\n");
  scanf("%f", &dias);
  printf("\n");
  for(int i = 0; i < n; i++){
    consumoUnico[i] = dias * eletro[i].potencial * eletro[i].tempo; //Consumo do elerodoméstico no tempo em dias estabelecido pelo usuário
    consumoTotal += consumoUnico[i]; //Consumo total dos eletrodomésticos
  }
  printf("Consumo total: %.2f\n", consumoTotal);
  for(int i = 0; i < n; i++){
    consumoPercent[i] = (consumoUnico[i]/consumoTotal)*100; //Cálculo da porcentagem
    printf("Consumo do eletro doméstico %d: %.2f (%.2f%%)\n", i+1, consumoUnico[i], consumoPercent[i]);
  }
  
  return 0;
}