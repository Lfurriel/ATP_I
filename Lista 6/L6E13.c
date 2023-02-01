/*Construa um programa para ler dados e armazenar em duas matrizes inteiras, nomeadas como A e B. As
dimensões das matrizes são 3x3. Armazenar em uma matriz R o resultado da multiplicação de A por B.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int linhaA, colunaA;
  int linhaB, colunaB;
  int aux = 0;
  
  srand(time(NULL));
do{
  do{
    printf("Digite o número de linhas e colunas da matriz A:\n");
  scanf("%d %d", &linhaA, &colunaA);
    if(linhaA < 1 || colunaA < 1){
      printf("Entrada inválida!\n");
    }
  }while(linhaA < 1 || colunaA < 1);
  

  do{
    printf("Digite o número de linhas e colunas da matriz B:\n");
  scanf("%d %d", &linhaB, &colunaB);
    if(linhaB < 1 || colunaB < 1){
      printf("Entrada inválida!\n");
    }
  }while(linhaB < 1 || colunaB < 1);
  if(colunaA != linhaB){
    printf("Não é possível fazer multiplicação das matrizes, linha diferente de coluna\n");
  }
}while(colunaA != linhaB);
  
  int matrizA[linhaA][colunaA];
  int matrizB[linhaB][colunaB];
  
  int matrizResultado[linhaA][colunaB];

  //valores matriz A
  printf("\nMatriz A:");
  for(int i = 0; i < linhaA; i++){
    printf("\n");
    for(int j = 0; j < colunaA; j++){
      matrizA[i][j] = rand() % 10;
      printf("%d\t",matrizA[i][j]);
    }
  }

  printf("\n\n");

  //valores matriz B
  printf("\nMatriz B:");
  for(int i = 0; i < linhaB; i++){
    printf("\n");
    for(int j = 0; j < colunaB; j++){
      matrizB[i][j] = rand() % 10;
      printf("%d\t",matrizB[i][j]);
    }
  }
  
  //calcular multiplicação de matriz
  for(int i = 0; i < linhaA; i++) {
		for(int j = 0; j < colunaB; j++) {
      
			for(int x = 0; x < linhaB; x++) {
				aux +=  matrizA[i][x] * matrizB[x][j];
			}

			matrizResultado[i][j] = aux;
			aux = 0;
		}
	}
  
  printf("\n");
  
  //valores matriz resultado
  printf("\nMatriz Resultado:");
  for(int i = 0; i < linhaA; i++){
    printf("\n");
    for(int j = 0; j < colunaB; j++){
      printf("%d\t",matrizResultado[i][j]);
    }
  }
  
  
  return 0;
}