/*QUESTÃO 04: Desenvolva um algoritmo que
calcule o consumo de combustível de um
automóvel em determinada viagem. Para isso,
devem ser obtidos: 
i) o percurso (em quilômetros) da viagem; 
ii) o número de quilômetros que o carro percorre com um litro de combustível (km/l); 
iii) o preço do litro do combustível.
Ao final, o algoritmo deve determinar:
A quantidade de combustível, em litros, consumida durante a viagem; O custo total de combustível.*/

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
	printf("A quantidade de combustível, em litros, consumida durante a viagem: \n" , consumo);
	printf("O custo total de combustível:  \n %.2f", valortotal);
}

