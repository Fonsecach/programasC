#include <stdio.h>
#include <string.h>

int main() {

  char texto1[55];
  char texto2[55];

  printf("-=- Compare duas Strings -=- \n");

  printf("Digite a primeira string: ");
  scanf("%s", texto1);

  printf("Digite a segunda string: ");
  scanf("%s", texto2);

  int resultado = strcmp(texto1, texto2);

  if (resultado == 0) {
    printf("As strings são iguais. \n");
    printf("A primeira string foi %s e a segunda foi %s \n", texto1, texto2);
    
  } else {
    printf("As strings são diferentes. \n");
    strcat(texto1, " - ");
    strcat(texto1, texto2);
    printf("A string concatenada: %s\n", texto1);
  }
  printf("Programa finalizado!\n");

  return 0;
}