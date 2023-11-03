#include <stdio.h>

void main () {
    const int SENHA = 123456;
    int i = 0, senha_digitada;

    printf("Bem vindo ao Harpia Banks.\n\n");
    while (i < 3){
        printf("Insira sua senha de 6 digitos: ");
        scanf("%d", &senha_digitada);

        if (senha_digitada == SENHA){
            printf("Acesso liberado!\n");
            break;
        } else {
            printf("Senha errada. tente novamente!\n\n");
            i++;
        }
    }
    if(i >= 3) {
        printf("Usuario bloqueado! Consulte a sua agência.\n\n");
    }

}