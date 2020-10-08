/*QUESTÃO 06: Faça um programa que leia
um número N inteiro, menor ou igual a 18.
Se for maior do que 18, o programa exibirá
uma mensagem de erro e terminará a sua
execução; caso contrário, deverá exibir os
números no intervalo de 1 a 99 cujos
algarismos somem N.
Exemplo:
N = 12 Portanto, o programa deve exibir
os números que estão no
intervalo de 1 a 99, cujos
algarismos somam 12. Ou seja:
39, 48, 57, 66, 75, 84 e 93.*/


#include <stdio.h>

int main(){ 

	//Declarando variavel
	int n, i, u, d;
	
	//Solicitando N
	printf("Digite o valor de N (sendo menor ou maior 18):\n");
	scanf("%i", &n);
	
	//Testando se o valor de N
	if(n>18){
		printf("Erro!Valor de N invalido");
	}else{
		//For para i = 1 até 100
		for (i=1; i<100; i++){
			u=i/10;
			d=i%10;
			
			if(u+d==n){
				printf(" %d ", i);
			}
		}
	}	
	
}
