/*QUESTÃO 11:
Implementar um programa no qual o
usuário informa um número e verifica-se se
ele é um número triangular.
Obs.: Um número é triangular quando ele
for resultado do produto de três números
consecutivos.
Exemplo: 24 = 2 x 3 x 4.*/

#include<stdio.h>

int main(){
	//Declaração de variavel
	int n,i;
	//Solicitando valores
	printf("Digite um numero:\n");
	scanf("%d", &n);
	
	//Verificando se o numero é triangular 
	
	while(i*(i+1)*(i+2)<n){
		i++;
	}
	
	if(i*(i+1)*(i+2) == n){
		printf("\n \n  %d e triangular. Ele e de %d X %d X %d", n, i, i+1, i+2);
	}else{
		printf("O numero nao e triangular");
	}


}
