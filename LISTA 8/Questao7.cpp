/*QUESTÃO 07:
Implementar uma função que, dado um
número inteiro n, e o intervalo definido pelos
números a e b, determine quantos valores do
intervalo possuem divisores (sendo estes
diferentes de 1) que também sejam divisores
de n.
Exemplo:
n = 6
a = 10 e b = 20
Resposta = 7 (pois os números 10, 12, 14,
15, 16, 18 e 20 possuem divisores em
comum com o número 6)*/

#include<stdio.h>

int divisores(int num, int a, int b);

int main (){
	int num, a, b;
	
	printf("Digite numero: \n");
	scanf("%d", &num);
	
	printf("Digite dois numeros para intervalo de dos divisores: \n");
	scanf("%d", &a);
	
	printf("Digite dois numeros para intervalo de dos divisores: \n");
	scanf("%d", &b);
	
	printf("Resultado: %d",divisores(num, a, b));
}

int divisores(int num, int a, int b){
	int maior, menor, i, j, cont, divisores=0;
	if(a>b){
		maior = a;
		menor = b;
	}else{
		menor = a;
		maior = b;
	}
	

	for(i=menor; i<=maior; i++){
		cont =0;		
		for(j=2; j<=num; j++){
			
			if((num%j==0)&&(i%j==0)){
				cont++;
			}		
		}
		
		if(cont >= 1){
			divisores++;
		}
	}
	return divisores;
}
