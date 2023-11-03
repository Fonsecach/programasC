#include <stdio.h>
#include <string.h>

int main() {
  char str1[100];
  char condicao = 'a';
  int  i;

  printf("Insira uma frase: ");
  scanf("%[^\n]s", str1);
  
  for (i = 0; i < strlen(str1); i++){
    if (str1[i] == condicao){
        str1[i] = 'e';
      }
  }

  printf("%s", str1);

  return 0;
}
