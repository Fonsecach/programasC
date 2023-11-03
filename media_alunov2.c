#include <stdio.h>

int main() {
    const float horas_normais = 40, horas_extras_1 = 20;
		float valor_hora, horas_trabalhadas, salario, horas_extras, horas_extras_2;
    printf("Calcule o salário semanal.\n\n");

    printf("Insira o valor da hora trabalhada: R$ ");
    scanf("%f", &valor_hora);

    printf("Insira a quantidade de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    if (horas_trabalhadas <= 40) {
        salario = horas_trabalhadas * valor_hora;
    } else if (horas_trabalhadas <= 60) {
        horas_extras = horas_trabalhadas - horas_normais;
        salario = horas_normais * valor_hora + horas_extras * (valor_hora * 1.5);
    } else {
        horas_extras_2 = horas_trabalhadas - (horas_normais + horas_extras_1);
        salario = horas_normais * valor_hora + horas_extras_1 * (valor_hora * 1.5) + horas_extras_2 * (valor_hora * 2.0);
    }

    printf("Valor da hora trabalhada: R$ %.2f\n", valor_hora);
    printf("Horas trabalhadas: %.1f\n", horas_trabalhadas);
    printf("Salário semanal: R$ %.2f\n", salario);

    return 0;
}