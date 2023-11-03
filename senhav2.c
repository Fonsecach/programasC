#include <stdio.h>

void main () {
    const int SENHA = 3456;
    int i = 0, senha_digitada;

    printf("Bem vindo ao Harpia Banks.\n\n");
    
    for (i = 1; i < 4; i++){
      printf("\nInsira o PIN: ");
      scanf("%d", &senha_digitada);

      if (senha_digitada == SENHA){
            printf("Acesso liberado!\n");
            break;
        } else if (senha_digitada < 0 || senha_digitada > 9999){
            printf("Senha fora do Range!\n");
        } else if (senha_digitada != SENHA){
          if (i == 3){
            printf("Usuario bloqueado! Consulte a sua agência.\n\n");
            break;
          } else {
            printf("Tente novamente.");
          }
        } 
    }
}