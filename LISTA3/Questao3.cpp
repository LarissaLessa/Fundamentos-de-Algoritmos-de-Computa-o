/*QUEST�O 03: Jo�ozinho investiu Q reais em uma aplica��o com rendimento
fixo de R% ao m�s. Pede-se a implementa��o de um programa que calcule o 
valor (e exiba-o) dispon�vel na conta de Jo�ozinho ap�s A anos de 
investimento.*/

#include <stdio.h>
int main(){
	//Declarando variaveis
	int r, a, redimento;
	float q;
	
	
	//Lendendo os n�meros dado pelo usu�rio
	printf("Digite o valor do investimento (em reais): \n");
	scanf("%f", &q);
	
	printf("Digite o valor do redimento (em porcentagem):\n");
	scanf("%d", &r);
	
	printf("Digite a quantidade de ano que deseja investir: \n");
	scanf("%d", &a);
	
	//Calculando os valores
	for(a=a*12; a<0; a --){
		q=q+(q*(r/100)); //Calculando o redimento anual
		
	printf("\n%i Meses atr�s - %.2f", a-1, q);
	}
	
	//Exibi��o final
	printf("\n\nO seu investimento retornar� com o valor de: R$%.2f", q);

	
}
