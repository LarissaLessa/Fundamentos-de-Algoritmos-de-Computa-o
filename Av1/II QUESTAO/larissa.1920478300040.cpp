/* II QUEST�O DA AV1
Larissa Gomes Lessa de Souza Cosme 
larissa.1920478300040@faeterj-rio.edu.br
1920478300040
*/
#include<stdio.h>
void leituraDados(int *quant, int*distintos);

//main
int main ()
{
	//declara��o de vari�veis
	int quant, distintos;
	
	//chamando a fun��o
	leituraDados (&quant, &distintos);
	
	//exibindo os resultados
	printf ("Quantidade de valores: %d\nQuantidade de valores distintos: %d\n", quant, distintos);	
}

//Fun��o 
void leituraDados(int *quant, int *distintos){
	//Declara��o de variavel
	int valor, maior = -9999, cont=0, diferente, dis=0;
	
	// DoWhile para Testar ser valores s�o maior ou igual ao valor anterior
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


