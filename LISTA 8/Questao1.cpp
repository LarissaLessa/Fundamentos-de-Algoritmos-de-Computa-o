/*QUEST�O 01:
Desenvolver uma fun��o que exiba os m�ltiplos
de N compreendidos no intervalo definido por
A e B.*/

#include<stdio.h>

int exibirmultiplos(int num, int a,int b);
int main(){
	//Declara��o de variavel
	int num, a, b, i;
	
	//Solicitando valores
	printf("Digite o valor de N: \n");
  	scanf("%d", &num);
  	
  	printf("Digite o valor de A: \n");
  	scanf("%d", &a);
  	
  	printf("Digite o valor de B: \n");
  	scanf("%d", &b);				
	
	exibirmultiplos(num,a,b);
	return 0;
}

int exibirmultiplos(int num, int a,int b){
	int i, aux;
	
	//Vailidando se A � maior que B
	if(a>b){
		aux=a;
		a=b;
		aux=b;
	}
	
	//Calculando os multiplos de A e B 
	for(i=a; i<=b; i++){
		if(i%num==0){
			printf("%d ", i);
		}	
	}
}
