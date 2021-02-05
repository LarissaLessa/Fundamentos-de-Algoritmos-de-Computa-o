/* II QUESTÃO DA AV1
Larissa Gomes Lessa de Souza Cosme 
larissa.1920478300040@faeterj-rio.edu.br
1920478300040
*/
#include<stdio.h>
void leituraDados(int *quant, int*distintos);

//main
int main ()
{
	//declaração de variáveis
	int quant, distintos;
	
	//chamando a função
	leituraDados (&quant, &distintos);
	
	//exibindo os resultados
	printf ("Quantidade de valores: %d\nQuantidade de valores distintos: %d\n", quant, distintos);	
}

//Função 
void leituraDados(int *quant, int *distintos){
	//Declaração de variavel
	int valor, maior = -9999, cont=0, diferente, dis=0;
	
	// DoWhile para Testar ser valores são maior ou igual ao valor anterior
	do{
		//Solicitando valores
		printf("Digite valor: \n");
		scanf("%d", &valor);
		
		//Testando a quantidade de valores fornecidos
		if(valor>=maior){
			maior=valor;
			cont++;
	
	
			//Testando validando numeros distintos
			if(valor!=diferente){
			diferente=valor;
			dis++;
			}
		}
		
				
		
	}while(valor>=maior);
	
	//retornando os resultados
	*quant = cont+1;
	
	*distintos = dis;
}


