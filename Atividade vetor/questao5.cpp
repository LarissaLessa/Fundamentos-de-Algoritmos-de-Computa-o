/*Quest�o 05: Implementar uma fun��o que, dado um vetor contendo 
n�meros reais, determine o maior e o segundo maior elementos. 
Nota: considerar que n�o h� repeti��o de elementos no vetor.*/
#include <stdio.h>

#define TAM 10

//prot�tipos das fun��es
float determine (float v[], float tamVetor, float * maior, float *maior2);

int main (){
	//declara��o de vari�veis
	float maior=-500, maior2=-999, vetor[TAM] = {5.0,4,2,6,1,7,9,8,3,10} ;
		
	determine(vetor, &maior, &maior2);
	printf("Maior: %.2f \n Maior2: %.2f", maior, maior2);	
}

//implementa��o das fun��es
float determine (float v[], float tamVetor, float *maior, float *maior2)
{
	int i;
	
	//Testando os valores 
	for (i=0;i<tamVetor;i++)
	{
		if(v[i]> (*maior)){
               		(*maior)=v[i];			
		}else{
			if(v[i]> (*maior2)){
				
				(*maior2)=v[i];
			}
		}
			
	
	}
}
