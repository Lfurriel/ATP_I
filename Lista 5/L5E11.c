/*Escreva um programa para ler um vetor com 500 posições e, em seguida, permitir que o usuário escolha algumas operações:
1. Apresentar elementos em ordem crescente
2. Apresentar elementos em ordem decrescente
3. Imprimir todo o vetor
4. Imprimir as posições de um intervalo especificado pelo usuário
Digite <s> ou <S> para encerrar*/

//TODO não consegui fazer encerramento com o caracter

#include <stdio.h>
#include <string.h>

#define n 500

int main(void) {
  
  char opcao;
  char caracter;
  int vetor[n];
  int aux = 0;
  int inicio = 0, fim = n;
  int erro;
  
  for(int i = 0; i < n; i++){
    vetor[i] = rand() % n;
  }

  do {
    do{
      printf("\n1. Apresentar elementos em ordem crescente\n2. Apresentar elementos em ordem decrescente\n3. Imprimir todo o vetor\n4. Imprimir as posições de um intervalo especificado\n5. Digite <s> ou <S> para encerrar\n");
    scanf("%c", &opcao);
      if(opcao > 52|| opcao < 49 || opcao!= 's' || opcao!= 'S'){
        printf("Entrada inválida!");
      }
      
    } while (opcao > 5 || opcao < 1);
    
    if (opcao != 5){

      if(opcao == 1){ // For vetor crescente
        printf("\nVetor Crescente:\n");
        for(int i = 0; i < n; i++){
          for(int j = i+1; j < n; j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
              }
            }
            printf("Vetor [%d]: %d\n", i, vetor[i]);
          }
        
        } else if(opcao == 2){ // For vetor decrescente
        printf("\nVetor Decrescente:\n");
        for(int i = 0; i < n; i++){
          for(int j = i+1; j < n; j++){
            if(vetor[i] < vetor[j]){
              aux = vetor[i];
              vetor[i] = vetor[j];
              vetor[j] = aux;
            }
          }
          printf("Vetor [%d]: %d\n", i, vetor[i]);
        }
        
      } else if(opcao == 3){ //Imprime vetor
        printf("\nVetor:\n");
        for(int a = 0; a < n; a++){
        printf("Vetor [%d]: %d\n", a, vetor[a]);
        }
        
      } else if (opcao == 4){ //Imprime vetor range
        do{
          erro = 0;
          printf("Digite o range do vetor <inicio> <fim>:\n");
          scanf("%d %d", &inicio, &fim);
          if(fim > n-1){
            erro = 1;
            printf("Fim maior que limite do vetor\n");
          }
          if(inicio < 0){
            erro = 1;
            printf("Inicio menor que o8  vetor\n");
          }
          if(fim < inicio){
            erro = 1;
            printf("Fim < Inicio\n");
          }
          if(erro == 1){
            printf("Digite uma entrada válida\n");
          }
        }while(erro == 1);
        
        printf("\nVetor range [%d - %d]:\n", inicio , fim);
        for(inicio; inicio <= fim; inicio++){
        printf("Vetor [%d]: %d\n", inicio, vetor[inicio]);
        }
      }
    }
  } while(opcao != 5);
  printf("FIM");
  return 0;
}