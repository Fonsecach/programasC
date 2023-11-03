#include <stdio.h>

int main (){
  float altura, peso, imc;

  printf("Calcule o IMC \n");

  printf("Insira a altura: ");
  scanf("%f", &altura);

  printf("Insira a peso:  ");
  scanf("%f", &peso);

  imc = peso / (altura * altura);

  if (imc < 18.5) {
    printf("O seu IMC é %.1f você esta abaixo do peso.", imc);
  }
  else if (18.5 <= imc && imc < 24.9){
    printf("O seu IMC é de %.1f, o seu peso é ideal.", imc);
  } 
  else if (25 <= imc && imc < 29.9) {
    printf("O seu IMC é de %.1f, o seu peso esta um pouco acima do recomendavel.", imc);
  }
  else if (30 <= imc && imc < 39.9) {
    printf("O seu IMC é de %.1f, o seu peso esta acima do recomendavel, cuidado com a obsidade nivel 1.", imc);
  }
  else if (imc >= 40) {
    printf("O seu IMC é de %.1f, o seu peso esta acima do recomendavel, cuidado com a obsidade nivel 2.", imc);
  }
  return 0;
}