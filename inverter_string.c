#include <stdio.h>
#include <string.h>

int main() {
  char str1[50];
  char str2[50];
  int tamanho, i;

  printf("Insira uma palavra: ");
  scanf("%s", str1);

  tamanho = strlen(str1);

  for (i = 0; i < tamanho; i++) {
    str2[i] = str1[tamanho - 1 - i];
  }
  str2[tamanho] = '\0';  // Adicione o caractere nulo para encerrar a string.

  printf("Palavra invertida: %s\n", str2);

  return 0;
}
