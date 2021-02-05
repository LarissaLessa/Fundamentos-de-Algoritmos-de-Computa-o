/* I QUESTÃO DA AV1
Larissa Gomes Lessa de Souza Cosme 
larissa.1920478300040@faeterj-rio.edu.br
1920478300040
*/

#include<stdio.h>
int main(){
	//Declaração de variáveis 
	int i, j , n=1 , y, cont=0;
	

	
		//Solicintando valores 
		printf("Digite o valor de N: \n");
		scanf("%d", &n);
	
	//Validando o N
	if(n<0){
		printf("Numero invalido");
	}else{
		//For para rodar até a quantidade de números 
		for(i=1; i<=n; i++){
		
			for(j=n; j>=1; j--){
				
				if((i!=n) && (j!=n) && (i!=j)){ //Validando se os numeros são iguais 
				
				printf("%d %d %d \n", j, n, i); //Exibindo as combinações
					
				cont++;//contando a quantidade de combinações
			}	
				
		
		}
	}
	
	printf("Total: %d combinacoes", cont); //Exibindo a quantidade de combinações
	}
		

}
