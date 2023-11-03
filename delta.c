#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta;

    printf("Digite o valor de a: ");
    scanf("%lf", &a);

    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;

    printf("O valor de delta é: %lf\n", delta);

    return 0;
}
