#include <stdio.h>

void main (){
    float n1,n2,n3,n4,n5, maior, menor, media, quantidade = 0, negativo;

    printf("Descubra o maior, menor, a média, se existem numeros negativos e a quantidade;\n");

    printf("Insira um número: ");
    scanf("%f",&n1);

    printf("Insira um número: ");
    scanf("%f",&n2);

    printf("Insira um número: ");
    scanf("%f",&n3);

    printf("Insira um número: ");
    scanf("%f",&n4);

    printf("Insira um número: ");
    scanf("%f",&n5);

    if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5){
        maior = n1;
    } else if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5) {
        maior = n2;
    } else if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5) {
        maior = n3;
    } else if (n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5) {
        maior = n4;
    } else {
        maior = n5;
    }

    if (n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5){
        menor = n1;
    } else if (n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5) {
        menor = n2;
    } else if (n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5) {
        menor = n3;
    } else if (n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5) {
        menor = n4;
    } else {
        menor = n5;
    }
    
    media = (n1 + n2 + n3 + n4 + n5) / 5;

    if (n1 < 0) {
        quantidade++;
    }
    if (n2 < 0) {
        quantidade = quantidade + 1;
    }
    if (n3 < 0) {
        quantidade = quantidade + 1;
    }
    if (n4 < 0) {
        quantidade = quantidade + 1;
    }
    if (n5 < 0) {
        quantidade = quantidade + 1;
    }

        printf("Maior: %.1f\n", maior);
        printf("Menor: %.1f\n", menor);
        printf("Média: %.1f\n", media);
        if ( n1 < 0 || n2 < 0 || n3 < 0 || n4 < 0 || n5 < 0) printf("Quantidade de números negativos: %.1f", quantidade);
}