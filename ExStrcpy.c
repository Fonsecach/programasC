#include <stdio.h>
#include <string.h>

/*Escreva um programa que compare duas strings. Se diferentes, copiar a segunda para a primeira string e comparar novamente.*/

int main() {
  char str1[55], str2[55];

  printf("Insira uma palavra: ");
  scanf("%s", str1);

  printf("Insira uma palavra: ");
  scanf("%s", str2);

  if (strcmp(str1, str2) != 0){
    printf("As strings são diferentes!\n");
    strcpy(str1, str2);
    printf("Utilizando o Strcpy, para a segunda opção")
  } else {
    printf("As strings são iguais\n");
  }

  if (strcmp(str1, str2) == 0){
    printf("As strings são iguais\n");
  }  
  return 0;
}
