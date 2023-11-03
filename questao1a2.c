#include <stdio.h>
#include <stdlib.h>

void main () {
  int num, cont, soma = 1;

  printf("maior que zero: ");
  scanf("%d", &num);

  if(num <= 0) printf("Nulo");
  else {
    for(cont = 2; cont < num; cont++) {
      soma = 2*cont;
    }
    printf("%d", soma);
  }
}