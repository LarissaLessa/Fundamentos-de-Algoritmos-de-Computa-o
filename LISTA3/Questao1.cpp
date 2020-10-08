/*QUESTÃO 01: Faça um programa que leia um número inteiro 
positivo N e exiba todos os múltiplos de Y inferiores a N, 
onde N e Y são fornecidos pelo usuário.*/



#include <stdio.h>
int main(){
	//Declarando variaveis
	int n, y, i;
	
	//Lendendo os números dado pelo usuário
	
	do
	{
	
		printf("Digite o valor de N: \n");
		scanf("%d", &n);
	
		printf("Digite o valor de Y:\n");
		scanf("%d", &y);
	
		if (y>n){
		printf("Digite novamente\n");
		}
	}while(y>n);
	
	//Calculando os valores	
		for(i=1; i<n ; i ++ ){
			if(i%y==0){
				printf("%d ", i);
			}	
			
		}
	
}



