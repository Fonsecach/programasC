#include <stdio.h>
#include <string.h>


int main(){
  char nome[5][100];
  char maior_nome[100];
  int maior = 0;


  for ( int count = 0; count < 5; count++){
    printf("Insira um nome %d ", count + 1);
    scanf(" %[^\n]s", &nome[count]);
    printf("%s\n", nome[count]);

    if (strlen(nome[count]) > maior){
      maior = strlen(nome[count]);
      strcpy(maior_nome, nome[count]);
    }
  }
  printf("O maior nome foi %s", maior_nome);

  return 0;
}