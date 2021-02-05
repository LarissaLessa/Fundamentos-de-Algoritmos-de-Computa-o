/*QUESTÃO 06: Faça um programa que leia
200 números inteiros. Ao final, exibir:
a) O maior número fornecido, de
ordem par (isto é, o maior dentre o
segundo, quarto, sexto, oitavo, etc
valores fornecidos).
b) A média dos valores pares.*/

#include<stdio.h>
#define QUANT 5
int main(){
	//Declaração de variavel
	int i, numero, maior=-9999, valorespares, contpares=0;
	
	//for para solicitar até 200 números inteiros
	for(i=1; i<QUANT; i++){
		
		//Solicitando os valores
		printf("Digite um numero: \n");
		scanf("%d", &numero);
		
		//If verifica se a posição (I) de numero é par 
		if(i%2==0){	
			//Verificando se o número é maior
			if(numero>maior){
				maior=numero;	//Guardando o maior número 
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
