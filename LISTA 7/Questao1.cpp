/*Quest�o 01:
Dados tr�s n�meros inteiros a, b e c,
implementar um programa que exiba os
n�meros do intervalo definido por a e b
(sempre come�ando em a e terminando em b),
com exce��o daqueles que sejam m�ltiplos de
c.
Exemplos:
a = 10, b = 20, c = 3
Sa�da: 10, 11, 13, 14, 16, 17, 19, 20
a = 25, b = 18, c = 5
Sa�da: 24, 23, 22, 21, 19, 18*/

#include<stdio.h>

int main(){
	//declara��o de variavel
	int i, a, b, c;
	
	//Solicitando A B e C
	printf("Digite o valor de A:\n");
	scanf("%d", &a);
	
	printf("Digite o valor de B:\n");
	scanf("%d", &b);
	
	printf("Digite o valor de C:\n");
	scanf("%d", &c);
	
	for(i=a; i<=b ;i++){//For pra rodar at� o valor d
		if(i%3!=0){ //Testar se o i � multiplo de 3 
			printf(" %d ", i); //Imprimir os numeros 
		}
	}

}
