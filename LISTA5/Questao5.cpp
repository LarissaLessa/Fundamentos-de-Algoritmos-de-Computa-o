/*QUEST�O 05: Elabore um programa que
calcule a m�dia ponderada de n elementos.
Observa��o: na m�dia ponderada, cada
elemento possui um peso que representa a
sua contribui��o no c�lculo da m�dia final.*/

#include<stdio.h>

int main(){
	//Declara��o de variavel 
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
