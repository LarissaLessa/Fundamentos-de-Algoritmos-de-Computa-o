/*QUESTÃO 05:
Fazer uma função que exiba a tabuada de
potências de um número n, no intervalo de 1 a
9. Se o número não estiver neste intervalo, o
código 0 deve ser retornado; caso contrário,
retorna-se 1.*/

#include<stdio.h>

int exibirtabuada(int numero);
int main(){
	//Declaração de variavel
	int numero;
	
	//Solicitando valores
	printf("Digite numero: \n");
  	scanf("%d", &numero);
  	
	exibirtabuada(numero);
}

int exibirtabuada(int numero){
	int i, n =1;
	
	if((numero<1) || (numero>9)){
		return 0;
	}else{
		for(i=0;i<=9; i++){
			
			printf("%d^%d= %d ", numero, i , n);
			
			n=numero*n;	
		}
	}
}
