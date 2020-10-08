/*QUESTÃO 02: Pede-se o desenvolvimento de 
um programa que leia n valores e determine 
o maior e o menor elementos do conjunto fornecido.*/

#include<stdio.h>
int main(){
	//Declarando variavel 
	int valor, resp, maior=0, menor=1000;
	
	//DO WHILE para lê os valores 
	do{
		//Solicitando valores
		printf("Digite valor:\n");
		scanf("%d", valor);
		
		//Condição de parada
		printf("Digite 1 para continuar ou 2 pra parar:\n");
		scanf("%d", &resp);
		
		
		//Validando Maior e Menor elemento
		if(valor>maior){
			maior=valor; //Recebe o maior ele mento 
		}else{
			if(valor<menor){
				menor=valor; //Recebe o menor elemento
			}
		}
	}while (resp==2);
	
	//Imprimindo O maior e o menor elemento
	printf("Menor elemento: %d\n");
	printf("Maior elemento: %d\n");
}

