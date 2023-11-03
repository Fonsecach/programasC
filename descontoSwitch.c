#include <stdio.h>

void main(){
  float produto1, produto2, produto3, valor_total, valor_descontado;
  char cartao_fidelidade;
  printf("Calcule o desconto, na compra de 3 peças de roupa.\n");
  printf("Insira o valor da primeira roupa: ");
  scanf("%f", &produto1);
  printf("Insira o valor da primeira roupa: ");
  scanf(" %f",&produto2);
  printf("Insira o valor da primeira roupa: ");
  scanf(" %f",&produto3);

  valor_total = produto1 + produto2 + produto3;
  
  printf("Insira a categoria do seu cartão fidelidade: ");
  scanf(" %c", &cartao_fidelidade);

  switch (cartao_fidelidade)
  {
  case 'A':
    valor_descontado = valor_total - (valor_total * 0.5);
    printf("O valor com desconto é R$ %.2f.\n", valor_descontado);
    printf("O valor sem desconto é de R$ %.2f.\n", valor_total);
    break;
  case 'B':
    valor_descontado = valor_total - (valor_total * 0.3);
    printf("O valor com desconto é R$ %.2f.\n", valor_descontado);
    printf("O valor sem desconto é de R$ %.2f.\n", valor_total);
    break;
    case 'C':
    valor_descontado = valor_total - (valor_total * 0.1);
    printf("O valor com desconto é R$ %.2f.\n", valor_descontado);
    printf("O valor sem desconto é de R$ %.2f.\n", valor_total);
    break;
  default:
    printf("Não possui o cartão fidelidade e/ou não possui desconto, o valor é de R$ %.2f.\n", valor_total);
    break;
  }
}