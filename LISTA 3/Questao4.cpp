/*QUEST�O 04: Fa�a um programa que leia
300 n�meros reais. Ao final, devem ser
exibidas as seguintes informa��es:
a) A quantidade de valores negativos
digitados;
b) A m�dia dos valores positivos.*/

#include <stdio.h>
int main(){
	//Declarando variaveis
	int  quant=300,i, negativos=0, positivos=0;
	
	float n, media;
	
	//Lendendo os n�meros dado pelo usu�rio
	for(i=1; i<quant; i++){ //"For" Que vai l� at� o valor de quant
		printf("Digite um numero: \n");
		scanf("%f", &n);
		
		if(n<0){//"IF" para testar se o valor � negativo
			negativos++; //Contando os valores negativos 	
		}
		else if (n>0){//"IF" para testar se o valor � positivo
			
			positivos++; //Contando os valores positivo
			
			media=media+n; //recebendo os valores para calcular a m�dia
		}
	}	
	
	printf("A quantidade de valores negativos digitados: %d \n", negativos);
	
	printf("A m�dia dos valores positivos: %.2f \n", media/positivos);

}
