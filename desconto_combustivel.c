#include <stdio.h>

int main () {
  const float gasolina = 6.30, alcool = 4.70;
  char fidelidade;
  int combustivel, litros;
  float preco, desconto;

  printf("Calcule o desconto no combustivel. \n");

  printf("Possui cartão de fidalidade? [S/N] \n");
  fidelidade = getchar();
  getchar(); // limpa o buffer do teclado

  printf("Escolha o combustivel: \n");
  printf("[1] Gasolina.\n");
  printf("[2]alcool\n");
  scanf("%d", &combustivel);

  printf("Insira a quantidade de litros abastecidos: ");
  scanf("%d", &litros);

  preco = litros * gasolina;

  switch (combustivel) {
  case 1:
    if (fidelidade == 'S') {
      desconto = (litros > 20) ? litros * gasolina * 0.08 : litros * gasolina * 0.13;
      preco = preco - desconto;
      printf("O valor final foi de R$ %.2f, com desconto.\n", preco);
    } else {
      desconto = (litros <= 20) ? litros * gasolina * 0.03 : litros * gasolina * 0.08;
      preco = preco - desconto;
      printf("O valor final foi de R$ %.2f, com desconto.\n", preco);
    }
    break;
  case 2:
    preco = litros * alcool;
    printf("O valor final foi de R$ %.2f.\n", preco);
    break;
  default:
    printf("Combustivel inválido.\n");
    break;
  }

  return 0;
}
