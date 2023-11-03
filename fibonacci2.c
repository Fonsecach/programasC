#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, cont; // n para identificar o enesimo item da sequencia, e cont para controlar a quantidade de loops necessários no for
	
	printf("Insira o valor de n\n");
	scanf("%d",&n);
	
	if(n <= 0) printf("Numero invalido\n"); // se n menor ou igual a zero, numero invalido
	else
	{
		if(n == 1 || n == 2) printf("O enesimo %d é de valor 1\n",n); // os dois primeiros numeros da sequencia sao 1, então colocamos esta condição
		else
		{
			double Fibo[n]; // criado um vetor de tamanho n para calculo do enesimo valor
			Fibo[0] = 1; // primeiro item igual a 1
			Fibo[1] = 1; // segundo item igual a 1
			for(cont = 2 ; cont < n; cont++) // for para controlar a implementação da sequencia
			{
				Fibo[cont] = Fibo[cont-1] + Fibo[cont-2]; // cada item de fibonacci é igual a soma dos seus dois antecessores, loco, cont-1 e cont-2
			}
			printf("O enesimo %d é de valor %.0f\n",n, Fibo[n-1]);  // printar a sequencia com n-1, por ser ultimo item da sequencia
		}
	}
	
}