/*QUEST�O 06: Fa�a um programa que leia
200 n�meros inteiros. Ao final, exibir:
a) O maior n�mero fornecido, de
ordem par (isto �, o maior dentre o
segundo, quarto, sexto, oitavo, etc
valores fornecidos).
b) A m�dia dos valores pares.*/

#include<stdio.h>
#define QUANT 5
int main(){
	//Declara��o de variavel
	int i, numero, maior=-9999, valorespares, contpares=0;
	
	//for para solicitar at� 200 n�meros inteiros
	for(i=1; i<QUANT; i++){
		
		//Solicitando os valores
		printf("Digite um numero: \n");
		scanf("%d", &numero);
		
		//If verifica se a posi��o (I) de numero � par 
		if(i%2==0){	
			//Verificando se o n�mero � maior
			if(numero>maior){
				maior=numero;	//Guardando o maior n�mero 
			}
			
		}
		
		if(numero%2==0){
			
			valorespares=valorespares+numero; //Recebendo pares
			contpares++;
		}
	}
	printf("O Maior numero fornecido da ordem Par: %d \n", maior);
	
	printf("A media dos valores pares:  %d \n", valorespares/contpares);
}
