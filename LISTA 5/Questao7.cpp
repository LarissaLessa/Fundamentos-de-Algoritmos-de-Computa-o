/*QUEST�O 07: Fa�a um programa que leia
150 n�meros reais e, ao final, exiba:
a) A soma dos 50 primeiros;
b) menor n�mero do 51� ao 100�
valores fornecidos;
c) A m�dia entre os �ltimos 50
valores.*/

#include<stdio.h>
#define QUANT 5
int main(){
	//Declara��o de variavel
	
	//Solicintando 150
	for(i=1 ; i<QUANT ; i++){
		//Solicitando valores
		printf("Digite numero: \n");
		scanf("%d", &n);
		
		//a) A soma dos 50 primeiros;
		if(i<50){
			soma=soma+n;	
		}else{//b) menor n�mero do 51� ao 100� valores fornecidos;
			if(n<menor){
				menor=n;
			}
		}//c) A m�dia entre os �ltimos 50 valores.
		for(i=1;(i>=10)&&(i<=15);i++)
		{
			soma5Ultimos=soma5Ultimos+num;
			qtd5Ultimos++;
		}	
	}
	
	printf("A soma dos 50 primeiros: \n %d", soma);
	
	printf("Menor n�mero do 51� ao 100� valores fornecidos: \n %d", menor);
	
	printf("A m�dia entre os �ltimos 50 valores \n %d", soma5Ultimos/qtd5Ultimos);

}
