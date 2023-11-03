#include <stdio.h>

int main() {
    float notas[3];

    printf("Insira 3 notas e calcule a média.\n\n");
    for (size_t i = 0; i < 3; i++){
      printf("\nInsira uma nota: ");
      scanf("%f", &notas[i]);
    }
    
    float media = 0;
    for (size_t i = 0; i < 3; i++){
      media += notas[i];
    }

    printf("\nNotas: ");
    for (size_t i = 0; i < 3; i++){
      printf("%.0f ", notas[i]);
    }

    printf("\nMédia: %.2f", media / 3.0);

    return 0;
}
