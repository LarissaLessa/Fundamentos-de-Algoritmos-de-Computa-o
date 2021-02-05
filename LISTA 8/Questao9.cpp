/*QUESTÃO 09:
Implementar uma função que, dado um
número inteiro, calcule (e retorne) a soma e a
média de seus divisores.*/

#include<stdio.h>

void somamedia(int num, float *media, int *soma);

int main(){
	int num, soma;
	float media;
	
	printf("Digite o numero: \n");
	scanf("%d", &num);
	
	somamedia(num, &media, &soma);
	printf("Soma: %d \n Media dos divisores: %.2f ", soma, media);
}

void somamedia(int num, float *media, int *soma){
	int i, cont=0;
		(*soma)=0;
	for(i=1; i<=num; i++){
		
		if(num%i==0){
			cont++;
			(*soma)= (*soma)+i;
		}
	}
	(*media) = (float)(*soma)/cont; 
}
