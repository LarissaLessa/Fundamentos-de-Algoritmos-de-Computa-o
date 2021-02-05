/*QUESTÃO 03:
Fazer uma função leituraDados que permaneça
lendo valores reais até que o número 0 seja
digitado. Ao final, a função deve determinar a
quantidade de elementos fornecidos (excluindo
o 0) e o maior dentre eles.*/

#include<stdio.h>

void leituradados(float num, float *maior, int *cont);
int main(){ 
	int num, cont;
	float maior;
	
	
	leituradados(num, &maior,  &cont);
	
	printf("Quandidade de elementos fornecidos: %d \nMaior dentre eles: %.2f", cont, maior);
}

void leituradados(float num, float *maior, int *cont){
	(*cont)=0;
	do{
		printf("Digite o numero: \n");
		scanf("%f", &num);
		
		if(num!=0){
			(*cont)++;
		}
		
		if(num>(*maior)){
			(*maior)=num;
			}
				
	}while(num!=0);
}
