/*Escreva um programa para controlar o estoque de uma loja que trabalha com cinco tipos de produtos.
O algoritmo deverá permitir que o usuário escolha uma das seguintes opções:
1. Aumentar estoque
2. Baixar estoque
3. Visualizar estoque de um produto
4. Visualizar estoque total
5. Aumentar preço
6. Diminuir preço
7. Trocar produto
8. Sair*/

#include <stdio.h>

int main(void) {

//Vetor estoque -> estoque; preco; char produto
int estoque1[3], estoque2[3], estoque3[3], estoque4[3], estoque5[3];
int opcao, selecionaEstoque;
int preco, estoque, estoqueTotal;

//Quantidade Estoque  
estoque1[0]=0; estoque2[0]=0; estoque3[0]=0; estoque4[0]=0; estoque5[0]=0;
  
//Preco produto  
estoque1[1]=0; estoque2[1]=0; estoque3[1]=0; estoque4[1]=0; estoque5[1]=0;


  do{
    printf("\n______________________________________");
    printf("\n\t 1. Aumentar estoque");
    printf("\n\t 2. Baixar estoque");
    printf("\n\t 3. Visualizar estoque de um produto");
    printf("\n\t 4. Visualizar estoque total");
    printf("\n\t 5. Aumentar preço");
    printf("\n\t 6. Diminuir preço");
    printf("\n\t 7. Trocar produto");
    printf("\n\t 8. Sair");
    printf("\n______________________________________\n");
    printf("\t\t\t\t Escolha uma opção: \n");
    scanf("%d",&opcao);

      // AUMENTA ESTOQUE
      if(opcao == 1){
        printf("Aumentar valor do estoque\n");
        printf("Selecione o código do produto [1, 2, 3, 4, 5]: \n");
        scanf("%d", &selecionaEstoque);
        printf("Insira quantia adicionada: \n");
        scanf("%d", &estoque);
        
        if(selecionaEstoque == 1){
          
          printf("Estoque atual: %d\n", estoque1[0]);
          estoque1[0] += estoque;
          printf("Estoque novo: %d\n", estoque1[0]);
          
        } else if (selecionaEstoque == 2){

          printf("Estoque atual: %d\n", estoque2[0]);
          estoque2[0] += estoque;
          printf("Estoque novo: %d\n", estoque2[0]);
          
        } else if (selecionaEstoque == 3){

          printf("Estoque atual: %d\n", estoque3[0]);
          estoque3[0] += estoque;
          printf("Estoque novo: %d\n", estoque3[0]);
          
        } else if (selecionaEstoque == 4){

          printf("Estoque atual: %d\n", estoque4[0]);
          estoque4[0] += estoque;
          printf("Estoque novo: %d\n", estoque4[0]);
          
        } else if (selecionaEstoque == 5){

          printf("Estoque atual: %d\n", estoque5[0]);
          estoque5[0] += estoque;
          printf("Estoque novo: %d\n", estoque5[0]);
          
        } else{
          
          printf("Produto não existe\n");
          
        }

      // BAIXA ESTOQUE
      } else if (opcao == 2){

        printf("Baixar valor do estoque\n");
        printf("Selecione o código do produto [1, 2, 3, 4, 5]: \n");
        scanf("%d", &selecionaEstoque);
        printf("Insira quantia retirada: \n");
        scanf("%d", &estoque);
        
        if(selecionaEstoque == 1){
          
          printf("Estoque atual: %d\n", estoque1[0]);
          estoque1[0] -= estoque;
          printf("Estoque novo: %d\n", estoque1[0]);
          
        } else if (selecionaEstoque == 2){

          printf("Estoque atual: %d\n", estoque2[0]);
          estoque2[0] -= estoque;
          printf("Estoque novo: %d\n", estoque2[0]);
          
        } else if (selecionaEstoque == 3){

          printf("Estoque atual: %d\n", estoque3[0]);
          estoque3[0] -= estoque;
          printf("Estoque novo: %d\n", estoque3[0]);
          
        } else if (selecionaEstoque == 4){

          printf("Estoque atual: %d\n", estoque4[0]);
          estoque4[0] -= estoque;
          printf("Estoque novo: %d\n", estoque4[0]);
          
        } else if (selecionaEstoque == 5){

          printf("Estoque atual: %d\n", estoque5[0]);
          estoque5[0] -= estoque;
          printf("Estoque novo: %d\n", estoque5[0]);
          
        } else{
          
          printf("Produto não existe\n");
          
        }
        
      // MOSTRA ESTOQUE PRODUTO
      } else if (opcao == 3){
        printf("Mostra estoque de um produto\n");
        printf("Selecione o código do produto [1, 2, 3, 4, 5]: \n");
        scanf("%d", &selecionaEstoque);
                
        if(selecionaEstoque == 1){
          
          printf("Estoque atual: %d\n", estoque1[0]);
                    
        } else if (selecionaEstoque == 2){

          printf("Estoque atual: %d\n", estoque2[0]);
                    
        } else if (selecionaEstoque == 3){

          printf("Estoque atual: %d\n", estoque3[0]);
                    
        } else if (selecionaEstoque == 4){

          printf("Estoque atual: %d\n", estoque4[0]);
                    
        } else if (selecionaEstoque == 5){

          printf("Estoque atual: %d\n", estoque5[0]);
                    
        } else{
          
          printf("Produto não existe\n");
          
        }

      // MOSTRA ESTOQUE TOTAL DE TODOS PRODUTOS  
      } else if (opcao == 4){
        
        estoqueTotal = estoque1[0] + estoque2[0] + estoque3[0] + estoque4[0] + estoque5 [0];
        printf("Estoque total dos produtos: %d", estoqueTotal);
        
      // AUMENTA VALOR
      } else if (opcao == 5){

        printf("Aumentar preço do produto\n");
        printf("Selecione o código do produto [1, 2, 3, 4, 5]: \n");
        scanf("%d", &selecionaEstoque);
        printf("Insira quanto aumenta (??? sei la fdc): \n");
        scanf("%d", &preco);
        
        if(selecionaEstoque == 1){
          
          printf("Valor atual: %d\n", estoque1[1]);
          estoque1[1] += preco;
          printf("Valor novo: %d\n", estoque1[1]);
          
        } else if (selecionaEstoque == 2){

          printf("Valor atual: %d\n", estoque2[1]);
          estoque2[1] += preco;
          printf("Valor novo: %d\n", estoque2[1]);
          
        } else if (selecionaEstoque == 3){

          printf("Valor atual: %d\n", estoque3[1]);
          estoque3[1] += preco;
          printf("Valor novo: %d\n", estoque3[1]);
          
        } else if (selecionaEstoque == 4){

          printf("Valor atual: %d\n", estoque4[1]);
          estoque4[1] += preco;
          printf("Valor novo: %d\n", estoque4[1]);
          
        } else if (selecionaEstoque == 5){

          printf("Valor atual: %d\n", estoque5[1]);
          estoque5[1] += preco;
          printf("Valor novo: %d\n", estoque5[1]);
          
        } else{
          
          printf("Produto não existe\n");
          
        }

      // DIMINUI VALOR  
      } else if (opcao == 6){
        
        printf("Diminuir preço do produto\n");
        printf("Selecione o código do produto [1, 2, 3, 4, 5]: \n");
        scanf("%d", &selecionaEstoque);
        printf("Insira quanto diminui (??? sei la fdc): \n");
        scanf("%d", &preco);
        
        if(selecionaEstoque == 1){
          
          printf("Valor atual: %d\n", estoque1[1]);
          estoque1[1] -= preco;
          printf("Valor novo: %d\n", estoque1[1]);
          
        } else if (selecionaEstoque == 2){

          printf("Valor atual: %d\n", estoque2[1]);
          estoque2[1] -= preco;
          printf("Valor novo: %d\n", estoque2[1]);
          
        } else if (selecionaEstoque == 3){

          printf("Valor atual: %d\n", estoque3[1]);
          estoque3[1] -= preco;
          printf("Valor novo: %d\n", estoque3[1]);
          
        } else if (selecionaEstoque == 4){

          printf("Valor atual: %d\n", estoque4[1]);
          estoque4[1] -= preco;
          printf("Valor novo: %d\n", estoque4[1]);
          
        } else if (selecionaEstoque == 5){

          printf("Valor atual: %d\n", estoque5[1]);
          estoque5[1] -= preco;
          printf("Valor novo: %d\n", estoque5[1]);
          
        } else{
          
          printf("Produto não existe\n");
          
        }

      // TROCAR PRODUTO
      } else if(opcao == 7){
        printf("Não sei oq faço aqui\n");
        /* só não entendi o que é mudar aqui
        o nome do produto??? sei lá*/
        
      } else if (opcao == 8){
        printf("Sair\n");
        
      } else {
        printf("Insira um número válido [1, 2, 3, 4, 5, 6, 7, 8]\n");
      }
  } while(opcao!=8);

  printf("FIM DO PROCESSO");
  return 0;
}