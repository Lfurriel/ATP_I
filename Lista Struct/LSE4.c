/*Considerando a struct do Algoritmo 2 para representar um número complexo, implemente um programa que calcule:

(a) a soma entre dois números complexos;
(b) o produto entre eles;
(c) o módulo de um número complexo;
(d) o conjugado de um número complexo;
(e) o ângulo (argumento) de um número complexo.

-----------------------------------------------------------------------
Algorithm 2: Definição da struct número complexo.
-----------------------------------------------------------------------
1 //Definição da struct numero ’complexo’
2 typedef struct complexo
3 {
4 float re;
5 float im;
6 } complexo; 
-----------------------------------------------------------------------*/

#include <stdio.h>
#include <math.h>

int main(void) {
  struct complexo{
  float real;
  float imaginario;
  } complexo[2];

  float somaReal, somaImaginario; // (a)
  float produtoReal, produtoImaginario; // (b)
  float modA, modB; // (c)
  float conjugadoA, conjugadoB; // (d)
  float cosA, senA, cosB, senB, grauA, grauB; // (e)
  

  for(int i = 0; i<2; i++){
    printf("Digite um número real: ");
    scanf("%f", &complexo[i].real);
    printf("Digite um número imaginário: ");
    scanf("%f", &complexo[i].imaginario);
    printf("\n\n");
  }

  // (a) soma
  somaReal = complexo[0].real + complexo[1].real;
  somaImaginario = complexo[0].imaginario + complexo[1].imaginario;
  printf("Soma dos números complexos: %.2f + %.2fi\n\n", somaReal, somaImaginario);

  // (b) produto
  produtoReal = (complexo[0].real*complexo[1].real) - (complexo[0].imaginario*complexo[1].imaginario);
  produtoImaginario = (complexo[0].real*complexo[1].imaginario) + (complexo[0].imaginario*complexo[1].real);
  printf("Produto dos números complexos: %.2f + %.2fi\n\n", produtoReal, produtoImaginario);

  // (c) módulo
  modA = sqrt(pow(complexo[0].real,2) + pow(complexo[0].imaginario,2));
  modB = sqrt(pow(complexo[1].real,2) + pow(complexo[1].imaginario,2));
   printf("Módulo de %.2f + %.2fi: %.2f\n", complexo[0].real, complexo[0].imaginario, modA);
  printf("Módulo de %.2f + %.2fi: %.2f\n\n", complexo[1].real, complexo[1].imaginario, modB);

  // (d) conjugado
  if(complexo[0].imaginario > 0){
    printf("Conjugado de %.2f - %.2fi\n", complexo[0].real, complexo[0].imaginario);
  } else {
    conjugadoA = fabs(complexo[0].imaginario);
     printf("Conjugado de %.2f - %.2fi\n", complexo[0].real, conjugadoA);
  }
    if(complexo[1].imaginario > 0){
    printf("Conjugado de %.2f - %.2fi\n\n", complexo[1].real, complexo[1].imaginario);
  } else {
    conjugadoB = fabs(complexo[1].imaginario);
    printf("Conjugado de %.2f + %.2fi\n\n", complexo[1].real, conjugadoB);
  }

  // (e) argumento
  cosA = (complexo[0].real/modA);
  senA = (complexo[0].imaginario/modA);
  //grauA = sinf(senA);
  cosB = (complexo[1].real/modB);
  senB = (complexo[1].imaginario/modB);
  //grauB = sinf(senB);
  
  printf("Cosseno de  %.2f + %.2fi: %.2f\n", complexo[0].real, complexo[0].imaginario, cosA);
  printf("Seno de %.2f + %.2fi: %.2f\n", complexo[0].real, complexo[0].imaginario, senA);
  //printf("Ângulo de %.2f + %.2fi: %.2f\n", complexo[0].real, complexo[0].imaginario, grauA);
  printf("Cosseno de  %.2f + %.2fi: %.2f\n", complexo[1].real, complexo[1].imaginario, cosB);
  printf("Seno de %.2f + %.2fi: %.2f\n", complexo[1].real, complexo[1].imaginario, senB);
  //printf("Ângulo de %.2f + %.2fi: %.2f\n", complexo[1].real, complexo[1].imaginario, grauB);
  
  
  
  
  
  return 0;
}