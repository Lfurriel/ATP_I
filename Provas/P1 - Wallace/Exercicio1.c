#include <stdio.h>

#define funcionarios 100

int main(void) {
  float salario[funcionarios], salarioMaisVelho,
salarioMedio38 = 0, maiorSalario;
  int idade[funcionarios], anosServico[funcionarios], maisVelho;
  int count = 0, count38 = 0;

  printf("Digite a idade do funcionário 1: ");
  scanf("%d", &idade[0]);
  printf("Digite anos de serviço do funcionário 1: ");
  scanf("%d", &anosServico[0]);
  printf("Digite salario do funcionário 1: ");
  scanf("%f", &salario[0]);
  salarioMaisVelho = salario[0];
  maiorSalario = salario[0];
  maisVelho = idade[0];
  if (anosServico[0] > 38) {
    salarioMedio38 += salario[0];
    count38++;
  }
  if (idade[0] > 65 || anosServico[0] > 38) {
    count++;
  }


  for (int i = 1; i < funcionarios; i++) {
    printf("Digite a idade do funcionário %d: ", i+1);
    scanf("%d", &idade[i]);
    printf("Digite anos de serviço do funcionário %d: ", i+1);
    scanf("%d", &anosServico[i]);
    printf("Digite salario do funcionário %d: ", i+1);
    scanf("%f", &salario[i]);
    if (idade[i] > maisVelho) {
      maisVelho=idade[i];
      salarioMaisVelho = salario[i];
    }
    if (idade[i] > 65 || anosServico[i] > 38) {
      count++;
    }
    if (salario[i] > maiorSalario) {
      maiorSalario = salario[i];
    }
    if (anosServico[i] > 38) {
      salarioMedio38 += salario[0];
      count38++;
    }
  }

  salarioMedio38 = salarioMedio38/count38;

  printf("\n\n\n(a) Número de funcionários com mais de 38 anos de serviço ou acima de 65 anos: %d\n", count);
  printf("(b) Maior salário dentre todos funcionários: %.2f\n", maiorSalario);
   printf("(c) Salário do funcionário mais velho: %.2f\n", salarioMaisVelho);
  printf("(d) Salário do funcionário médio dos funcionários com mais de 38 anos de serviço: %.2f\n", salarioMedio38);
  return 0;
}