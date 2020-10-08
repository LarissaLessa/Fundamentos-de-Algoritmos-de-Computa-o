/*QUESTÃO 08: Em uma empresa deseja-se
fazer um levantamento sobre algumas
informações dos seus 250 funcionários.
Cada funcionário deverá responder um
questionário ao qual informará os
seguintes dados: matrícula, gênero, idade,
salário e tempo (em anos) de trabalho na
empresa. A execução do programa deve
exibir os seguintes itens:
a) Quantidade de funcionários que
ingressaram na empresa com
menos de 21 anos;
b) Quantidade de funcionários do
gênero feminino;
c) Média salarial dos homens;
d) Matrícula dos funcionários mais
antigo e mais novo.*/

#include<stdio.h>

#include<ctype.h>

//Declaraçao de constantes

#define QUANT 5
int main(){
	//Declaração de variavel
	int i, matricula, idade, tempo ,cont21=0, contm=0, contf=0, maiortempo=0, menortempo=100, matriculamaior, matriculamenor;
	float salario, mediasalarialm, salariosoma;
	char genero;
	//Variando os 250 funcionários da empresa
	for(i=0;i<QUANT;i++){
		
		//Lendo os valores de cada funcionários
		
		// matrícula
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
		
	//Quantidade de funcionários que entram na empresa com menos de 21 anos;
	if((idade-tempo)< 21){
		cont21++;
	}
	//b) Quantidade de funcionários do gênero feminino;
	if(genero='F'){
		contf++;
	}else{//c) Média salarial dos homens;
		contm++;
		salariosoma=salariosoma+salario;
	}
	
	//d) Matrícula dos funcionários mais antigo e mais novo.
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
	//Calculando a média 
	mediasalarialm=salariosoma/contm;
	
	//Exibindo infomações
	//Quantidade de funcionários que entram na empresa com menos de 21 anos;
	printf("Quantidade de funcinarios que entraram na empresa com menos de 21 anos: %d", cont21);
	
	//b) Quantidade de funcionários do gênero feminino;
	printf("Quantidade de funcinarios de genero feminino: %d", contf);
	
	//c) Média salarial dos homens;
	printf("Media salarial dos homens: 2%f", mediasalarialm);
	
	
	//d) Matrícula dos funcionários mais antigo e mais novo.
	printf("Funionario mais antigo: %d \n Funionario mais novo: %d ",matriculamaior, matriculamenor);
	
}
