#include <stdio.h>
#include <math.h>

int main() {
    double i, raiz, count = 100;

    for (i = 1; i <= count; i++) {
        raiz = sqrt(i);
        printf("A raiz quadrada de %.0f é %.2f.\n", i, raiz);
    }

    return 0;
}