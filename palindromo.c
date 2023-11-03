#include <stdio.h>
#include <string.h> // Biblioteca para as funções strlen e strcmp

int main()
{
    char palavra[50]; //declaração da palavra que será lida para identificar se é palindromo ou não
    char palavrainversa[50]; //Variável para auxiliar a verificação de palindromo
    int cont1, cont2; //variáveis para controle do for
    
    printf("Escreva uma palavra para verificação:\n");
    scanf("%s",&palavra); 
    
    //Aqui cria-se um for com duas variaveis: uma para fazer a ordem direta da string palavra e a outra inversa
    //cont1 fara a ordem inversa e cont2 a ordem direta
    //Como 
    for(cont1 = strlen(palavra)-1, cont2 = 0; cont1 >= 0, cont2 < strlen(palavra); cont1--, cont2++)
    {
    	palavrainversa[cont2] = palavra[cont1]; // Nesta logica, vou invertendo a palavra, fazendo a palavra inversa receber a palavra inserida ao contrario
	}
	
	if(strcmp(palavra, palavrainversa)==0) printf("São um palindromo"); // Se igual a zero, a palavra e ela invertida são iguais, logo, um palindromo
	else printf("Não são um palindromo");

    return 0;
}