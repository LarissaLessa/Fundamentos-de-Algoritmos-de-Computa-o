/*Questão 02: Construir um programa que, 
dado um número inteiro n fornecido pelo 
usuário, exiba uma sequência de elementos, 
distribuídos em linhas, como nos exemplos 
a seguir:*/

#include<stdio.h>

int main(){
	//declaração de variavel
	int j, i, n, cont;
	
	//Solicitando N
	printf("Digite o valor de N:\n");
	scanf("%d", &n);
	
	for(i=1; i<=n ;i++){//For pra rodar até a quantidade 
		cont=0; //Zerando cont 
		for(j=i; j>0; j--){
			
			printf("%d\t", j); //Imprimindo os elementos da linha
		cont++;
		}
		
		while(cont<n){
			
			printf("0\t");
			cont++;	
		}
			
		printf("\n");
		
	}

}
