#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;
    srand(time(NULL));

    while (1) {
        printf("Escolha uma opção:\n");
        printf("0 - Sair do jogo\n");
        printf("1 - Pedra\n");
        printf("2 - Papel\n");
        printf("3 - Tesoura\n");
        scanf("%d", &jogador);

        if (jogador == 0) {
            printf("Você escolheu sair do jogo. Obrigado por jogar!\n");
            break;
        }

        if (jogador < 1 || jogador > 3) {
            printf("Escolha inválida. Por favor, escolha entre 1 e 3 ou 0 para sair.\n");
            continue;
        }

        computador = rand() % 3 + 1; // Gera um número aleatório de 1 a 3 para o computador.

        printf("O computador escolheu: ");
        switch (computador) {
            case 1:
                printf("Pedra\n");
                break;
            case 2:
                printf("Papel\n");
                break;
            case 3:
                printf("Tesoura\n");
                break;
        }

        printf("Você escolheu: ");
        switch (jogador) {
            case 1:
                printf("Pedra\n");
                break;
            case 2:
                printf("Papel\n");
                break;
            case 3:
                printf("Tesoura\n");
                break;
        }

        if (jogador == computador) {
            printf("Empate!\n");
        } else if ((jogador == 1 && computador == 3) ||
                   (jogador == 2 && computador == 1) ||
                   (jogador == 3 && computador == 2)) {
            printf("Você venceu!\n");
        } else {
            printf("O computador venceu!\n");
        }
    }

    return 0;
}
