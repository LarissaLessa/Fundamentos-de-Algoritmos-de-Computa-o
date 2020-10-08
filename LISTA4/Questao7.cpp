/*QUESTÃO 07:
Desenvolver um programa no qual o
usuário entre com vários números inteiros
e positivos e imprima o produto dos
números ímpares e a soma dos números
pares.*/

#include<stdio.h>

#include<ctype.h>

int main(){
	//Declaração de variavel 
	int i, numero, produto=0, soma=0;
	char resp;
	//Solicitando valores
	
	do{
		printf("Digite o numero: \n");
		scanf("%d", &numero);
		
		printf("Digite [S]pra continuar [N] pra para: \n");
		scanf("%c", &resp);
		resp = toupper (resp);
		
		//validando se o numero é IMPAR
		if(numero%2!=0){
			produto=produto*soma;
		}else{
			soma=soma+numero;
		}
	}while(resp=='N');
	
	//Imprimindo os valores 
	printf("Produtos do numero Impares: %d \n", produto);
	printf("Somas dos numeros dos pares: %d \n", soma);
}
