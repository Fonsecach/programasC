#include <stdio.h>
#include <stdlib.h>

void main () {
  int num;

  printf("Digite um número: ");
  scanf("%d", &num);

  if (num < 0 || num > 10) {
    printf("10");
  } else if (num < 10 && num > 0){
    printf("15");
  } else {
    printf("20");
  }
}