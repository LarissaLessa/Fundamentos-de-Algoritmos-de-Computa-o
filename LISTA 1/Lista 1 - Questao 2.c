/* QUESTÃO 02: Elabore um algoritmo que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:  
 
Categoria     Faixa de idade
Infantil A    0 - 4 anos
Infantil B    5 - 7 anos 
Infantil C    8-10 anos
Juvenil A     11-13 anos 
Juvenil B     14-17 anos
Adulto        18 anos ou mais  */

#include<stdio.h>

int main ()
{
	//Declaração de variáveis
	int idade;
	
	//Obter dados
	printf("Digite a idade do nadador\n");
	scanf("%d", &idade);
	
	//Exibir resultados de acordo com as condições da questão
	if(idade<=4)
	{
		printf("Categoria Infantil A\n");
	}
		else
		{
			if(idade<=7)
			{
				printf("Categoria Infantil B\n");
			}
			
			else
			{
				if(idade<=10)
				{
					printf("Categoria Infantil C\n");
				}
				
					else
					{
						if(idade<=13)
						{	
							printf("Categoria Juvenil A\n");
						}
						
							else
							{
								if(idade<=17)
								{
									printf("Categoria Juvenil B\n");
								}
								
								else
								{
									printf("Categoria Adulto\n");
								}
							}
					}
			}
		}
		
}
