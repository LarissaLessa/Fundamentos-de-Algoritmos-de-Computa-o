/*QUEST�O 02:
Desenvolver um programa que calcule a
soma dos n�meros de 1 a N, sendo N um
n�mero inteiro fornecido pelo usu�rio.*/

#include<stdio.h>

int main(){
	//Declarando variavel
	int n, i, resultado;
	//Solicitando Valores
	printf("Digite o valor de N: \n");
	scanf("%d", &n);
	
	//For para rodar de 1 a N (Valor dado pelo usu�rio)
	for(i=1; i<n; i++){
		resultado=resultado+i; //Soma dos numeros 
	}
	
	printf("%d", resultado);
}
