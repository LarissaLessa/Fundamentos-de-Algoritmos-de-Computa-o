/*QUEST�O 03: Implementar um programa que 
calcule o valor de base elevado a expoente, 
onde base e expoente s�o n�meros inteiros 
dados pelo usu�rio.*/

#include <stdio.h>

int main (){
	//Declarando variavel
	 int base, expoente, i, resultado;
	//Solicintando base 
	printf("Digite o valor da base:\n");
	scanf("%d", &base);
	
	//Solicitando expoente
	printf("Digite o valor do expoente:\n");
	scanf("%d", &expoente);
	
	//Verificando se o expoente � igual a 0 
	if(expoente==0){
		resultado=1;
	}
	else{
		//For para o I rodar at� o expoente 
		for(i=1; i<expoente; i++){
			resultado=resultado*base;
			}	
	}
	
	printf("Resultado: \n %d", resultado);
}
