/*Questão 02: Considere a existência de dois 
conjuntos numéricos A e B contendo n1 e n2 
elementos, respectivamente. Pede-se o 
desenvolvimento de uma função que determine 
se um dos conjuntos está contido no outro, 
retornando os seguintes códigos: 
1, se A estiver contido em B; 2, se B estiver 
contido em A; 0, caso contrário. Observação: 
considerar que não existe repetição de 
elementos em A e nem em B 
(porém, podendo existir elementos que 
estejam tanto em A quanto em B).*/

#include<stdio.h>
#define TAM 10

int contido(int n1, int n2, int vetorA[], int vetorB[]);

int main(){
	//Declaração de variavel
	int i, j, n1, n2, vetorA[TAM], vetorB[TAM];
	
	//Lendo valores dos conjuntos
	printf("Digite quantidade do conjunto A: \n");
	scanf("%d", &n1);
	
	printf("Digite quantidade do conjunto B: \n");
	scanf("%d", &n2);

	for(i =0; i < n1; i++){
		printf("%d valor do conjunto A: \n" ,i+1);
		scanf("%d", &vetorA[i]);
	}
	
	for(j=0; j < n2; j++){
		printf("%d valor do conjunto B: \n", j+1);
		scanf("%d", &vetorB[j]);	
	}
	
	printf("%d\n", contido(n1, n2, vetorA, vetorB));
	printf("%d\n", contido(n2, n1, vetorB, vetorA));
	printf("%d\n", contido(n1, n1, vetorA, vetorA));
	printf("%d\n", contido(n2, n2, vetorB, vetorB));
}

int contido(int n1, int n2, int vetorA[], int vetorB[]){
	int i, j , vetMaior[TAM], vetMenor[TAM], maior, menor, cont=0 ;
	

	if(n1>n2){
	maior = n1;
	menor = n2;

	for(i=0; i<n1;i++)
	{
		vetMaior[i] = vetorA[i];
 	}

	for(i=0; i<n2;i++)
	{
		vetMenor[i] = vetorB[i];
 	}

	
}
else{
	maior = n2;
	menor = n1;

	for(i=0; i<n1;i++)
	{
		vetMenor[i] = vetorA[i];
 	}
	
	for(i=0; i<n2;i++)
	{
		vetMaior[i] = vetorB[i];
 	}
}


// varrrer o vetor menor
for(i=0;i<menor;i++)
{
	cont = 0;
	// varrer o vetor maior
	for(j=0;j<maior;j++)
	{
		if(vetMenor[i] == vetMaior[j])
		{
			cont++;
		}
	}

	if(cont == 0)
	{
		return 0;
	}
}

if(maior == n1)
{
	//vetor A eh maior, B está contido em A
	return 2;
}
else{
	//vetor B eh maior, A está contido em B
	return 1;
}


}
