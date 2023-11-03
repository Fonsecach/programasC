#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char Times[4][100] = {"Alemannha","Brasil","Marrocos","Japao"};
	int cont1, cont2, n = 0, golspartida1, golspartida2;
	int criterios[4][3] = {{0,-2000,0},{0,-2000,0},{0,-2000,0},{0,-2000,0}};
	int classificacao[4];
	int pontos[4] = {0,0,0,0};
	int golsmarcados[4] = {0,0,0,0};
	int golslevados[4]	= {0,0,0,0};
	int saldo[4];
	
	for(cont1 = n ; cont1 < 3 ; cont1++)
	{
		for(cont2 = n+1 ; cont2 < 4 ; cont2++)
		{
			printf("Jogo entre %s  e %s\n",Times[cont1],Times[cont2]);
			printf("Insira a quantidade de gols de %s\n", Times[cont1]);
			scanf("%d", &golspartida1);
			
			printf("Insira a quantidade de gols de %s\n", Times[cont2]);
			scanf("%d", &golspartida2);
			
			golsmarcados[cont1] = golsmarcados[cont1] +  golspartida1;
			golsmarcados[cont2] = golsmarcados[cont2] +  golspartida2;
			golslevados[cont1] = golslevados[cont1] +  golspartida2;
			golslevados[cont2] = golslevados[cont2] +  golspartida1;
			
			if(golspartida1 > golspartida2) pontos[cont1] = pontos[cont1] + 3;
			else if(golspartida1 < golspartida2) pontos[cont2] = pontos[cont2] + 3;
			else
			{
				pontos[cont1] = pontos[cont1] + 1;
				pontos[cont2] = pontos[cont2] + 1;
			}
			saldo[cont1] = golsmarcados[cont1]  - golslevados[cont1];
			saldo[cont2] = golsmarcados[cont2]  - golslevados[cont2];
		}
		n++;
	}
	
	for(cont1 = 0; cont1 < 4; cont1++)
	{
		printf("%s\t%d\t%d\t%d\t%d\n", Times[cont1],pontos[cont1],saldo[cont1], golsmarcados[cont1], golslevados[cont1]);
	}
	
	
	for(cont1 = 0; cont1 < 4; cont1++)
	{
		if((pontos[cont1] > criterios[0][0]) || ((pontos[cont1] == criterios[0][0]) && (saldo[cont1] > criterios[0][1])) || ((pontos[cont1] == criterios[0][0]) && (saldo[cont1] == criterios[0][1]) && (golsmarcados[cont1] > criterios[0][2])))
		{
			criterios[3][0] = criterios[2][0];
			criterios[3][1] = criterios[2][1];
			criterios[3][2] = criterios[2][2];
			classificacao[3] = classificacao[2];
			criterios[2][0] = criterios[1][0];
			criterios[2][1] = criterios[1][1];
			criterios[2][2] = criterios[1][2];
			classificacao[2] = classificacao[1];
			criterios[1][0] = criterios[0][0];
			criterios[1][1] = criterios[0][1];
			criterios[1][2] = criterios[0][2];
			classificacao[1] = classificacao[0];
			criterios[0][0] = pontos[cont1];
			criterios[0][1] = saldo[cont1];
			criterios[0][2] = golsmarcados[cont1];
			classificacao[0] = cont1;
		}
		else 
		{
			if((pontos[cont1] > criterios[1][0]) || ((pontos[cont1] == criterios[1][0]) && (saldo[cont1] > criterios[1][1])) || ((pontos[cont1] == criterios[1][0]) && (saldo[cont1] == criterios[1][1]) && (golsmarcados[cont1] > criterios[1][2])))
			{
				criterios[3][0] = criterios[2][0];
				criterios[3][1] = criterios[2][1];
				criterios[3][2] = criterios[2][2];
				classificacao[3] = classificacao[2];
				criterios[2][0] = criterios[1][0];
				criterios[2][1] = criterios[1][1];
				criterios[2][2] = criterios[1][2];
				classificacao[2] = classificacao[1];
				criterios[1][0] = pontos[cont1];
				criterios[1][1] = saldo[cont1];
				criterios[1][2] = golsmarcados[cont1];
				classificacao[1] = cont1;
			}
			else 
			{
				if((pontos[cont1] > criterios[2][0]) || ((pontos[cont1] == criterios[2][0]) && (saldo[cont1] > criterios[2][1])) || ((pontos[cont1] == criterios[2][0]) && (saldo[cont1] == criterios[2][1]) && (golsmarcados[cont1] > criterios[2][2])))
				{
					criterios[3][0] = criterios[2][0];
					criterios[3][1] = criterios[2][1];
					criterios[3][2] = criterios[2][2];
					classificacao[3] = classificacao[2];
					criterios[2][0] = pontos[cont1];
					criterios[2][1] = saldo[cont1];
					criterios[2][2] = golsmarcados[cont1];
					classificacao[2] = cont1;
				}
				else
				{
					criterios[3][0] = pontos[cont1];
					criterios[3][1] = saldo[cont1];
					criterios[3][2] = golsmarcados[cont1];
					classificacao[3] = cont1;
				
				}
			}
		}
	}
	printf("Classificacao Final\n");
	for(cont1 = 0; cont1 < 4; cont1++)
	{
		printf("%s\t%d\t%d\t%d\t%d\n", Times[classificacao[cont1]],pontos[classificacao[cont1]],saldo[classificacao[cont1]], golsmarcados[classificacao[cont1]], golslevados[classificacao[cont1]]);
	}
	return 0;
}