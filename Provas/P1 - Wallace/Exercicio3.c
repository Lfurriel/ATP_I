#include <stdio.h>
#include <string.h>

int main(void) {
  char nome[80], nomeFormatado[80];
  int count = 3, tamanho;
  
  printf("Digite o nome completo da pessoa:\n");
  gets(nome);

  nomeFormatado[0] = nome[0];
  nomeFormatado[1] = '.';
  nomeFormatado[2] = ' ';

  tamanho = strlen(nome);
  

  for(int i = 0; i < tamanho; i++){
    if(nome[i] == ' '){
      nomeFormatado[count] = nome[i+1];
      count++;
      nomeFormatado[count]='.';
      count++;
      nomeFormatado[count] = ' ';
      count++;
    }
  }

  puts(nomeFormatado);
  return 0;
}