/* QUESTÃO DA AV2 -
Larissa Gomes Lessa de Souza Cosme 
larissa.1920478300040@faeterj-rio.edu.br
1920478300040
*/

#include<stdio.h>
#define TAM 10


void exibir (int vetA[], int vetB[], int *quantA, int *quantB);
int remover (int vetA[],int vetB[], int *quantA, int *quantB);

int main (){
	//Declaração de variavél 
	int quantA=10, quantB=6, vetA[quantA]={8,4,2,6,4,1,5,2,6,7}, vetB[quantB]={2,3,4,8,1,4};
	

}

int remover (int vetA[],int vetB[], int *quantA, int *quantB){
	int i, j;
	for(i=0; i<(*quantA); i++){
		for(j=0; j<(*quantB); j++){
			if(vetA[i]==vetB[j]){
				//vetA[i-1]=vetA;
			}
		}
	}
}
void exibir (int vetA[], int vetB[], int *quantA, int *quantB)
{
	//declaração de variáveis
	int i;
	
	printf ("\nVetor: ");
	for (i=0;i<quantA;i++)
	{
		printf ("%d  ", vetor[i]);
	}
	printf ("\n\n");
}
