/*A partir do registro indicado para resolver o exercício 12, crie uma estrutura chamada retângulo. Faça um
 programa que receba (via teclado) as informações que permitem definir um retângulo e informe: área e o
 comprimento de cada aresta.*/

#include <stdio.h>
#include <math.h>

int main(void) {
  float x[4], y[4];
  struct ret{
  float area;
  float aresta1, aresta2, aresta3, aresta4;
  }retangulo;
  for(int i = 0; i < 4; i++){
    do{
      printf("Digite um x[%d] e um y[%d] maiores que 0: ", i,i);
      scanf("%f %f", &x[i], &y[i]);    
      if(x[i]<0 || y[i]<0){
        printf("Valores tem que ser maiores que zero\n");
      }
    } while(x[i]<0 || y[i]<0);
  }
  printf("\nValores são:\n");
  printf("(%.2f, %.2f)\t(%.2f, %.2f)\n(%.2f, %.2f)\t(%.2f, %.2f)\n", x[0],y[0],x[1],y[1],x[2],y[2], x[3],y[3]);

  //CALCULANDO AS ARESTAS DO RETÂNGULO
  //l1 x0,y0 com x1, y1
  retangulo.aresta1=sqrt(pow(x[1]-x[0], 2) + pow(y[1]-y[0], 2));
  //l2 x1,y1 com x2, y2
  retangulo.aresta2=sqrt(pow(x[2]-x[1], 2) + pow(y[2]-y[1], 2));
  //l3 x2,y2 com x3, y3
  retangulo.aresta3=sqrt(pow(x[3]-x[2], 2) + pow(y[3]-y[2], 2));
  //l4 x3,y3 com x0, y0
  retangulo.aresta4=sqrt(pow(x[0]-x[3], 2) + pow(y[0]-y[3], 2) );

  printf("\nComprimentos dos lados:\n");
  printf("Aresta 1 (x0,y0; x1,y1): %.2f\n", retangulo.aresta1);
  printf("Aresta 2 (x1,y1; x2,y2): %.2f\n", retangulo.aresta2);
  printf("Aresta 3 (x2,y2; x3,y3): %.2f\n", retangulo.aresta3);
  printf("Aresta 4 (x3,y3; x0,y0): %.2f\n\n", retangulo.aresta4);

  //VALIDAÇÃO DO RETÂNGULO
  if(retangulo.aresta1 == retangulo.aresta3 && retangulo.aresta2 == retangulo.aresta4){
    retangulo.area = (retangulo.aresta1*retangulo.aresta2);
    printf("Área do retângulo: %.2f", retangulo.area);
  } else if (retangulo.aresta1 == retangulo.aresta2 && retangulo.aresta3 == retangulo.aresta4){
    retangulo.area = (retangulo.aresta1*retangulo.aresta3);
     printf("Área do retângulo: %.2f", retangulo.area);
  } else {
    printf("Não configura retângulo\n");
  }
  
  return 0;
}