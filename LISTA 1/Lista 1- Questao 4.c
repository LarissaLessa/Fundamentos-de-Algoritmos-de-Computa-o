/* QUESTÃO 04: Um banco concederá um crédito especial aos seus clientes, 
variável com o saldo médio no último ano. Faça um algoritmo que calcule 
o valor do crédito de acordo com a tabela abaixo.   
Saldo Médio Percentual Inferior a R$ 1000,00 nenhum crédito 
De R$ 1000,00 a  R$ 1499,99 20% do saldo médio 
De R$ 1500,00 a  R$ 2499,99 30% do saldo médio 
R$ 2500,00 ou mais 40% do saldo médio  */

#include<stdio.h>

int main ()
{
	//Declaração de variáveis
	float saldo_medio;
	
	//Obter dados
	printf("Digite o saldo medio\n");
	scanf("%f", &saldo_medio);
	
	//De acordo com as condições exigidas na questão, exibir resultados
	if(saldo_medio<=1000)
	{
		printf("Nenhum Credito\n");
	}
	
	else
	{
		if(saldo_medio<=1499.99)
		{
			printf("Credito de 20%% do saldo medio\n");
		}
		
		else
		{
			if(saldo_medio<=2499.99)
			{
				printf("Credito de 30%% do saldo medio\n");
			}
			
			else
			{
				printf("Credito de 40%% do saldo medio\n");
			}
		}
	}
}
