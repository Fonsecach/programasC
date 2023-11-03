#include <stdio.h>

void main () {
  float velocidade;

  printf("Radar de trânsito. \n");
  printf("Insira a velocidade: ");
  scanf("%f", &velocidade);

  if (velocidade <= 60)
  {
    printf("A velocidade informada é %.1f km/h, dentro do limite de velocidade.\n", velocidade);
  } else if (velocidade > 60 && velocidade < 66)
  {
    printf("A velocidade informada é %.1f km/h, sanção de advertencia, uma vez que esta acima do limite permitido.\n", velocidade);
  } else if (velocidade >= 66 && velocidade < 80) 
  {
    printf("A  velocidade informada é %.1f km/h, sanção de multa leve, uma vez que esta acima do limite permitido.\n", velocidade);
  } else if (velocidade >= 80) {
    printf("A  velocidade informada é %.1f km/h, sanção de multa grave, uma vez que esta acima do limite permitido.\n", velocidade);
  }
}