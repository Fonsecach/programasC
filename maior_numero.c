#include <stdio.h>

void main () {
  int number1, number2, number3, maior;

  printf("Insira primeiro número: ");
  scanf("%d", &number1);

  printf("Insira segundo número: ");
  scanf("%d", &number2);

  printf("Insira terceiro número: ");
  scanf("%d", &number3);

  if (number1 == number2 || number1 == number3 || number2 == number3) {
    printf("Existem 2 números ou mais iguais, não é possivel informar qual é o maior número dos 3.\n");
  } else {
    if(number1 > number2 && number2 > number3){
      maior = number1;
    } else if (number1 < number2 && number2 > number3){
      maior = number2;
    } else{
      maior = number3;
    }
    printf("O maior numero digitado é %d.", maior);
  }
}