/*QUEST�O 05:
Fazer uma fun��o que exiba a tabuada de
pot�ncias de um n�mero n, no intervalo de 1 a
9. Se o n�mero n�o estiver neste intervalo, o
c�digo 0 deve ser retornado; caso contr�rio,
retorna-se 1.*/

#include<stdio.h>

int exibirtabuada(int numero);
int main(){
	//Declara��o de variavel
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
