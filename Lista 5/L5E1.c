/*Considere as variáveis x=2 e y=4. Escreva o elemento obtido ou “ERRO” para acessar uma posição:
a) v[x+1] b) v[x+2] c) v[x+3] d) v[y*1]
e) v[x*3] f) v[x*2] g) v[x*5] h) v[v[x+y]]
i) v[x+y] j) v[8 - V[2]] k) v[v[4]] l) v[v[v[7]]]
m) v[v[1]*v[4]] n) v[x+4]*/

#include <stdio.h>

int main(void) {
  int vetorV[10];
  int x = 2;
  int y = 4;

  //Definindo vetorV:
  vetorV[0] = 2;
  vetorV[1] = 6;
  vetorV[2] = 8;
  vetorV[3] = 3;
  vetorV[4] = 10;
  vetorV[5] = 9;
  vetorV[6] = 1;
  vetorV[7] = 21;
  vetorV[8] = 33;
  vetorV[9] = 14;

  //a)
  if( x+1 <= 9 && x+1 >= 0){
    printf("a) %d\n",vetorV[x+1]);    
  } else {
    printf("a) Erro!\n");
  }
  printf("\n");
  //b)
  if( x+2 <= 9 && x+2 >= 0){
    printf("b) %d\n",vetorV[x+2]);    
  } else {
    printf("b) Erro!\n");
  }
  printf("\n");
  //c)
  if( x+3 <= 9 && x+3 >= 0){
    printf("c) %d\n",vetorV[x+3]);    
  } else {
    printf("c) Erro!\n");
  }
  printf("\n");
  //d)
  if( y*1 <= 9 && y*1 >= 0){
    printf("d) %d\n",vetorV[y*1]);    
  } else {
    printf("d) Erro!\n");
  }
  printf("\n");
  //e)
  if( x*3 <= 9 && x*3 >= 0){
    printf("e) %d\n",vetorV[x*3]);    
  } else {
    printf("e) Erro!\n");
  }
  printf("\n");
  //f)
  if( x*2 <= 9 && x*2 >= 0){
    printf("f) %d\n",vetorV[x*2]);    
  } else {
    printf("f) Erro!\n");
  }
  printf("\n");
  //g)
  if( x*5 <= 9 && x*5 >= 0){
    printf("g) %d\n",vetorV[x*5]);    
  } else {
    printf("g) Erro!\n");
  }
  printf("\n");
  //h)
  if( vetorV[x+y] <= 9 && vetorV[x+y] >= 0){
    printf("h) %d\n",vetorV[vetorV[x+y]]);    
  } else {
    printf("h) Erro!\n");
  }
  printf("\n");
  //i)
  if( x+y <= 9 && x+y >= 0){
    printf("i) %d\n",vetorV[x+y]);    
  } else {
    printf("i) Erro!\n");
  }
  printf("\n");
  //j)
  if( 8 - vetorV[2] <= 9 && 8 - vetorV[2] >= 0){
    printf("j) %d\n",vetorV[8-vetorV[2]]);    
  } else {
    printf("j) Erro!\n");
  }
  printf("\n");
  //k)
  if( vetorV[vetorV[4]] <= 9 && vetorV[vetorV[4]] >= 0){
    printf("k) %d\n",vetorV[vetorV[4]]);    
  } else {
    printf("k) Erro!\n");
  }
  printf("\n");
  //l)
  if(vetorV[vetorV[vetorV[7]]]  <= 9 && vetorV[vetorV[vetorV[7]]] >= 0 && vetorV[vetorV[7]] <= 9 && vetorV[vetorV[7]] >= 0){
    printf("l) %d\n",vetorV[vetorV[vetorV[7]]]);    
  } else {
    printf("l) Erro!\n");
  }
  

  
  return 0;
}