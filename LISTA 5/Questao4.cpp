/*QUEST�O 04: A prefeitura de uma cidade fez 
uma pesquisa com 300 de seus habitantes, 
coletando dados sobre o sal�rio e n�mero 
de filhos. A prefeitura deseja saber: 
a) m�dia do sal�rio da popula��o; 
b) m�dia do n�mero de filhos; 
c) maior sal�rio; 
d) percentual de pessoas com sal�rio at� R$ 1.000,00.*/

#include <stdio.h>
#define QUANT 5
int main (){
	//Declara��o de variavel 
	float salario, mediasalarial, cont=0;
	int i, filhos, mediafilhos, maiorsalario, menorsalario;
	
	//For para rodar at� a quantidade de valores
	for(i=1; i<QUANT; i++){
		
	//Solicitar informa��es
	printf("Digite salario: \n");
	scanf("%f", &salario);
	
	printf("Digite quantidade de filhos:\n");
	scanf("%d", &filhos);
	
	//a) m�dia do sal�rio da popula��o; 
		mediasalarial=mediasalarial+salario;
		
	//b) m�dia do n�mero de filhos; 
		mediafilhos=mediafilhos+filhos;
	
			
	//c) maior sal�rio; 
		if(salario>maiorsalario){
			maiorsalario=salario;
		}
	//d) percentual de pessoas com sal�rio at� R$ 1.000,00.
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

