/*QUESTÃO 04:
A função logarítmica é complementar à
potenciação. Ou seja, uma vez que 3
4
= 81,
podemos então afirmar que log3 81 = 4.
Generalizando, temos que:
base expoente = pot -> log base pot = expoente
Com base nessa descrição, pede-se o
desenvolvimento de uma função que, dados a e
b, calcule o valor de logab.
Nota: a sua solução deverá apresentar um valor
inteiro que, na verdade, será a solução aproximada
do logaritmo.*/

#include<stdio.h>

int exibirlog(int base, int potencia);
int main(){
	//Declaração de variavel
	int base, potencia;
	
	//Solicitando valores
	printf("Digite base: \n");
  	scanf("%d", &base);
  	
  	printf("Digite potencia: \n");
  	scanf("%d", &potencia);
  	
  	exibirlog(base,potencia);
}

int exibirlog(int base, int potencia){
	int i,expoente=0;
	
	while(potencia!=1){
		potencia=potencia/base;
		expoente++;
		
	}
	printf("%d", expoente);
}


