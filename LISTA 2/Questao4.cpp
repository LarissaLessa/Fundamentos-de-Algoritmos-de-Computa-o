/*QUEST�O 04: Desenvolva um algoritmo que
calcule o consumo de combust�vel de um
autom�vel em determinada viagem. Para isso,
devem ser obtidos: 
i) o percurso (em quil�metros) da viagem; 
ii) o n�mero de quil�metros que o carro percorre com um litro de combust�vel (km/l); 
iii) o pre�o do litro do combust�vel.
Ao final, o algoritmo deve determinar:
A quantidade de combust�vel, em litros, consumida durante a viagem; O custo total de combust�vel.*/

#include <stdio.h>

int main(){  
	//Declarando as variaveis 
	float percurso, quilometragem, valorcombustivel, consumo, valortotal;
	
	
	//Solicitando valores 
	printf("Digite opercusor da viagem (em quilometros): \n");
	scanf("%f", &percurso);
	 
	printf("Digite a quilometrangem por litro(km/L): \n");
	scanf("%f", &quilometragem);
	
	printf("Digite o valor do produto: \n");
	scanf("%f", &valorcombustivel);

	//Calculando os valores 
	consumo=percurso*quilometragem;
	valortotal=consumo*valorcombustivel;
	
	//Imprimindo resultado
	printf("A quantidade de combust�vel, em litros, consumida durante a viagem: \n" , consumo);
	printf("O custo total de combust�vel:  \n %.2f", valortotal);
}

