/*QUESTÃO 01:
Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B.*/

#include<stdio.h>

int exibirmultiplos(int num, int a,int b);
int main(){
	//Declaração de variavel
	int num, a, b, i;
	
	//Solicitando valores
	printf("Digite o valor de N: \n");
  	scanf("%d", &num);
  	
  	printf("Digite o valor de A: \n");
  	scanf("%d", &a);
  	
  	printf("Digite o valor de B: \n");
  	scanf("%d", &b);				
	
	exibirmultiplos(num,a,b);
	return 0;
}

int exibirmultiplos(int num, int a,int b){
	int i, aux;
	
	//Vailidando se A é maior que B
	if(a>b){
		aux=a;
		a=b;
		aux=b;
	}
	
	//Calculando os multiplos de A e B 
	for(i=a; i<=b; i++){
		if(i%num==0){
			printf("%d ", i);
		}	
	}
}
