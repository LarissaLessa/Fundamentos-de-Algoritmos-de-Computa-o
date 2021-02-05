/*QUESTÃO 03: Joãozinho investiu Q reais em uma aplicação com rendimento
fixo de R% ao mês. Pede-se a implementação de um programa que calcule o 
valor (e exiba-o) disponível na conta de Joãozinho após A anos de 
investimento.*/

#include <stdio.h>
int main(){
	//Declarando variaveis
	int r, a, redimento;
	float q;
	
	
	//Lendendo os números dado pelo usuário
	printf("Digite o valor do investimento (em reais): \n");
	scanf("%f", &q);
	
	printf("Digite o valor do redimento (em porcentagem):\n");
	scanf("%d", &r);
	
	printf("Digite a quantidade de ano que deseja investir: \n");
	scanf("%d", &a);
	
	//Calculando os valores
	for(a=a*12; a<0; a --){
		q=q+(q*(r/100)); //Calculando o redimento anual
		
	printf("\n%i Meses atrás - %.2f", a-1, q);
	}
	
	//Exibição final
	printf("\n\nO seu investimento retornará com o valor de: R$%.2f", q);

	
}
