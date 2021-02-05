/*QUESTÃO 03:
Fazer um programa que exiba todos os
divisores de um número fornecido pelo
usuário.*/

#include<stdio.h>

int main(){
	//Declaração de variavel
	int i, n;
	//Solicitando N
	printf("Digite o valor de N: \n");
	scanf("%d", n);
	
	//Realizando o calculo
	for(i=1; i<=n; i++){
		if(n%i==0){
			printf(" %d ");
		}
	}
}
