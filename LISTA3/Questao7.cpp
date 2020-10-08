/*QUEST�O 07: Uma determinada empresa
fez uma pesquisa de mercado para saber
se as pessoas gostaram ou n�o de um novo
produto que foi lan�ado. Para cada pessoa
entrevistada foram coletados os seguintes
dados: 
g�nero (M ou F) e
resposta (G [Gostou] ou N [N�o Gostou]). 
Sabendo-se que foram entrevistadas X pessoas, fa�a
um programa que forne�a:

a) N�mero de pessoas que gostaram
do produto;
b) N�mero de pessoas que n�o
gostaram do produto;
c) Informa��o dizendo em que
g�nero o produto teve uma melhor
aceita��o.*/
#include<ctype.h>
#include<stdio.h>

int main(){
	//Declara��o de variavel 
	int i, n, mascg=0, mascn=0, femg=0, femn=0, masculino, feminino;
	char s, g;
	float porcF , porcm;
	
	//Solicitando informa��es
	printf("Digite o numero de entrevistados:\n");
	scanf("%d", &n);

	
	//For para contar at� o n�mero de pessoas
	for(i=1; i<n; i++){
		printf("Digite o Genero (M ou F):\n");
		fflush(stdin); //standar input
		scanf(" %c", &s);
		s = toupper (s); //Mausculo e minusculo
		
		printf("Digite se gostou ou n�o (G ou N): \n");
		fflush(stdin); //standar input
		scanf("%c", &g);
		g = toupper (g); //Mausculo e minusculo
		
		if(s=='M'){
			masculino++; //Quantidade de pessoas do sexo masculino
			if(g=='G'){
				mascg++; //Contando quantidade de sexo masculino que gostou do produto
			}else{
				mascn++; //Contando quantidade de sexo masculino que n�o gostou do produto
			}
		}else{
			feminino++;
			if(g=='G'){//Quantidade de pessoas do sexo feminano
				femg++; //Contando quantidade de sexo feminino que gostou do produto
			}else{
				femn++; //Contando quantidade de sexo feminino que n�o gostou do produto
			}
		}
	}
	
	//Imprimindo os valores
	//a) N�mero de pessoas que gostaram do produto;
	printf("Numero de pessoas que gostaram do produto: %d \n" , mascg+femg);
	
	
	//b) N�mero de pessoas que n�o gostaram do produto;
	printf("Numero de pessoas que n�o gostaram do produto:  %d \n" , mascn+femn);
	
	//c) Informa��o dizendo em que g�nero o produto teve uma melhor aceita��o.
	
	//Calculando as porcentagens de aceita��o 
	porcm = ((float)mascg/masculino)*100);
	porcF = ((float)femg/feminino)*100);
	
	//Validando qual sexo teve maior aceita��o 
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
