#include <stdio.h>

void main () {
  int num, i;

  printf("Insira um número inteiro: ");
  scanf("%d", &num);

  for (i = 1; i <= 10; i++)  {
    printf("%d x %d = %d\n", i, num, i * num);
  }
  
}