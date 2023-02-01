//Código da jujuba 'bire jean is not my exercício 2'

#include <stdio.h>
#include <string.h>
//verificar a validade de um CPF 
int main(void) {
  int CPF[11], flag=0, soma=0, soma1=0, resto1, resto;
  char CharPF[12], c;
  printf("\nDigite um CPF sem pontos e traços\n");
  // scanf("%s", CharPF);
  gets(CharPF);
  for(int i=0; i<11; i++){
    c=CharPF[i];
    CPF[i] = c - '0';//converxão-converte elemento a elemento para num(int)-X(variavel inteira)=atoi(s)-tem que ter \0
    printf("%d", CPF[i]);
  }
  for(int i=0; i<10; i++){
    if(CPF[i] != CPF[i+1]){//flag
      flag=1;
    }
  }
  if(flag==1){//O CPF é válido pela regra 1 (por enquanto-não há nada que não possa piorar)
    for(int i=0; i<9; i++){
      soma+=CPF[i]*(10-i);
    } 
    resto=(soma*10)%11;
    if(resto==10){
      resto=0;
    }
    if(resto!=CPF[9]){
      printf("CPF inválido");
      return 0;
    }//pode usar a mesma é só zerar
    for(int i=0; i<10; i++){
      soma1+=CPF[i]*(11-i);
    }
    resto1=(soma1*10)%11;
   if(resto1==10){
      resto1=0;
    }
    if(resto1!=CPF[10]){
      printf("CPF inválido");
      return 0;
    } 
  printf("\nCPF válido\n");}else{
  printf("\nCPF inválido\n");
  }
  return 0;
}