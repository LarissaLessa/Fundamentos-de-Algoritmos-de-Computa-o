/* QUESTÃO DA AV2 -
Larissa Gomes Lessa de Souza Cosme 
larissa.1920478300040@faeterj-rio.edu.br
1920478300040
*/

#include<stdio.h>
#define TAM 10


void exibirvetora (int vetA[], int *quantA);
void exibirvetorb (int vetB[], int *quantB);
int remover (int vetA[],int vetB[], int *quantA, int *quantB);

int main (){
	//Declaração de variavél 
	int quantA=10, quantB=6, vetA[quantA]={8,4,2,6,4,1,5,2,6,7}, vetB[quantB]={2,3,4,8,1,4};
	
	//exibindo 
	exibirvetora (vetA, &quantA);
	exibirvetorb (vetB, &quantB);
	
	
	//Removendo elementos do vetor
	remover (vetA, vetB, &quantA, &quantB);
	
	//Exibindo
	exibirvetora (vetA, &quantA);
	exibirvetorb (vetB, &quantB);
	
	

}

int remover (int vetA[],int vetB[], int *quantA, int *quantB){
	int i, j, aux=0;
	vetA[quantA];
	for(i=0; i<(*quantA); i++){
		for(j=0; j<(*quantB); j++){
			if(vetA[i] == vetB[j]){
				aux=vetA[i];
				vetA[i]= vetA [i+1];
				vetA[i+1]=aux;
				*(quantA)--;
			}	
		}
		
	}
}
void exibirvetora (int vetA[], int *quantA)
{

	int i;
	
	printf ("\nVetor A: ");
	for (i=0;i<*quantA;i++)
	{
		printf ("%d  ", vetA[i]);
	}
	printf ("\n\n");
}
void exibirvetorb (int vetB[], int *quantB)
{
	int i;
	
	printf ("\nVetor B: ");
	for (i=0;i<*quantB;i++)
	{
		printf ("%d  ", vetB[i]);
	}
	printf ("\n\n");
}
