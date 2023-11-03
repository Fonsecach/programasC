#include <math.h>
#include <stdio.h>

int main() {
  // Declarando as variáveis
  float a, b, c;

  // Lendo os valores dos catetos
  printf("Digite o valor do primeiro cateto: ");
  scanf("%f", &a);
  printf("Digite o valor do segundo cateto: ");
  scanf("%f", &b);

  // Calculando a hipotenusa usando a fórmula
  c = sqrt(pow(a, 2) + pow(b, 2));

  // Imprimindo o resultado
  printf("O valor da hipotenusa é: %.2f\n", c);

  return 0;
}