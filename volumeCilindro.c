#include <stdio.h>



void main() {
	double altura, volume, diametro, raio, base;
	
	printf("Digite a altura do cilindro: ");
	scanf("%lf",&altura);
	
	diametro = altura;
	raio = diametro / 2.0;
	base = raio * raio * 3.14;
	volume = base * altura;
	
	printf("O volume e: %lf", volume);
}
