/*QUESTÃO 05: Elabore um programa que
calcule a média ponderada de n elementos.
Observação: na média ponderada, cada
elemento possui um peso que representa a
sua contribuição no cálculo da média final.*/

#include<stdio.h>

int main(){
	//Declaração de variavel 
	int i,quantnotas;
	float nota, peso, media=0, media2=0;
	//Solicintando quantidade de notas
	printf("Digite quantidade de notas: \n");
	scanf("%d", &quantnotas);
	
	//
	for(i=1;i<=quantnotas;i++){
		printf("Digite nota: \n");
		scanf("%f", &nota);
		
		printf("Digite o peso da nota: \n");
		scanf("%f", &peso);
		
		media=(nota*peso)+media;
		
		media2=media2+peso;
	}
	printf("A media ponderada: %2f \n", media/media2);
}
