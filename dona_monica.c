#include <stdio.h>

void main () {
  int idadeFilho1, idadeFilho2, idadeFilho3, idadeMae;

  printf("Descubra a idade do filho mais velho da dona Mônica.\n");

  printf("Digite a idade do filho caçula: ");
  scanf("%d", &idadeFilho1);

  printf("Digite a idade do filho do meio: ");
  scanf("%d", &idadeFilho2);

  printf("Digite a idade da dona Mônica: ");
  scanf("%d", &idadeMae);

  idadeFilho3 = idadeMae - (idadeFilho1 + idadeFilho2);
  // também é possivel fazer com idadeFilho = idadeMae - idadeFilho1 - idadeFilho2;
  printf("A idade do filho mais velho é de %d\n", idadeFilho3);

}