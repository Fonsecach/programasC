#include <stdio.h>
#include <math.h>

int main() {
  double num = 1.0, raiz;

  while (1) {
    printf("Insira um número: ");
    scanf("%lf", &num);

    if (num == 0) {
      printf("Programa encerrado.\n");
      break;
    }
    raiz = sqrt(num);
    printf("A raiz quadrada de %lf é %lf\n", num, raiz);
  }
  return 0;
}
