/*QUEST�O 03:
Desenvolver uma fun��o que calcule o n-�simo
termo da sequ�ncia de Fibonacci.*/

#include<stdio.h>

int sequencia(int n);
int main(){
	//Declara��o de variavel
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
