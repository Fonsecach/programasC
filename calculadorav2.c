#include <stdio.h>

float number1, number2;

int escolha() {
  int opcao = 0;
  printf("\nEscolha uma operação: \n");
  printf("[1] Soma\n");
  printf("[2] Subtração\n");
  printf("[3] Multiplicação\n");
  printf("[4] Divisão\n");
  printf("[5] Finalizar o programa\n");
  
  do {
    scanf("%d", &opcao);
    if (opcao < 1 || opcao > 5) {
      printf("Opção inválida! Escolha novamente: ");
    }
  } while (opcao < 1 || opcao > 5);
  
  return opcao;
}

void soma() {
  printf("Insira o primeiro número: ");
  scanf("%f", &number1);
  printf("Insira o segundo número: ");
  scanf("%f", &number2);
  printf("Resultado: %.2f\n", number1 + number2);
}

void subtracao() {
  printf("Insira o primeiro número: ");
  scanf("%f", &number1);
  printf("Insira o segundo número: ");
  scanf("%f", &number2);
  printf("Resultado: %.2f\n", number1 - number2);
}

void multiplicacao() {
  printf("Insira o primeiro número: ");
  scanf("%f", &number1);
  printf("Insira o segundo número: ");
  scanf("%f", &number2);
  printf("Resultado: %.2f\n", number1 * number2);
}

void divisao() {
  printf("Insira o primeiro número: ");
  scanf("%f", &number1);
  printf("Insira o segundo número: ");
  scanf("%f", &number2);
  if (number2 == 0) {
    printf("Erro: divisão por zero.\n");
  } else {
    printf("Resultado: %.2f\n", number1 / number2);
  }
}

int main() {
  int opcao = 0;

  printf("Calculadora\n");

  while (opcao != 5) {
    opcao = escolha();
    
    if (opcao == 1) {
      soma();
    } else if (opcao == 2) {
      subtracao();
    } else if (opcao == 3) {
      multiplicacao();
    } else if (opcao == 4) {
      divisao();
    } else if (opcao == 5) {
      printf("Programa finalizado!\n");
      break;
    }
  }
  return 0;
}
