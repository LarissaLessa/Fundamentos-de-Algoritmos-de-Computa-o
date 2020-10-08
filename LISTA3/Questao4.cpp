/*QUESTÃO 04: Faça um programa que leia
300 números reais. Ao final, devem ser
exibidas as seguintes informações:
a) A quantidade de valores negativos
digitados;
b) A média dos valores positivos.*/

#include <stdio.h>
int main(){
	//Declarando variaveis
	int  quant=300,i, negativos=0, positivos=0;
	
	float n, media;
	
	//Lendendo os números dado pelo usuário
	for(i=1; i<quant; i++){ //"For" Que vai lê até o valor de quant
		printf("Digite um numero: \n");
		scanf("%f", &n);
		
		if(n<0){//"IF" para testar se o valor é negativo
			negativos++; //Contando os valores negativos 	
		}
		else if (n>0){//"IF" para testar se o valor é positivo
			
			positivos++; //Contando os valores positivo
			
			media=media+n; //recebendo os valores para calcular a média
		}
	}	
	
	printf("A quantidade de valores negativos digitados: %d \n", negativos);
	
	printf("A média dos valores positivos: %.2f \n", media/positivos);

}
