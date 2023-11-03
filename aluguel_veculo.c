#include <stdio.h>

void main () {
  const float valor_diaria = 70.00, valor_km = 0.15;
  float dias_alugados, km_percorrido, valor_total;

  printf("Calcule o valor devido pelo aluguel do veículo. \n");

  printf("Insira o km rodado: ");
  scanf("%f", &km_percorrido);

  printf("Insira a quantidade de diarias: ");
  scanf("%f",&dias_alugados);

  valor_total = dias_alugados * valor_diaria + km_percorrido * valor_km;

  printf("O valor total foi de R$ %.2f", valor_total);

}