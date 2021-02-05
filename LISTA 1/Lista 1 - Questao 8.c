/* QUEST�O 08: Fa�a um algoritmo para calcular a conta final de um h�spede de um hotel,
 considerando que: 
 a) Devem ser obtidos o nome do h�spede, o tipo do apartamento utilizado (A, B, C ou D)
 , o n�mero de di�rias utilizadas pelo h�spede e o valor do consumo interno do h�spede;
 b) O valor da di�ria � determinado pela seguinte tabela: 
 
Tipo de Apartamento				 Valor da di�ria
A 								 R$ 350,00 
B 								 R$ 275,00  
C 								 R$ 200,00 
D 								 R$ 150,00 
 
c) O valor da taxa de servi�o equivale a 10% da conta. 
 
A conta a ser apresentada ao cliente deve conter: o nome do h�spede, 
o tipo do apartamento, o valor total das di�rias, o valor do consumo interno, 
o subtotal, o valor da taxa de servi�o e o total geral.  */

#include<stdio.h>

int main ()
{
	char apart;
	float consumo, total=0; //Importante inicializar a vari�vel total aqui pois no decorrer do c�digo o usu�rio n�o atribui nenhum valor pra ele, s� atualiza o valor dele. Se houver algum lixo de mem�ria aqui, as atualiza��es ser�o o lixo que estava aqui + os dados fornecidos.
	int diaria;
	//Considerando que � pra ignorar a parte que deve ser obtido o nome do h�spede pois isso � mat�ria para Av2
	
	//Obter dados
	printf("Digite o apartamento\n");
	scanf("%c", &apart);
	
	printf("Digite quantos dias ficou no hotel\n");
	scanf("%d", &diaria);
	
	printf("Digite o consumo do cliente\n");
	scanf("%f", &consumo);
	
	//Escolher o apartamento 
	if(apart=='a')
	{
		total+=(350*diaria); 
	}
		else
		{
			if(apart=='b')
			{
				total+=(275*diaria);
			}
			
			else
			{
				if(apart=='c')
				{
					total+=(200*diaria);
				}
				
				else
				{
					total+=(150*diaria);
				}
			}
		}
	//Exibir o total vezes a quantidade de dias que o h�spede ficou
	printf("Di�rias = %.2f\n", total);
	//Adicionar o consumo do h�spede
	total+=consumo;
	//Exibir o consumo e o total atualizado 
	printf("Consumo = %.2f \nTotal %.2f", consumo, total);
	//Adicionar os 10% dos servi�os
	total+=(total*0.1);
	//Exibir o total + os 10% e o resultado final
	printf("\n+10%% = %.2f \n\n\nFinal Total %.2f\n", total, total);
		
}
