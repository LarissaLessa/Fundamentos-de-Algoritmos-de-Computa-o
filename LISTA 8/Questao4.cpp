/*QUEST�O 04:
Fazer uma fun��o que calcule o MDC (m�ximo
divisor comum) entre dois n�meros.*/


#include<stdio.h>

int mdc(int n1, int n2);
int main(){
	//Declara��o de variavel
	int n1, n2, resultado;
	
	//Solicitando valores
	printf("Digite o valor de N1: \n");
  	scanf("%d", &n1);
  	
  	printf("Digite o valor de N2: \n");
  	scanf("%d", &n2);
  	resultado = mdc (n1,n2);
	printf ("%d", resultado);
	
}
int mdc(int n1, int n2){
	int i, menor, resp;
	
	//Vailidando se n1 � maior que n2
	if (n1 < n2)
	{
		menor = n1;
	}
	else
	{
		menor = n2;
	}
	//Calculando o m�ximo divisor comum
	for(i=1; i<=menor; i++){
		if((n1%i==0) && (n2%i==0)){	
			resp = i;
		}	
	}
	
	return resp;
}


