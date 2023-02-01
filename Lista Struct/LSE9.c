/*Crie um programa que leia um vetor com os dados de 10 carros (uma struct): marca (máximo de 20 caracteres), ano, e preço. No programa principal, leia um valor p e mostre as informações de todos os carros com pre ̧co menor ou igual que p. O programa deve repetir esse processo até que seja digitado o valor p = 0, quando o mesmo deverá ser encerrado.*/

#include <stdio.h>

#define  n 10

int main(void) {
  struct carros {
  char marca[20];
  int ano;
  float preco;
  } carros[n];
  float p;

  for(int i = 0; i < n; i++){
    printf("Digite a marca: ");
    scanf(" %[^\n]s", carros[i].marca);
    printf("Digite o ano do carro: ");
    scanf("%d", &carros[i].ano);
    printf("Digite o preço do carro: ");
    scanf("%f", &carros[i].preco);    
  }

  do{
    printf("\nDigite um valor: ");
    scanf("%f", &p);

    for(int i = 0; i < n; i++){
      if(carros[i].preco < p){
        printf("\n %s (%d): R$%.2f", carros[i].marca, carros[i].ano, carros[i].preco);
      }
    }
  }while(p != 0);
  return 0;
}