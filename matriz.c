#include <stdio.h>

int main() {
  int matriz[4][4] = {
    {40, 20, 31, 14},
    {20, 0, 0, 24},
    {72, 8, 47, 30},
    {24, 44, 65, 4}
  };

  int maior = matriz[0][0];
  int menor = matriz[0][0];
  int linha_maior = 0, coluna_maior = 0;
  int linha_menor = 0, coluna_menor = 0;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (matriz[i][j] > maior) {
        maior = matriz[i][j];
        linha_maior = i;
        coluna_maior = j;
      }
      if (matriz[i][j] < menor) {
        menor = matriz[i][j];
        linha_menor = i;
        coluna_menor = j;
      }
    }
  }

  printf("O maior valor é %d\n", maior);
  printf("A linha com o maior valor %d e a coluna com o maior valor %d\n", linha_maior, coluna_maior);
  printf("O menor é %d\n", menor);
  printf("A linha com o menor valor é %d e a coluna com o menor valor é %d\n", linha_menor, coluna_menor);

  return 0;
}