#include <stdio.h>

int main(void) {
  char senhaForte[25];
  int countChar; //Contagem de caractre especial

  do{
    printf("\n\nDigite sua senha forte (pelo menos um caractere especial ($, ?, #):\n");
    scanf(" %[^\n]s", senhaForte);
    countChar=0;
    for(int i = 0; i < 25; i++){
      if(senhaForte[i] == '#' || senhaForte[i] == '$' || senhaForte[i] == '?'){ //Validação do caractere especial
        countChar++;
        break;
      }
    }
    if(countChar == 0){
      printf("A senha precisa conter pelo menos um caractere especial\n");
    }
  } while(countChar == 0);

  printf("Sua senha é forte!\n");
  return 0;
}