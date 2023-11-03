#include <stdio.h>
#include <string.h>

int main()
{
    char string1[100]; // primeira string
    char string2[100]; // Segunda String
    //Vartiaveis a serem usadadas
    /*  cont1 = Auxiliar no for
        cont2 = Auxiliar na implementação da string final. Enquanto o cont1 fizer a incrementação nas primeiras strings, esta fará na final
		maior = tamanho  da maior string
		menor= tamanho da menor string
		*/	    
	int cont1 = 0, cont2 = 0, maior, menor;
    
    
    printf("Insira a primeira string\n"); 
    scanf(" %s",&string1); // Inserir a primeira string
    
    printf("Insira a segunda string\n");
    scanf(" %s",&string2); // inserir a segunda string
    
    if(strlen(string1) >= strlen(string2)) // Comparacação para identificar qual a maior string. Se de tamanho iguais, a primeira ainda sim recebera o valor de maior
    {
        maior = strlen(string1);
        menor = strlen(string2);
    }
    else 
    {
        maior = strlen(string2);
        menor = strlen(string1);
    }
    
    printf(" \n");
    char stringfinal[maior + menor + 1]; // criação de uma string final com o tamanho das outras duas strings mais 1, para o caracter '\0'
    
    for(cont1 = 0; cont1 < maior; cont1++) // for para navegar baseado no valor da maior string
    {
        if(cont1 < menor) // se o cont1 for ainda menor que a menor string, entrará nesta condição. 
		//Logo, elee vai pegar uma letra de cada palavra na posição cont1 de cada string, com a strin1 antes e seguida pela string2
		//o cont2 é incrementado por 2 por ser as duas strings ainda sendo adicionadas a string final
        {
            stringfinal[cont2] = string1[cont1]; 
            stringfinal[cont2 + 1] = string2[cont1];
            cont2 += 2;
        }
        else // no caso de cont1 ser >= menor, ele verificará qual a maior string e passará  a copiar apenas caracteres da string maior
        // alem disso, cont2 incrementa em apenas 1, pois a menor string não tem mais caracteres a adicionara a final, somente a maior
        {
             if(strlen(string1) >= strlen(string2)) stringfinal[cont2] = string1[cont1];
             else stringfinal[cont2] = string2[cont1];
             cont2++;
        }
    }
    
    printf("%s", stringfinal);
}