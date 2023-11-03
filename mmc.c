#include <stdio.h>


int main() {
    int num1, num2, num3, mmc = 1;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &num3);

    if (num1 <= 0 || num2 <= 0 || num3 <= 0) printf("um ou mais números invalidos");
    else {
        while (1){
            if(mmc % num1 == 0 && mmc % num2 == 0 && mmc % num3 = 0) break;
            mmc++;
        }
        
    }

    printf("O MMC de %d, %d e %d é %d\n", num1, num2, num3, mmc);
    

    return 0;
}
