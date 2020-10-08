/*QUESTÃO 06: Escrever um algoritmo que,
dados um número inteiro i e três valores a, b e
c, apresente os 3 números na ordem definida
por i, como descrito abaixo:
a) i = 1: os três valores em ordem crescente;
b) i = 2: os três valores em ordem decrescente;
c) i = 3: o maior valor deve ser apresentado no
meio dos outros.*/

#include <stdio.h>

int main(){  
	//Declarando variavel 
	int i, a,b,c, maior;
	
	//Solicintando valores 
	printf(" a) i = 1: os três valores em ordem crescente; \n b) i = 2: os três valores em ordem decrescente; \n c) i = 3: o maior valor deve ser apresentado no \n Digite o valor de i:\n");
         scanf("%d", &i);
	
	printf("Digite o valor de A:\n");
	scanf("%d", &a);
	
	printf("Digite o valor de B: \n");
	scanf("%d", &b);
	
	printf("Digite o valor de C: \n");
	scanf("%d", &c);
	
	if(a>b && a>c){
		maior=a;
	}else{
		if(b>a && b>c){
			maior=b;
		}else{
			if(c>b && c>a){
				maior = c;
			}
		}
	}

}
