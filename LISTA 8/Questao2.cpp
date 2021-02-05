/*QUESTÃO 02:
Implementar uma função que converta
determinada temperatura em graus Celsius
para graus Fahrenheit.*/


#include<stdio.h>
float temperatura(float celsius);
int main(){
	//Declarando variavel
	float celsius;
	//solicitando valores
	printf("Digite a temperatura em graus Celsius: \n");
	scanf("%f", &celsius);
	
	temperatura(celsius);
	return 0;
}

float temperatura(int celsius){
	float fahrenheit;
	fahrenheit=celsius*1.8+32;
	
	return fahrenheit;
	/*
	outra opção 
	return fahrenheit=celsius*1.8+32;
	
	*/
	
}


