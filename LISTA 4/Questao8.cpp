/*QUESTÃO 08: Faça um programa que leia
um número real x e um número inteiro y.
Em seguida, o programa deve ler 100
números reais e calcular quantos destes
estão no intervalo definido por [x-y,x+y].
	Exemplo:
	
	x = 10 
	y = 3
	
	numeros: 4 8 9 10 7 2 6 14 12


*/

#include<stdio.h>
#define QUANT 10
int main(){
	//Declaração de variavel
	int x, i, cont=0;
	float y, inicio, fim, valor;
	//Solicitando valores
	
		printf("Digite o valor de X: \n");
		scanf("%d", &x);
		
		printf("Digite o valor de Y: \n");
		scanf("%f", &y);	
		
		//calculandp os limites do intervalo
		inicio = x - y;
		fim = x + y;
		
		printf("\n \n");
		
	for(i=1; i<QUANT; i++){
		printf("%do. valor: ", i);
		scanf("%f", &valor);
		
		if((valor >= inicio)&& (valor <=fim)){
			cont++;
		}	
	}
		
		
	//Exibindo o resultado 
	printf("%d elementos foram informados no intervalo [%.1f, %.1f]", cont, inicio, fim);
}
	

}
