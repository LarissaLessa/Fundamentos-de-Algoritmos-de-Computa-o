/*QUESTÃO 03:
Desenvolver uma função que calcule o n-ésimo
termo da sequência de Fibonacci.*/

#include<stdio.h>

int sequencia(int n);
int main(){
	//Declaração de variavel
	int n, i;
	
	//Solicitando valores
	printf("Digite o N- esimo termo: \n");
  	scanf("%d", &n);				
	
	sequencia(n);
	return 0;
}
int sequencia(int n){
	int i, f=1;
	for(i=1; i<=n; i++){
		f=i+f;	
	}
	
	printf("%d", f);
}
