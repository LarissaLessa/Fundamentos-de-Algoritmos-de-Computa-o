/*QUESTÃO 07: Uma determinada empresa
fez uma pesquisa de mercado para saber
se as pessoas gostaram ou não de um novo
produto que foi lançado. Para cada pessoa
entrevistada foram coletados os seguintes
dados: 
gênero (M ou F) e
resposta (G [Gostou] ou N [Não Gostou]). 
Sabendo-se que foram entrevistadas X pessoas, faça
um programa que forneça:

a) Número de pessoas que gostaram
do produto;
b) Número de pessoas que não
gostaram do produto;
c) Informação dizendo em que
gênero o produto teve uma melhor
aceitação.*/
#include<ctype.h>
#include<stdio.h>

int main(){
	//Declaração de variavel 
	int i, n, mascg=0, mascn=0, femg=0, femn=0, masculino, feminino;
	char s, g;
	float porcF , porcm;
	
	//Solicitando informações
	printf("Digite o numero de entrevistados:\n");
	scanf("%d", &n);

	
	//For para contar até o número de pessoas
	for(i=1; i<n; i++){
		printf("Digite o Genero (M ou F):\n");
		fflush(stdin); //standar input
		scanf(" %c", &s);
		s = toupper (s); //Mausculo e minusculo
		
		printf("Digite se gostou ou não (G ou N): \n");
		fflush(stdin); //standar input
		scanf("%c", &g);
		g = toupper (g); //Mausculo e minusculo
		
		if(s=='M'){
			masculino++; //Quantidade de pessoas do sexo masculino
			if(g=='G'){
				mascg++; //Contando quantidade de sexo masculino que gostou do produto
			}else{
				mascn++; //Contando quantidade de sexo masculino que não gostou do produto
			}
		}else{
			feminino++;
			if(g=='G'){//Quantidade de pessoas do sexo feminano
				femg++; //Contando quantidade de sexo feminino que gostou do produto
			}else{
				femn++; //Contando quantidade de sexo feminino que não gostou do produto
			}
		}
	}
	
	//Imprimindo os valores
	//a) Número de pessoas que gostaram do produto;
	printf("Numero de pessoas que gostaram do produto: %d \n" , mascg+femg);
	
	
	//b) Número de pessoas que não gostaram do produto;
	printf("Numero de pessoas que não gostaram do produto:  %d \n" , mascn+femn);
	
	//c) Informação dizendo em que gênero o produto teve uma melhor aceitação.
	
	//Calculando as porcentagens de aceitação 
	porcm = ((float)mascg/masculino)*100);
	porcF = ((float)femg/feminino)*100);
	
	//Validando qual sexo teve maior aceitação 
	if(procm>porcf){
	
		printf("Sexo masculino teve maior aceitacao \n");
	}else{
		if(procf>procm){
			printf("Sexo feminino teve maior aceitacao \n");
		}else{
			printf("Sexo abos os sexos tiveram aceitacao iguais \n");
		}
	}
}
