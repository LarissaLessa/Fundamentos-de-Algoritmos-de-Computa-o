/*Quest�o 02: Construir um programa que, 
dado um n�mero inteiro n fornecido pelo 
usu�rio, exiba uma sequ�ncia de elementos, 
distribu�dos em linhas, como nos exemplos 
a seguir:*/

#include<stdio.h>

int main(){
	//declara��o de variavel
	int j, i, n, cont;
	
	//Solicitando N
	printf("Digite o valor de N:\n");
	scanf("%d", &n);
	
	for(i=1; i<=n ;i++){//For pra rodar at� a quantidade 
		cont=0; //Zerando cont 
		for(j=i; j>0; j--){
			
			printf("%d\t", j); //Imprimindo os elementos da linha
		cont++;
		}
		
		while(cont<n){
			
			printf("0\t");
			cont++;	
		}
			
		printf("\n");
		
	}

}
