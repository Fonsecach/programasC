#include <stdio.h>
#include <string.h>

int main() {
    int quantidade = 50;
    char nomes[quantidade][50];
    int idades[quantidade];
    int categorias[quantidade];
    int menor = 250, maior = 0, soma = 0;
    char nome_mais_novo[50], nome_mais_velho[50];

    for (int i = 0; i < quantidade; i++) {
        printf("Informe o nome do nadador %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Informe a idade do nadador %d: ", i + 1);
        scanf("%d", &idades[i]);
        soma += idades[i];

        if (menor > idades[i]) {
            menor = idades[i];
            strcpy(nome_mais_novo, nomes[i]);
        }

        if (maior < idades[i]) {
            maior = idades[i];
            strcpy(nome_mais_velho, nomes[i]);
        }

        if (idades[i] >= 5 && idades[i] < 7){
            categorias[i] = 1;
        } else if (idades[i] >= 8 && idades[i] < 10) {
            categorias[i] = 2;
        } else if (idades[i] >= 11 && idades[i] < 13) {
            categorias[i] = 3;
        } else if (idades[i] >= 14 && idades[i] < 17) {
            categorias[i] = 4;
        } else {
            categorias[i] = 5;
        }
    }

    printf("Dados dos nadadores:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Nome: %s\n", nomes[i]);
        printf("Idade: %d\n", idades[i]);
    }

    printf("A média de idade dos nadadores é %.2f\n", (float)soma / quantidade);
    printf("O nadador mais novo é %s e tem %d anos\n", nome_mais_novo, menor);
    printf("O nadador mais velho é %s e tem %d anos\n", nome_mais_velho, maior);

    return 0;
}
