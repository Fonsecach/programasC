#include <stdio.h>

void main() {
    float s = 0.0, num = 1.0, denominador = 1.0;

    while (num <= 99 && denominador <= 50) {
        s += num / denominador;
        num += 2;
        denominador++;
    }
    printf("O resultado de S: %.2f\n", s);
}