/*Questão 04:
Na matemática, dois números são chamados de
primos entre si quando o seu único divisor em
comum é a unidade (ou seja, o número 1).
Considerando este conceito, implementar um
programa que, dados dois números inteiros,
determine se são ou não primos entre si.*/

#include<stdio.h>

int main(){
	//Declaração de variavel 
	int n1, n2, i=2, cont=0;
	
	//Solicitando valores
	printf("Digite um numero:\n");
	scanf("%d", &n1);
	
	printf("Digite um numero:\n");
	scanf("%d", &n2);
	
	//Calculando valores
	while((i<=n1) && (i<=n2)){
		
		if((n1%i==0) && (n2%i==0)){
			cont++;
		}	
		i++;
	}
	if(cont!=0){
		printf("Os numeros nao sao primos entre si");
	}else{
		printf("Os numeros sao primos entre si");
	}
}
