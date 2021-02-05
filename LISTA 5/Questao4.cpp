/*QUESTÃO 04: A prefeitura de uma cidade fez 
uma pesquisa com 300 de seus habitantes, 
coletando dados sobre o salário e número 
de filhos. A prefeitura deseja saber: 
a) média do salário da população; 
b) média do número de filhos; 
c) maior salário; 
d) percentual de pessoas com salário até R$ 1.000,00.*/

#include <stdio.h>
#define QUANT 5
int main (){
	//Declaração de variavel 
	float salario, mediasalarial, cont=0;
	int i, filhos, mediafilhos, maiorsalario, menorsalario;
	
	//For para rodar até a quantidade de valores
	for(i=1; i<QUANT; i++){
		
	//Solicitar informações
	printf("Digite salario: \n");
	scanf("%f", &salario);
	
	printf("Digite quantidade de filhos:\n");
	scanf("%d", &filhos);
	
	//a) média do salário da população; 
		mediasalarial=mediasalarial+salario;
		
	//b) média do número de filhos; 
		mediafilhos=mediafilhos+filhos;
	
			
	//c) maior salário; 
		if(salario>maiorsalario){
			maiorsalario=salario;
		}
	//d) percentual de pessoas com salário até R$ 1.000,00.
		if(salario<1000){
			cont++;
		}
	}
	//Imprimindo os valores
	printf("Media do salario da populacao: \n %f" , mediasalarial/QUANT);
	
	printf("Media do numero de filhos: \n %d" , mediafilhos/QUANT);
	
	printf("Maior salario: \n %d" , maiorsalario);
	
	printf("Media do numero de filhos: \n %d" , (cont*100)/QUANT);
	
	
	

}

