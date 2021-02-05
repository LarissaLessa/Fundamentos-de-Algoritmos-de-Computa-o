/*QUESTÃO 06:
Criar um programa que exiba os N
primeiros termos da seguinte série:
1,2,8,64,1024,...*/

#include<stdio.h>

int main(){
	
	//Declaração de variavel
	int i, n, termo,razao;
	
	//Solicitando valores
	printf("Digite o valor de N:");
	scanf("%d", &n);	
	
	termo=1;
	razao=2;
	
	//Calculando valores 
	for(i=1; i<n; i++){
		
		printf(" %d ", termo);
		
		termo=termo*razao;
		
		razao=razao*2;
		
		
	}
}
