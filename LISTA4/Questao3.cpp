/*QUEST�O 03:
Fazer um programa que exiba todos os
divisores de um n�mero fornecido pelo
usu�rio.*/

#include<stdio.h>

int main(){
	//Declara��o de variavel
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
