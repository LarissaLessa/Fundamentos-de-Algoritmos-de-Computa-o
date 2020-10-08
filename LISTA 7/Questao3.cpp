/*Questão 03:
Desenvolver um programa que leia dois
números inteiros n1 e n2 e determine se n2
consiste em n1 com seus algarismos
embaralhados.
Nota: considerar que não existem algarismos
repetidos no mesmo número.*/

#include<stdio.h>

int main(){
	//Solicitando os valores 
	int n1, n2, a1, a2, cont=2, n;
	
	//Solicitando N1 e N2
	printf("Digite o valor de N1:\n");
	scanf("%d", &n1);
	
	printf("Digite o valor de N2:\n");
	scanf("%d", &n2);
	
	//Calculando os valores
		n=n2;
		while((n1>0) && (cont!=0)){
			a1=n1%10;
			
			n1=n1/10;
			cont=0;
			
			n2=n;
			while(n2>0){
				a2=n2%10;
				n2=n2/10;
				
				if(a1==a2){
					cont++;
				}
				
			}
		}
		if(cont!=0){
			printf("n2 consiste em n1 com seus algarismos embaralhados.");
		}else{
			printf(" n2 nao consiste em n1 com seus algarismos embaralhados.");
		}
		
}
