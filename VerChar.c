#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char palavra[20];
  int cont, total = 0;

  printf("Escreva uma palavra\n");
  scanf("%s", &palavra);

  for (int cont = 0; cont < strlen(palavra); cont++){
    if(palavra[cont] == 'a' || palavra[cont] == 'e') total = total +3;
  }
  
  printf("%d", total);
  return 0;
}