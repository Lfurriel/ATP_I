/*Exercício para passar uma frase pela criptografia de Júlio César*/

#include <stdio.h>
#include <string.h>

char alfabeto[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 
'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

char codificar(char original, int n, int a, int b) {
  char codificada;
  int i;
  i = ((n * a + b) % 26);
  codificada = alfabeto[i];
  //printf("(%d)", i); //Usado pra saber qual a posição da letra criptografada
  return codificada;
}

int inversaD(int a, int b) {
  int d;
  float teste;

  for (d = 0; d < d + 1; d++) {
    teste = (d * a + b) % 26;
    if (teste == 0) {
      break;
    }
  }
  return d;
}

int inversaC(int a, int b, int d) {
  int c;
  float teste;

  for (c = 0; c < c + 1; c++) {
    teste = (b * c + d) % 26;
    if (teste == 0) {
      break;
    }
  }
  return c;
}

int main(void) {
  char mensagem[80];
  char caracter;
  int a, b, indice;
  int c, d;
  printf("Sendo a f(n) = an + b, digite os valores de 'a' e 'b': ");
  scanf("%d %d", &a, &b);
  printf("\n\nf(n) = (%dn + %d)(mod26)", a, b);
  printf("\n\n(digite PARA, para encerrar o programa)");
  do {
    printf("\nDigite a frase sem espaços: ");
    scanf(" %[^\n]s", mensagem);
    if (strcmp(mensagem, "PARA")) {
      printf("\nMensagem encriptada: ");
      for (int i = 0; i < strlen(mensagem); i++) {
        caracter = mensagem[i];
        if (mensagem[i] == ' ') {
          printf(" ");
        } else {
          for (int j = 0; j < 26; j++) {
            if (caracter == alfabeto[j]) {
              indice = j;
            }
          }
          printf("%c", codificar(caracter, indice, a, b));
        }
      }
    }

  } while (strcmp(mensagem, "PARA"));

  printf("\n\nFunção inversa:\n");
  d = inversaD(a, b);
  printf("f(n)^-1 = %dn + %d", inversaC(a, b, d), d);

  return 0;
}