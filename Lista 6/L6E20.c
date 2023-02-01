/* Escreva um programa para ler duas matrizes 2 x 2 com valores reais. O usuário tem disponível um menu
com as opções: (a) somar as duas matrizes; (b) subtrair a primeira matriz da segunda; (c) adicionar uma
constante as duas matrizes; (d) imprimir as matrizes. Para as duas primeiras opções, uma terceira matriz 3
x 3 deve ser criada. Para a terceira opção, um valor deve ser lido, o qual deve ser adicionado aos
elementos da matriz e os resultados devem ser armazenados na própria matriz. */

#include <stdio.h>

int main(void) {
  float matriz[2][2], matriz1[2][2], soma[2][2], diferença[2][2], constante[2][2], c;
 for(int i; i<2; i++){
   for(int j=0;j<2; i++){
     printf("\ndigite o elemento na linha %d e coluna %d da primeira matriz\n", i, j);
     scanf("%f", &matriz[i][j]);
   }
 }
   for(int i; i<2; i++){
   for(int j=0;j<2; i++){
     printf("\ndigite o elemento na linha %d e coluna %d da segunda matriz\n", i, j);
     scanf("%f", &matriz1[i][j]);
   }
 }
   for(int i; i<2; i++){printf("\n");
   for(int j=0;j<2; i++){
     printf("\n  %.1f  \n", matriz[i][j]);
   }
 }
   for(int i; i<2; i++){printf("\n");
   for(int j=0;j<2; i++){
     printf("\n  %.1f  \n", matriz[i][j]);
   }
 }
  for(int i; i<2; i++){printf("\n");
   for(int j=0;j<2; i++){
     printf("\n  %.1f  \n", matriz1[i][j]);
   }
 }
  for(int i; i<2; i++){printf("\n");
   for(int j=0;j<2; i++){
     soma[i][j]=matriz[i][j]+matriz1[i][j];
     printf("\n  %.1f  \n", soma[i][j]);
   }
for(int i; i<2; i++){printf("\n");
   for(int j=0;j<2; i++){
     diferença[i][j]=matriz[i][j]-matriz1[i][j];
     printf("\n  %.1f  \n", diferença[i][j]);
   }
 }
printf("\nDigite o valor da constante que você que adicionar\n");
scanf("%f", &c);
for(int i; i<2; i++){printf("\n");
   for(int j=0;j<2; i++){
     constante[i][j]=matriz[i][j]+c;
     printf("\n  %.1f  \n", constante[i][j]);
   }
 }
  return 0;
}