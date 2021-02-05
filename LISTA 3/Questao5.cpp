/*QUESTÃO 05: Faça um programa que exiba
na tela os 50 primeiros termos da seguinte
série: 1, -2, 3, -4, 5, -6 ...*/

#include <stdio.h>
int main(){
	//Declarando variaveis
	int  i , n;
	
	
	//repetição para exibir os 50 números
	for(i=1 ;i<=50; i++){
		
		n=n+1;
		
		if(n%2==0){//testando se é par
			printf("%d ", n*-1);
		}else 
		
		printf("%d ", n);
		
	}

}
