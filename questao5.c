#include <stdio.h>

int main () {
    float num1, num2, resultado;

    printf("Caso os 2 numeros digitados seja menor que 20 será exibido o produto, caso contrário será exibido a divsão do primeiro pelo segundo.\n");

    printf("Insira um número: ");
    scanf("%f", &num1);

    printf("Insira um número: ");
    scanf("%f", &num2);

    if (20 > num1 && 20 > num2){
        resultado = num1 * num2;
        printf("O produto é %1.f.\n\n\n", resultado);
    } else {
        resultado = num1 / num2;
        printf("A divisão é %1.f.\n\n\n", resultado);
    }
    
    return 0;
}