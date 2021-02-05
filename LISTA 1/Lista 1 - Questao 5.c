/* QUESTÃO 05: Escrever um algoritmo que, dada uma quantia em reais, 
calcule o menor número possível de notas/moedas (100, 50, 20, 10, 5, 
2 e 1) em que o valor pode ser decomposto. */
#include<stdio.h>

int main ()
{
	//Declaração de variáveis
	int n100, n50, n20, n10, n5, n2, moedas;
	int valor, resto;
	
	//Obter dados
	printf("Digite um valor");
	scanf("%f", &valor);
	
	//Calcular quantas possíveis notas de 100 terei e armazenar o resto para calcular quantas terei das próximas notas/moedas
	n100 = valor/100;
	resto = valor%100;
	
	//Calcular quantas possíveis notas de 50 terei e armazenar o resto para calcular quantas terei das próximas notas/moedas
	n50= resto/50;
	resto= resto%50;
	
	//Calcular quantas possíveis notas de 20 terei e armazenar o resto para calcular quantas terei das próximas notas/moedas
	n20=resto/20;
	resto=resto%20;
	
	//Calcular quantas possíveis notas de 10 terei e armazenar o resto para calcular quantas terei das próximas notas/moedas
	n10=resto/10;
	resto=resto%10;
	
	//Calcular quantas possíveis notas de 5 terei e armazenar o resto para calcular quantas terei das próximas notas/moedas
	n5=resto/5;
	resto=resto%5;
	
	//Calcular quantas possíveis notas de 2 terei e armazenar o resto para calcular quantas terei das próximas notas/moedas
	n2=resto/2;
	resto=resto%2;
	
	//Depois de todo esse processo, se sobrar algum dinheiro será dado em moedas 1
	resto=moedas;
	
	//Exibindo resultados
	printf("Necessarias %d notas de 100 \n %d notas de 50 \n %d notas de 20 \n %d notas de 10 \n %d notas de 5 \n %d notas de 2 \n e %d moedas");
	
}
