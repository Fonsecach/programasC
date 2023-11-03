#include <stdio.h>
#include <math.h>

int main () {
    double i, count = 100;

    for (i = 1; i <= count; i++)
    {
        printf("%.1f\n", i);
        sqrt(i);
    }
    
    return 0;
}