#include <stdio.h>

void main () {
  int opcao = 0;
  printf("Insira a colocação na corrida: \n");
  printf("\t1 - Campeão.\n");
  printf("\t2 - Vice.\n");
  printf("\t3 - Terceiro.\n");
  printf("\tDemais - fora do pódio.\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Campeão!");
      break;
    case 2:
      printf("Segundo lugar");
      break;
    case 3:
      printf("Terceiro lugar");
      break;
    default:
      printf("Fora do pódio");
  }
}