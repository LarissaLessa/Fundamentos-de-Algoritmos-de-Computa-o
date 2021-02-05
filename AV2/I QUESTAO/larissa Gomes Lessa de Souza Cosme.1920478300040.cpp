/* QUESTÃO DA AV2 -
Larissa Gomes Lessa de Souza Cosme 
larissa.1920478300040@faeterj-rio.edu.br
1920478300040
*/

#include<stdio.h>

#define QUANT 10
void exibir (int vetor[], int tamanho);

int mudancasdeelementos(int vetor[], int tamanho);

int main(){
	//Declaração de variavel
	int vetor[QUANT] = {7, 17, 25, 32, 3, 8, 20, 29, 15,22};
	
	//exibindo o vetor antes da troca
	exibir (vetor, QUANT);
	
	//Realizando as mudanças
	mudancasdeelementos(vetor, QUANT);
	
	//exibinado o vetor apos a troca
	exibir (vetor, QUANT);
}
int mudancasdeelementos(int vetor[], int QUANT)
{
	//declaração de variáveis
	int pos1, pos2, i, maior, menor, aux, cont=0;
	
	
	printf("Selecione a primeira posicao do intervalo de 0 a 9: \n");
	scanf("%d", &pos1);
	
	printf("Selecione a segunda posicao do intervalo de 0 a 9: \n");
	scanf("%d", &pos2);
	
	//Verificando se a primeira posição é maior que a segunda
	if( (pos1> tamanho ) || (pos2 > tamanho)){
		return 0; //Caso pos1 ou pos2 seja uma posição inválida, a função deverá retornar o valor 0;
	}else{
		
		if(pos1>pos2){
			maior=pos1;
			menor=pos2;
			
		}else{
			maior=pos2;
			menor=pos1;
		}
		//For pra fazer a mudação nas posições
		for (i=maior;i>menor;i--)
		{
			if(vetor[i]%2==0){
			aux = vetor[i];
			vetor [i] = vetor[i+1];
			vetor[i] = aux;				
			}else{
			aux = vetor[i];
			vetor [i] = vetor[i+2];	
			vetor[i] = aux;
			}
		    		
		}
	}
		
	}
	
	
void exibir (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\nVetor: ");
	for (i=0;i<tamanho;i++)
	{
		printf ("%d  ", vetor[i]);
	}
	printf ("\n\n");
}
