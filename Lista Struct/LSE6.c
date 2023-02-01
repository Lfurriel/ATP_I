/*Faça um programa usando struct que controle o consumo de energia dos eletrodomésticos de uma residência. Mais especificamente,

(a) Criar e ler 10 eletrodomésticos de uma casa. Cada eletrodom ́estico deverá conter:
nome (máximo de 15 letras), potencial (real, em kW), e tempo ativo por dia (real, em horas).
(b) Ler um tempo t (em dias), calcular e mostrar o consumo total da residência, e os consumos relativos de cada eletrodom ́estico (consumo/consumo total) nesse período de tempo. Apresente este  último dado em porcentagem.*/

#include <stdio.h>
#include <string.h>

#define n 2

int main(void) {

  struct eletro {
  char nome[15];
  float potencial;
  int tempo;
  float consumoTotal;
  } eletrodomesticos[n];
  
  float consumoTotalHora = 0;
  float consumoTotalTotal;
  int dias;

  for(int i = 0; i < n; i++){
    printf("Digite o nome do eletrodoméstico: ");
    scanf(" %[^\n]s", eletrodomesticos[i].nome);
    printf("Digite o consumo em kWh do aparelho: ");
    scanf("%f", &eletrodomesticos[i].potencial);
    printf("Digite as horas: ");
    scanf("%d", &eletrodomesticos[i].tempo);
    eletrodomesticos[i].consumoTotal = eletrodomesticos[i].potencial*eletrodomesticos[i].tempo;
    consumoTotalHora+=eletrodomesticos[i].consumoTotal;
  }

  printf("Digite os dias: ");
  scanf("%d", &dias);
consumoTotalTotal = consumoTotalHora*dias;
  printf("Consumo total da residência: %.2f", consumoTotalTotal);
 
  return 0;
}