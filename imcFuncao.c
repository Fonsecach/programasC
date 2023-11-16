#include <stdio.h>
#include <string.h>

struct DadosImc {
    char nome[50];
    float altura, peso, imc;
};

struct DadosImc LerStruct(struct DadosImc *DadosImc) {
  printf("Calcule o IMC \n");

  printf("Nome: ");
  scanf("%[^\n]s",&DadosImc -> nome);

  printf("Altura: ");
  scanf("%f",&DadosImc -> altura);

  printf("Peso: ");
  scanf("%f",&DadosImc -> peso);

  return *DadosImc;
}

void CalculaImc(struct DadosImc dados) {
  float imc;
  
  imc =  dados.peso / (dados.altura * dados.altura);
  dados.imc = imc;

  if (imc < 18.5) {
    printf("O seu IMC é %.1f você esta abaixo do peso.\n", imc);
  }
  else if (18.5 <= imc && imc < 24.9){
    printf("O seu IMC é de %.1f, o seu peso é ideal.\n", imc);
  } 
  else if (25 <= imc && imc < 29.9) {
    printf("O seu IMC é de %.1f, o seu peso esta um pouco acima do recomendavel.\n", imc);
  }
  else if (30 <= imc && imc < 39.9) {
    printf("O seu IMC é de %.1f, o seu peso esta acima do recomendavel, cuidado com a obsidade nivel 1.\n", imc);
  }
  else if (imc >= 40) {
    printf("O seu IMC é de %.1f, o seu peso esta acima do recomendavel, cuidado com a obsidade nivel 2.\n", imc);
  }
}

void ExibirDados(struct DadosImc dados) {

  printf("Nome: %s\n", dados.nome);
  printf("Altura: %.2f metros\n", dados.altura);
  printf("Peso: %.2f kg\n", dados.peso);

}


int main (){
  
  struct DadosImc dados;
  dados = LerStruct(&dados);
  ExibirDados(dados);
  CalculaImc(dados);
  return 0;
}