/*QUEST�O 01:
Desenvolver uma fun��o que, dado um n�mero
inteiro n, exiba todos os n�meros existentes no
intervalo definido por a e b (a < b), exceto
aqueles que forem m�ltiplos de n.*/
#include<stdio.h>

int exibanumeros(int n, int a, int b);

int main(){
	int n, a, b;
	
	printf("Digite N: ");
	scanf("%d", &n);
	
	printf("Digite A: ");
	scanf("%d", &a);
	
	printf("Digite B: ");
	scanf("%d", &b);
	
	exibanumeros(n, a, b);
	
}
int exibanumeros(int n, int a, int b){
	int i;
	for(i=a; i<=b; i++){
		if(i%n != 0){
			
			printf("%d ", i);
		}
	}
}
