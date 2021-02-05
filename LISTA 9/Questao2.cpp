/*QUESTÃO 02: Dados dois números inteiros A e B, fazer 
uma função que determine o número de potências de 2 
existentes no intervalo definido pelos dois valores, 
assim como a maior delas.*/

#include<stdio.h>
int potencias(int a, int b);
int main(){
	//Declaração de variavel
	int a, b;
	
	//Solicitando valores
	printf("Digite numero: \n");
  	scanf("%d", &a);
  	
  	printf("Digite numero: \n");
  	scanf("%d", &b);
  	
  	potencias(a, b);
	
}
int potencias(int a, int b){
	int i, menor, maior, j, cont;
	if(a > b){
		maior = a;
		menor = b;
	}else{
		menor = a;
		maior= b;
	}
	
	for(i=menor; i<=maior; i++){
		j=i;
		cont=2;
		while (cont!=1){
			
			if(j%2==0){
				
				j = j/2;	
		
			}
			else{
				cont=1;
			}
			
		}
		if(j==1)
		{
			printf("%d ", i);
		}
	}	
}
