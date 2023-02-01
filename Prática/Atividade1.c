#include <stdio.h>
#include <string.h>

int main(void) {
  int quantidade;
  float preco;
  char produto [100];
  float total;

  printf("Informe o nome do produto:\n");
  scanf("%s", produto);
  printf("Informe o preço do produto comprado:\n");
  scanf("%f", &preco);
  printf("Informe a quantidade:\n");
  scanf("%i", &quantidade);

  total = quantidade * preco;

  if(quantidade > 10 && quantidade <= 20){
    total -= (total*0.10);
  } else if (quantidade <= 50){
    total -= total*0.20;
  } else {
    total -= total*0.25;
  }
  
  printf("Produto: %s \n", produto);
  printf("Valor a pagar: %f", total);
  
  return 0;
}