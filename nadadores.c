#include <stdio.h>
#include <string.h>

struct Nadador {
    char nome[50];
    int idade;
    int categoria;
};

int main() {
    int quantidade = 50, menor = 250, maior = 0, soma = 0;
    char nome_mais_novo[50], nome_mais_velho[50];

    struct Nadador nadador[quantidade];

    for (int i = 0; i < quantidade; i++) {
        printf("Informe o nome do nadador %d: ", i + 1);
        scanf("%s", nadador[i].nome);

        printf("Informe a idade do nadador %d: ", i + 1);
        scanf("%d", &nadador[i].idade);
        soma += nadador[i].idade;

        if (menor > nadador[i].idade) {
            menor = nadador[i].idade;
            strcpy(nome_mais_novo, nadador[i].nome);
        }

        if (maior < nadador[i].idade) {
            maior = nadador[i].idade;
            strcpy(nome_mais_velho, nadador[i].nome);
        }

        if (nadador[i].idade >= 5 && nadador[i].idade < 7){
            nadador[i].categoria = 1;
        } else if (nadador[i].idade >= 8 && nadador[i].idade < 10) {
            nadador[i].categoria = 2;
        } else if (nadador[i].idade >= 11 && nadador[i].idade < 13) {
            nadador[i].categoria = 3;
        } else if (nadador[i].idade >= 14 && nadador[i].idade < 17) {
            nadador[i].categoria = 4;
        } else {
            nadador[i].categoria = 5;
        }
    }

    printf("Dados dos nadadores:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Nome: %s\n", nadador[i].nome);
        printf("Idade: %d\n", nadador[i].idade);
    }
    
    printf("A média de idade dos nadadores é %.2f\n", (float)soma / quantidade);
    printf("O nadador mais novo é %s e tem %d anos\n", nome_mais_novo, menor);
    printf("O nadador mais velho é %s e tem %d anos\n", nome_mais_velho, maior);
    
    return 0;
}
