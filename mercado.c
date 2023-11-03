#include <stdio.h>

int main()
{
	//Nesta matriz, inicializamos a tabela apresentada na questão, com o volume de cada mercado.
	//Notem que cada linha consta os valores de cada linha
    int quantidade[4][5] = {{1000,1000,1000,1000,1000},
							{10,2000,5000,1500,0},
							{45,1000,200,20000,40},
							{5000,20000,50,100,500}};						
	int precos[5] = {5,4,20,1,8}; //O vetor representa os valores de custo apresentado na tabela
	int faturamentomercado[4] = {0,0,0,0}; // vetor criado para tratar dos faturamentos de cada supermercado
	int faturamentoproduto[5] = {0,0,0,0,0}; // vetor criado para tratar dos faturamentos de cada produto
	/* As variaveis abaixo foram criadas com o seguinte intuito:
	cont1 = Auxiliar no for para validar os 4 supermercados
	cont2 = Auxiliar no for para validar os 5 produtos
	maiorfaturamentomercado = identificar o valor do faturamento do supermercado com maior faturamento
	menorfaturamentomercado = identificar o valor do faturamento do supermecado com menor fautramento
	idMaiorFuturamento = Identificar o supermercado com maior faturamento
	idMenorFaturamento = Identificar o supermercado com menor faturamento*/
	int cont1, cont2, maiorfaturamentomercado = 0, menorfaturamentomercado = 1000000000, idMaiorFuturamento, idMenorFaturamento;
	
	for(cont1 = 0; cont1 < 4; cont1++) // Navegar nos 4 mercados
	{
		for(cont2 = 0; cont2 < 5; cont2++) // navegar nos 4 produtos
		{
			// Atualizo abaixo o faturamento de cada mercado, adicionando seu valor anterior ao custo de cada produto pelo seu volume
			//Perceba que temos 5 itens em cada linha e 5 produtos. Aproveito o mesmo cont para navegar nos dois.
			faturamentomercado[cont1] = faturamentomercado[cont1] + quantidade[cont1][cont2]*precos[cont2];	 
			//Já no item abaixo eu faço o faturamento do produto, com a lógica muito semelhante ao do mecado, 
			//porém, como estou tratando dos 5 produtos, eu uso cont2
			faturamentoproduto[cont2] = faturamentoproduto[cont2] + quantidade[cont1][cont2]*precos[cont2];	
		}
		if(faturamentomercado[cont1] > maiorfaturamentomercado) //identificar se o mercado atual no cont1 é com o maior faturamento
		{
			maiorfaturamentomercado = faturamentomercado[cont1]; // Atualizo o valor do maior caso condição correta
			idMaiorFuturamento = cont1 + 1; // identifico qual é o mercado com maior faturamento
		}
		if(faturamentomercado[cont1] < menorfaturamentomercado) //identificar se o mercado atual no cont1 é com o menor faturamento
		{
			menorfaturamentomercado = faturamentomercado[cont1]; // Atualizo o valor do menor caso condição correta
			idMenorFaturamento = cont1 + 1; // identifico qual é o mercado com menor faturamento
		}
	}
	
	printf(" O Mercado com maior faturamento é %d com R$%d,00\n",idMaiorFuturamento,maiorfaturamentomercado); // imprimir mercado com maior faturamento
	printf(" O Mercado com menor faturamento é %d com R$%d,00\n",idMenorFaturamento,menorfaturamentomercado); // imprimir mercado com menor faturamento
	for(cont2 = 0;cont2 < 5;cont2++)
	{
		printf("O produto %d teve faturamento de R$%d,00\n",cont2+1,faturamentoproduto[cont2]); // imrpimir faturamento de cada produto.
	}
	
	
    return 0;
}