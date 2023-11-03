#include <stdio.h>

void main () {
  float notaA, notaB, notaC, media_ponderada;
  const float peso1 = 2, peso2 = 3, peso3 = 5;

  printf("Programa para calcular a média ponderada.\n");

  printf("Insira um valor: ");
  scanf("%f", &notaA);

  printf("Insira um valor: ");
  scanf("%f", &notaB);

  printf("Insira um valor: ");
  scanf("%f", &notaC);

  media_ponderada = ((notaA * peso1 + notaB * peso2 + notaC * peso3) / ( peso1 + peso2 + peso3));

  printf("A primeira nota foi %.2f\n", notaA);
  printf("A segunda nota foi %.2f\n", notaB);
  printf("A terceira nota foi %.2f\n", notaC);
  printf("A média ponderada: %.2f", media_ponderada);
}