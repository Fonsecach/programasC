#include <stdio.h>

int main(){

  float produto, lucro;
  
  produto = 1500;  
  lucro = produto - produto * 0.2;
  lucro = lucro - lucro * 0.06;
  lucro = lucro - lucro * 0.5;

  printf("O lucro obtido foi de R$ %.2f", lucro);
  printf("\n");

  return 0;
}