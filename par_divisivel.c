#include <stdio.h>

void main(){
  int number;

  printf("Insira um número:" );
  scanf("%d", &number);

  if (number % 2 == 0) {
    if (number % 5 == 0)
    {
      printf("O número %d é par e divisivel por 5.", number);
    } else {
      printf("O número %d é par e não é divisivel por 5.", number);
    }
  } else 
  {
  if (number % 3 == 0)
  {
    printf("O numero %d é impar e divisivel por 3", number);
  } else {
    printf("O numero %d é impar, mas não é divisivel por 3.", number);
  }
  }
}