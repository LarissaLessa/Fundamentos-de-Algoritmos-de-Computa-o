/*QUEST�O 08: Em uma empresa deseja-se
fazer um levantamento sobre algumas
informa��es dos seus 250 funcion�rios.
Cada funcion�rio dever� responder um
question�rio ao qual informar� os
seguintes dados: matr�cula, g�nero, idade,
sal�rio e tempo (em anos) de trabalho na
empresa. A execu��o do programa deve
exibir os seguintes itens:
a) Quantidade de funcion�rios que
ingressaram na empresa com
menos de 21 anos;
b) Quantidade de funcion�rios do
g�nero feminino;
c) M�dia salarial dos homens;
d) Matr�cula dos funcion�rios mais
antigo e mais novo.*/

#include<stdio.h>

#include<ctype.h>

//Declara�ao de constantes

#define QUANT 5
int main(){
	//Declara��o de variavel
	int i, matricula, idade, tempo ,cont21=0, contm=0, contf=0, maiortempo=0, menortempo=100, matriculamaior, matriculamenor;
	float salario, mediasalarialm, salariosoma;
	char genero;
	//Variando os 250 funcion�rios da empresa
	for(i=0;i<QUANT;i++){
		
		//Lendo os valores de cada funcion�rios
		
		// matr�cula
		printf("Digite o numero da matricula: \n");
		scanf("%d", &matricula);
		
		//genero
		printf("Digite o genero (M/F): \n");
		fflush(stdin); //standar input
		scanf("%c", &genero);
		genero = toupper (genero); //Mausculo e minusculo
		
		//idade
		printf("Digite a idade: \n");
		scanf("%d", &idade);
		
		//Salario
		printf("Digite o salario: \n");
		scanf("%f", &salario);
		
		//Tempo (em anos) de trabalho na empresa
		printf("Digite Tempo (em anos) de trabalho na empresa: \n");
		scanf("%d", &tempo);
		
	//Quantidade de funcion�rios que entram na empresa com menos de 21 anos;
	if((idade-tempo)< 21){
		cont21++;
	}
	//b) Quantidade de funcion�rios do g�nero feminino;
	if(genero='F'){
		contf++;
	}else{//c) M�dia salarial dos homens;
		contm++;
		salariosoma=salariosoma+salario;
	}
	
	//d) Matr�cula dos funcion�rios mais antigo e mais novo.
	if(tempo>maiortempo){
		maiortempo = tempo;
		matriculamaior=matricula;
	}
	}
	//menor 
	if(tempo<menortempo){
		menortempo = tempo;
		matriculamaior=matricula;
	}
	//Calculando a m�dia 
	mediasalarialm=salariosoma/contm;
	
	//Exibindo infoma��es
	//Quantidade de funcion�rios que entram na empresa com menos de 21 anos;
	printf("Quantidade de funcinarios que entraram na empresa com menos de 21 anos: %d", cont21);
	
	//b) Quantidade de funcion�rios do g�nero feminino;
	printf("Quantidade de funcinarios de genero feminino: %d", contf);
	
	//c) M�dia salarial dos homens;
	printf("Media salarial dos homens: 2%f", mediasalarialm);
	
	
	//d) Matr�cula dos funcion�rios mais antigo e mais novo.
	printf("Funionario mais antigo: %d \n Funionario mais novo: %d ",matriculamaior, matriculamenor);
	
}
