/*QUESTÃO 09:
Escrever um programa que encontre o
quinto número maior que 1000, cuja
divisão por 11 tenha resto 5.*/

#include<stdio.h>

int main(){
	//Declarando variavel
	int n=1000, cont=0;
	
	//Do while para rodar até o cont ser menor que 5
	do
	{	n++;
		//Testar se o numero é divisivel por 11 e resto 5
		if(n%11==5){
			cont++; //Quantidade de vez até encontrar o quinto cont
		}
		
	}
	while (cont < 5);
	printf("O quinto numero com resto 5 e %d \n", n);
}
