/*Faça um programa capaz de ler as coordenadas (x e y) que definem cinco pontos em um plano cartesiano. Considere
 o primeiro ponto como referência e, em seguida, o programa deve imprimir o ponto lido que tem a menor distância
 em relação ao ponto de referência. Apresente também a distância entre os dois pontos.*/

#include <stdio.h>
#include <math.h>

#define n 5

int main(void) {
  int x[n], y[n];
  float distancia;
  float menorDistancia;
  int menorIndice;

  for (int i = 0; i < n; i++){
    if(i==0){
      printf("Insira a coordenada X do ponto de referência: ");
      scanf("%d", &x[i]);
      printf("Insira a coordenada Y do ponto de referência: ");
      scanf("%d", &y[i]);
    } else {
      printf("Insira a coordenada X do ponto %d: ", i);
      scanf("%d", &x[i]);
      printf("Insira a coordenada Y do ponto %d: ", i);
      scanf("%d", &y[i]);

      //calcula distância
      
      if(i==1){
        menorDistancia = distancia;
        menorIndice = i;
      } else if( distancia < menorDistancia){
        menorDistancia = distancia;
        menorIndice = i;
      }
    }
  }
  printf("\n\nPontos:\n");
  printf("Ponto de referência: (%d, %d)\n", x[0],y[0]);
  for(int i = 1; i < n; i++){
    printf("(%d, %d)\n", x[i],y[i]);
  }
  return 0;
}