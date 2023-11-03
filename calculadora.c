#include <stdio.h>

float soma(float x, float y) { return x + y; }

float subtracao(float x, float y) { return x - y; }

float multiplicacao(float x, float y) { return x * y; }

float divisao(float x, float y) {
  if (y == 0) {
    return -1;
  } else {
    return x / y;
  }
}

int main() {
  float number1, number2, resultado;
  int opcao = 0;

  printf("Calculadora\n");

  while (opcao != 5) {

    printf("\nEscolha uma operação: \n");
    printf("[1] Soma\n");
    printf("[2] Subtração\n");
    printf("[3] Multiplicação\n");
    printf("[4] Divisão\n");
    printf("[5] Finalizar o programa\n");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 5) {
      printf("\nOpção inválida!\n");
      continue;
    }

    if (opcao == 1) {
      printf("Insira o primeiro número: ");
      scanf("%f", &number1);
      printf("Insira o segundo número: ");
      scanf("%f", &number2);

      resultado = soma(number1, number2);
      printf("Resultado: %.2f\n", resultado);
    } else if (opcao == 2) {
      printf("Insira o primeiro número: ");
      scanf("%f", &number1);
      printf("Insira o segundo número: ");
      scanf("%f", &number2);

      resultado = subtracao(number1, number2);
      printf("Resultado: %.2f\n", resultado);
    } else if (opcao == 3) {
      printf("Insira o primeiro número: ");
      scanf("%f", &number1);
      printf("Insira o segundo número: ");
      scanf("%f", &number2);

      resultado = multiplicacao(number1, number2);
      printf("Resultado: %.2f\n", resultado);
    } else if (opcao == 4) {
      printf("Insira o primeiro número: ");
      scanf("%f", &number1);
      printf("Insira o segundo número: ");
      scanf("%f", &number2);

      resultado = divisao(number1, number2);
      if (resultado == -1) {
        printf("Erro: divisão por zero.\n");
      } else {
        printf("Resultado: %.2f\n", resultado);
      }
    } else if (opcao == 5) {
      printf("Programa finalizado!\n");
      break;
    }
  }
  return 0;
}