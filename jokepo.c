#include <stdio.h>
#include <stdlib.h>

int main() {
	
     int jogador, computador;
     
     srand(time(NULL));
     
     computador = rand() % 3;
     
     printf("Escolha uma opcao:\n");
     printf("0 - Pedra\n");
     printf("1 - Papel\n");
     printf("2 - Tesoura\n");
     scanf("%d", &jogador);
     
     if(jogador < 0 || jogador > 2){
     	printf("Escolha invalida. Por favor, escolha 0,1 ou 2.\n");
     	return 1;
	 }
	 
	 printf("O computador escolheu: ");
	 switch(computador){
	 	case 0:
	 		printf("Pedra\n");
	 		break;
	 	case 1:
	 		printf("Papel\n");
	 		break;	 		
	  case 2:
	 		printf("Tesoura\n");
	 		break;
	 }
     printf("Voce escolheu: ");
     switch (jogador){
     	case 0:
	 		printf("Pedra\n");
	 		break;
	 	case 1:
	 		printf("Papel\n");
	 		break;
	 		
	   case 2:
	 		printf("Tesoura\n");
	 		break;
	 }
	 if(jogador == computador){
	 	printf("Empate!\n");
	 }
	 else if ((jogador == 0 && computador == 2) ||
	          (jogador == 1 && computador == 0) ||
	          (jogador == 2 && computador == 1)) {
	          	printf("Voce venceu!\n");
			  }	  
	 else {
	 	printf("O computador venceu!\n");
	 }		  	          	 
}