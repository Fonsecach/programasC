#include <stdio.h>
#include <string.h>

int main (){

    const float hamb = 15, xbur = 20, mons = 30, bata = 5, mand = 6, sala = 4, refr = 5, agua = 6, cerv = 10;
    float valor_principal, valor_acompanhamento, valor_bebida, valor_final;
    int opcao_principal, opcao_acompanhamento, opcao_bebida;
    char nome[30], nome_acom[30], nome_bebida[30];

    printf("-= Bem vindo a Lanchonete do Luís =-\n\n");

    printf("Escolha o lanche principal: \n");
    printf("[1] Hamburguer.\n");
    printf("[2] X-burguer\n");
    printf("[3] Monstro.\n");
    scanf("%d", &opcao_principal);


    if (opcao_principal == 1){
        valor_principal = hamb;
        strcpy(nome, "hamburguer");
    } else if (opcao_principal == 2) {
        valor_principal = xbur;
        strcpy(nome, "x-burguer");
    } else if (opcao_principal == 3) {
        valor_principal = mons;
        strcpy(nome, "monstro");
    } else {
        printf("\nOpção invalida.\n");
        valor_principal = 0;
        strcpy(nome, "NULO");
    }

    printf("Escolha o acompanhamento: \n");
    printf("[1] Batata.\n");
    printf("[2] Mandioca.\n");
    printf("[3] Salada.\n");
    scanf("%d", &opcao_acompanhamento);


    if (opcao_acompanhamento == 1){
        valor_acompanhamento = bata;
        strcpy(nome_acom, "batata");
    } else if (opcao_acompanhamento == 2) {
        valor_acompanhamento = mand;
        strcpy(nome_acom, "mandioca");
    } else if (opcao_acompanhamento == 3) {
        valor_acompanhamento = sala;
        strcpy(nome_acom, "salada");
    } else {
        printf("\nOpção invalida.\n");
        valor_acompanhamento = 0;
        strcpy(nome_acom, "NULO");   
    }

    printf("Escolha a bebida \n");
    printf("[1] Refrigerante.\n");
    printf("[2] Água.\n");
    printf("[3] Cerveja.\n");
    scanf("%d", &opcao_bebida);


    if (opcao_bebida == 1){
        valor_bebida = refr;
        strcpy(nome_bebida, "refrigerante");
    } else if (opcao_bebida == 2) {
        valor_bebida = agua;
        strcpy(nome_bebida, "água");
    } else if (opcao_bebida == 3) {
        valor_bebida = cerv;
        strcpy(nome_bebida, "cerveja");
    } else {
        printf("\nOpção invalida.\n");
        valor_bebida = 0;
        strcpy(nome_bebida, "NULO");
    }

    valor_final = valor_principal + valor_acompanhamento + valor_bebida;

    printf("Você pediu um %s, com %s e uma %s. Total de R$ %.2f", nome, nome_acom, nome_bebida, valor_final);

    return 0;
}