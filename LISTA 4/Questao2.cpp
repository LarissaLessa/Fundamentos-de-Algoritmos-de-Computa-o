/*QUESTÃO 02:
Desenvolver um programa que calcule a
soma dos números de 1 a N, sendo N um
número inteiro fornecido pelo usuário.*/

#include<stdio.h>

int main(){
	//Declarando variavel
	int n, i, resultado;
	//Solicitando Valores
	printf("Digite o valor de N: \n");
	scanf("%d", &n);
	
	//For para rodar de 1 a N (Valor dado pelo usuário)
	for(i=1; i<n; i++){
		resultado=resultado+i; //Soma dos numeros 
	}
	
	printf("%d", resultado);
}
