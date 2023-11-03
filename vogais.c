#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  	char str1[30];
 	char str2[30];
 	int cont, cont2, soma1=0, soma2=0;
 	
 	//solicitação das strings 
 	printf("Digite uma palavra: \n ");
 	scanf(" %[^\n]s", &str1);
 	
 	printf("Digite uma palavra: \n");
 	scanf(" %[^\n]s", &str2);
 	
	for(cont=0;cont<=strlen(str1);cont++)
	{
		if(str1[cont] == 'a' || str1[cont] == 'A' )
		{
			soma1++;
		}
		else if(str1[cont] == 'e' || str1[cont] == 'E')
		{
			soma1++;
		}
		else if(str1[cont] == 'i' || str1[cont] == 'I')
		{
			soma1++;
		}
		else if(str1[cont] == 'o' || str1[cont] == 'O')
		{
			soma1++;
		}
		else if(str1[cont] == 'u' || str1[cont] == 'U')
		{
			soma1++;
		}
		
	
	}
	
 	for(cont2=0;cont2<=strlen(str2);cont2++)
	{
		if(str2[cont2] == 'a' || str2[cont2] == 'A' )
		{
			soma2++;
		}
		if(str2[cont2] == 'e' || str2[cont2] == 'E' )
		{
			soma2++;
		}
		if(str2[cont2] == 'i' || str2[cont2] == 'I' )
		{
			soma2++;
		}
		if(str2[cont2] == 'o' || str2[cont2] == 'O' )
		{
			soma2++;
		}
		if(str2[cont2] == 'u' || str2[cont2] == 'U' )
		{
			soma2++;
		}
	}
	
	if(soma1 < soma2)
	{
		printf("A palavra %s com: %d vogais, tem mais que %s com: %d vogais \n  ", str2, soma2, str1, soma1);
	}
	else
	{
		printf("A palavra %s com: %d vogais, tem mais que %s com: %d vogais \n ", str1, soma1, str2, soma2);
	}
 }
