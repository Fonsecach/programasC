#include <stdio.h>
float divisao (float a, float b) {return a / b;}
float multiplicacao(float a, float b) { return a * b; }
void main(){
float consumo_medio, autonomia, capacidade_tanque, km_percorrida;

printf("Calcule a autonomia e consumo médio.\n");

printf("Insira a quantidade de litros abastecidos: ");
scanf("%f", &capacidade_tanque);

printf("Insira a quantidade de km percorridos: ");
scanf("%f", &km_percorrida);

consumo_medio =  divisao(km_percorrida, capacidade_tanque);

autonomia = multiplicacao(consumo_medio,capacidade_tanque);

printf("O consumo médio do veiculo é de %.1f km/l, enquanto sua autonomia é de %.f km.", consumo_medio, autonomia);
}