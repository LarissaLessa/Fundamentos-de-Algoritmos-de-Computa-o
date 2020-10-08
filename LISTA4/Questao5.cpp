/*QUESTÃO 05:
Criar um programa que exiba os N
primeiros termos da seguinte série:
1,2,4,8,16,32,...*/

#include<stdio.h>

int main(){
	//Declaração de variavel
	int i, n, termo;
	//Solicinta N
	printf("Digite o valor de N: \n");
	scanf("%d", &n);
	
	termo=1;
	
	for(i=1;i<=n;i++){
		printf(" %d ", termo);
			if(i%2==0){
		termo=termo*2;	
		}
	}
}

