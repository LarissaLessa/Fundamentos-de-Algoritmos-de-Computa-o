/*QUEST�O 08:
Desenvolver uma fun��o que exiba todos os
n�meros primos inferiores a determinado valor
inteiro N.*/

#include<stdio.h>

int primos (int n);
int main(){
	//Declara��o de variavel
	int n, resultado;
	
	//Solicitando valores
	printf("Digite o valor de N1: \n");
  	scanf("%d", &n);
  	
  	primos (n);

	
}
int primos (int n){
	int i, j, cont;
	
	//Calculando se o num�ro � primo 
	for(i=2; i<n; i++){
		cont=0;	
		for(j=1; j<=i; j++){
			if(i%j==0){
				cont++;
			}	
		}	
		//Verificando se � primo
		if(cont== 2){
			printf("%d ", i);
		}
	}
	
}


