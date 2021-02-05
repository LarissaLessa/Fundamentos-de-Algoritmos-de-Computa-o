/*QUESTÃO 01: Faça um programa que leia um número 
inteiro x e, em seguida, solicite ao usuário outros 
50 valores inteiros. Ao final, 
o programa deve exibir o total de múltiplos de x fornecidos.*/

//Constante
#define QUANT 5

#include<stdio.h>
int main(){
	
	//Declaração de variavel
	int i,n, inteiros, cont=0;
	
	//Solicitando X
	printf("Digite valor:\n");
	scanf("%d", &n);
	
	//For para solicitar os 50 valores
	for(i=1 ; i<QUANT ; i++){
		
		printf("Digite valor:\n");
		scanf("%d", &inteiros);
		
		//verificando se o numero é mútiplo
		if(inteiros%n==0){
			cont++;
			
		}
		
	}
	
	printf("Total de múltiplos de x: %d \n  " , cont);
}
