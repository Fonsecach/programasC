#include <stdio.h>

int main() {
    int i, sum = 0;

    for ( i = 1; i < 10000; i++)
    {
        if (i % 29 != 0) continue;
        {
            sum = sum + i;
        }
    }
    printf("A soma é", sum);
    
    return 0;
}