#include <stdio.h>
#include <stdlib.h>

int main() {
  int n1, n2, n3;
  float media;

  printf("Digite um número: ");
  scanf("%d", &n1);

  printf("Digite um número: ");
  scanf("%d", &n2);

  printf("Digite um número: ");
  scanf("%d", &n3);

  media = (n1 + n2 + n3) / 3;

  printf("A média dos 3 números é %.2f", media);

  return 0;
}