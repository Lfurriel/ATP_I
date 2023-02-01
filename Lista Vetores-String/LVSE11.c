#include <stdio.h>
#include <string.h>
/*11.Escreva um algoritmo que leia uma string cpf[21] apenas com valores
numéricos de um CPF (ex: 36813486211). Em seguida, formate essa string com
pontos e traço, salvando seu conteúdo em uma nova string cpfformatado[21] (ex:
digitou-se 36813486211, então a formatação final deverá ser: 368.134.862-11).*/

int main(void) {
  char cpf[21], cpfFormatado[21];
  int i = 0;
  printf("Digite seu CPF(sem pontos e sem traço)\n");
  gets(cpf);
  for (i = 0; i < 14; i++) {
    cpfFormatado[i] = cpf[i];
    if (i > 2) {
      if (i == 3) {
        cpfFormatado[i] = '.';
      } else {
        cpfFormatado[i] = cpf[i - 1];
      }
      if (i > 6) {
        if (i == 7) {
          cpfFormatado[i] = '.';
        } else {
          cpfFormatado[i] = cpf[i - 2];
        }
        if (i > 10) {
          if (i == 11) {
            cpfFormatado[i] = '-';
          } else {
            cpfFormatado[i] = cpf [i-3];
          }
        }
      }
    }
  }
  cpfFormatado[i]= '\0';

  printf("\n----->CPF FORMATADO<-----\n");
  printf("%s", cpfFormatado);
  return 0;
}