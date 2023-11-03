#include <stdio.h>

int main() {
  int nascimento, idade;
  
  printf("Escreva o ano que você nasceu: ");
  scanf("%d", &nascimento);

  idade = 2050 - nascimento;

  printf("Em 2050 você terá %d anos.", idade);

  return 0;
}