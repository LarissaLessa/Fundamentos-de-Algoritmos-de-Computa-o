/*QUEST�O 04:
A fun��o logar�tmica � complementar �
potencia��o. Ou seja, uma vez que 3
4
= 81,
podemos ent�o afirmar que log3 81 = 4.
Generalizando, temos que:
base expoente = pot -> log base pot = expoente
Com base nessa descri��o, pede-se o
desenvolvimento de uma fun��o que, dados a e
b, calcule o valor de logab.
Nota: a sua solu��o dever� apresentar um valor
inteiro que, na verdade, ser� a solu��o aproximada
do logaritmo.*/

#include<stdio.h>

int exibirlog(int base, int potencia);
int main(){
	//Declara��o de variavel
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


