/*QUEST�O 01: Fa�a um programa que leia um n�mero 
inteiro x e, em seguida, solicite ao usu�rio outros 
50 valores inteiros. Ao final, 
o programa deve exibir o total de m�ltiplos de x fornecidos.*/

//Constante
#define QUANT 5

#include<stdio.h>
int main(){
	
	//Declara��o de variavel
	int i,n, inteiros, cont=0;
	
	//Solicitando X
	printf("Digite valor:\n");
	scanf("%d", &n);
	
	//For para solicitar os 50 valores
	for(i=1 ; i<QUANT ; i++){
		
		printf("Digite valor:\n");
		scanf("%d", &inteiros);
		
		//verificando se o numero � m�tiplo
		if(inteiros%n==0){
			cont++;
			
		}
		
	}
	
	printf("Total de m�ltiplos de x: %d \n  " , cont);
}
