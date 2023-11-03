#include <stdio.h>
#include <string.h> // Biblioteca para as funções strlen e strcmp

int main()
{
    char nome[50]; //Variável para receber o nome da pessoa
    char sobrenome[50]; //Variável para receber o sobrenome
    int cont, total; // variavel para auxiliar no for e uma para o total de caracteres
    
    //neste exemplo, consideraremos um ou mais sobrenomes
    printf("Escreva o nome:\n");
    scanf(" %[^\n]s",&nome);// uso de scanset para caso nomes compostos. O scanset usado ao receber o fim de linha, encerra a captura
	 
    printf("Escreva o sobrenome:\n");
    scanf(" %[^\n]s",&sobrenome); // uso de scanset para caso sobrenomes compostos. O scanset usado ao receber o fim de linha, encerra a captura
    
    // Faremos dois strcat para concatenar as duas strings. Um primeiro adicionará um espaço entre nome e sobrenome
    // o segundo adicionará o sobrenome
    strcat(nome," "); // lembrar que com strcat, a primeira variavel recebe ao final o valor da segunda e atualiza seu valor
    strcat(nome,sobrenome); // a variavel nome agora receve sobrenome ao final, atualizando seu valor. 
    
    total = strlen(nome); // Contabilizar o total de caracteres do nome, porém ainda com espaço
    //para retirar o espaço, navergaremos na variavel nome e descontaremos do total a quantidade de espaços encontrados
    
    for(cont = 0; cont < strlen(nome); cont++)
    {
    	if(nome[cont] == ' ') total--; // a cada caractere de espaço encontrado, eu desconto um do total
	}
	
	printf("O nome e sobrenome %s tem %d caracteres", nome, total);
	
    return 0;
}