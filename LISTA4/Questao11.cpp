/*QUEST�O 11:
Implementar um programa no qual o
usu�rio informa um n�mero e verifica-se se
ele � um n�mero triangular.
Obs.: Um n�mero � triangular quando ele
for resultado do produto de tr�s n�meros
consecutivos.
Exemplo: 24 = 2 x 3 x 4.*/

#include<stdio.h>

int main(){
	//Declara��o de variavel
	int n,i;
	//Solicitando valores
	printf("Digite um numero:\n");
	scanf("%d", &n);
	
	//Verificando se o numero � triangular 
	
	while(i*(i+1)*(i+2)<n){
		i++;
	}
	
	if(i*(i+1)*(i+2) == n){
		printf("\n \n  %d e triangular. Ele e de %d X %d X %d", n, i, i+1, i+2);
	}else{
		printf("O numero nao e triangular");
	}


}
