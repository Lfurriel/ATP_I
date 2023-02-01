#include <stdio.h>

int main(void) {
  float A[2][2], det;
  int i, j;

  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      printf("A[%d][%d]", i, j);
      scanf("%f", &A[i][j]);
    }
  }

  det = A[0][0] * A[1][1] - (A[0][1] * A[1][0]);

  printf("\nImprimindo a matriz\n");
  for(i = 0; i < 2; i++){
    printf("\n");
    for(j = 0; j < 2; j++){
      printf("%.2f\t", A[i][j]);
    }
  }
  printf("\nDeterminante: %.2f\n", det);
  return 0;
}