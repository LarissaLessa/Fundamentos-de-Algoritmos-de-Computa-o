/*QUEST�O 01: Fa�a um programa que leia um n�mero inteiro 
positivo N e exiba todos os m�ltiplos de Y inferiores a N, 
onde N e Y s�o fornecidos pelo usu�rio.*/



#include <stdio.h>
int main(){
	//Declarando variaveis
	int n, y, i;
	
	//Lendendo os n�meros dado pelo usu�rio
	
	do
	{
	
		printf("Digite o valor de N: \n");
		scanf("%d", &n);
	
		printf("Digite o valor de Y:\n");
		scanf("%d", &y);
	
		if (y>n){
		printf("Digite novamente\n");
		}
	}while(y>n);
	
	//Calculando os valores	
		for(i=1; i<n ; i ++ ){
			if(i%y==0){
				printf("%d ", i);
			}	
			
		}
	
}



