#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int main() {
    int n;
    printf("Digite o valor de n para calcular o enésimo termo da sequência de Fibonacci: ");
    scanf("%d", &n);

    int resultado = fibonacci(n);

    printf("O %dº termo da sequência de Fibonacci é: %d\n", n, resultado);

    return 0;
}