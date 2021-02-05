/*QUESTÃO 05:
Fazer uma função que calcule o MMC (mínimo
múltiplo comum) entre dois números.*/
	

#include<stdio.h>

int mmc(int n1, int n2);
int main(){
	//Declaração de variavel
	int n1, n2, resultado;
	
	//Solicitando valores
	printf("Digite o valor de N1: \n");
  	scanf("%d", &n1);
  	
  	printf("Digite o valor de N2: \n");
  	scanf("%d", &n2);
  	
  	resultado = mmc (n1, n2);
	printf ("%d", resultado);
	
}
int mmc(int n1, int n2){
	int i, maior, resp=0;
	
	//Vailidando se n1 é maior que n2
	if (n1 > n2)
	{
		maior = n1;
	}
	else
	{
		maior = n2;
	}
	
	//Calculando o máximo divisor comum
	for(i=1; i<=maior; i++){
		
		if((n1%i==0) && (n2%i==0)){	
			resp = i;
			resp = resp * resp;
		}	
	}
	
	return resp;
}

