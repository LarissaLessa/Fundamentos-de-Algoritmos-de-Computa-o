/*Inicialmente, este vetor, com capacidade para armazenamento 
de CAP n�meros (onde CAP � uma constante), estar� vazio 
(quant = 0). */

#include<stdio.h>
#define CAP 10

void menu ();

int inserir (int vetor[],int *quant, int elemento, int *par, int *impar);
int removervalor(int vetor[],int *quant, int elemento, int *par, int *impar);
int removerelementoposicao (int vetor[],int *quant, int elemento, int *par, int *impar, int *posicao);
int alterarvalor(int vetor[],int *quant, int elemento, int novoelemento, int *par, int *impar);
void exibir (int vetor[], int *quant);
void exibirpares(int vetor[], int *par);
void exibirimpares(int vetor[], int *impar, int *quant);

int main (){
	//Declara��o de variav�l 
	int quant = 0, opcao, vetor[CAP], par=0, impar=0, elemento, resultado, novoelemento, posicao;
	
	do{
		
	//
	menu();
	scanf("%d", &opcao);
		
	switch (opcao)
	  {
	//Op��o (1) Inserir um novo elemento 
	    case 1 :    	
	    //Solicitando elementos ao usu�rio
		printf("Insira o elemento do vetor: \n");
		scanf("%d", &elemento);
		resultado=inserir(vetor, &quant, elemento, &par, &impar);
		
		//Validando se os elemento do vetor foi inserido 
		if(resultado==0){
			printf("Nao foi possivel inserir elemento no vetor!");
		}else{
			printf("O elemento foi inserido com sucesso!");
		}
		
		exibir (vetor, &quant);
	    break;
	
	//Op��o (2) Remover de determinado valor 
	    case 2 :
	    	//Solicitando elemento a ser exclu�do ao usu�rio
	    	printf("Digite o elemento do vetor que deseja remover: \n");
		scanf("%d", &elemento);
		resultado=removervalor(vetor, &quant, elemento, &par, &impar);
		
		
		//Validando se o vetor est� vazio 
		if(resultado==0){
			printf("Nao foi possivel remover elemento no vetor!");
			
		}else{
			printf("O elemento foi removido com sucesso!");
		}
		exibir (vetor, &quant);
	    break;
	
	//Op��o (3) Remover elemento que encontra-se em dada posicao
	    case 3 :
	    	//Solicitando elemento a ser exclu�do ao usu�rio
	    	printf("Digite a posicao do elemento que deseja remover: \n");
		scanf("%d", &posicao);
		resultado= removerelementoposicao (vetor, &quant, elemento, &par, &impar, &posicao);
		
		//Validando se o vetor est� vazio 
		if(resultado==0){
			printf("Nao foi possivel remover elemento no vetor!");
			
		}else{
			printf("O elemento foi removido com sucesso!");
		}
		exibir (vetor, &quant);
		
	    break;
	
	//Op��o (4) Alterar de um valor por outro
	    case 4 :
	    //Solicitando elemento a ser exclu�do ao usu�rio
	    	printf("Digite o elemento do vetor que deseja alterar: \n");
		scanf("%d", &elemento);
		
		printf("Digite o novo elemento do vetor: \n");
		scanf("%d", &novoelemento);
		resultado=alterarvalor(vetor, &quant, elemento, novoelemento, &par, &impar);
		
		//Validando se o vetor est� vazio 
		if(resultado==0){
			printf("Nao foi possivel alterar o elemento no vetor!");
			
		}else{
			printf("O elemento foi removido com sucesso!");
		} 
	    break;
	
	//Op��o (5) Buscar de determinado elemento no vetor    
	    case 5 :
	    //Chamar a fun��o aqui 
	    break;
	 
	//Op��o (6) Exibir de todos os elementos do vetor  
	    case 6 :
	    	exibir (vetor, &quant); 
	    break;
	
	// Op��o (7) Exibir de todos os valores pares   
	    case 7 :
	    	exibirpares(vetor, &par);
	    break;
	 
	//Op��o (8) Exibir de todos os valores impares  
	    case 8 :
		exibirimpares (vetor, &impar, &quant);
	    break;
	    
	//Op��o (9) A opcao de sair do programa.   
	    //Sa�da do sistema
	    case 9: printf ("\n\nFim do programa!\n");
		
		break;
			          
	    default:  printf ("\n\nOpcao invalida! Tente novamente.\n");
		}
		
	//system ("pause");
		
	}while(opcao!=9);
}
/*A execu��o do programa dever� consistir na cont�nua disponibiliza��o 
ao usu�rio de um menu com poss�veis opera��es, de forma que a execu��o 
s� terminar� quando for selecionada a op��o de sa�da.*/
void menu (){

		//Solicitando opcao ao usu�rio
		printf(" (1) Inserir um novo elemento \n (2) Remover de determinado valor \n (3) Remover elemento que encontra-se em dada posicao \n (4) Alterar de um valor por outro \n (5) Buscar de determinado elemento no vetor \n (6) Exibir de todos os elementos do vetor\n (7) Exibir de todos os valores pares\n (8) Exibir de todos os valores impares \n (9) A opcao de sair do programa \n \n Digite o N de acordo como  a opcao desejada: \n");
}

//Op��o (1) Inserir um novo elemento 
int inserir (int vetor[],int *quant, int elemento, int *par, int *impar){
	int i=(*quant), j;
	if((*quant)>CAP){
		//Falso 
		return 0;
	}
	else 
	{
		//Verdadeiro
		if(elemento%2==0)
		{
			while(i>(*par))
			{
				vetor[i]=vetor[i-1];
				i--;
			}
			printf("par");
			vetor[i]=elemento;
			(*par)++;	
		}
		else
		{
			printf("impar");
			vetor[(*par)+(*impar)]=elemento;
			(*impar)++;
		}
	(*quant)++;	
	
	}
	
}

//Op��o (2) Remover de determinado valor 
int removervalor(int vetor[],int *quant, int elemento, int *par, int *impar){
	int i, j, cont=0, p;
	if((*quant)== 0){
		//Falso 
		return 0;
		
	}
	p=0;
	while(p<*quant) //Percorrer o vetor pra tentar encontrar o numero
	{
	
		if(vetor[p]==elemento)
		{
		
			for(i=p+1;i<*quant;i++) //Botando os outros numeros pra 'frente'
			{
				vetor[i-1]=vetor[i];
			}
		(*quant)--;
		cont++;
		
			//Verificando se � par ou impar 
			if(elemento%2==0)
			{
				(*par)--;
			}
			else
			{
				(*impar)--;
			}	
		} //Ele volta pra analisar o mesmo v[p], j� que o conte�do dele � diferente, mas ainda pode ser o mesmo 
		
		else
		{
			p++; //Se for diferente, ele s� cresce normal
		}
		
	}
	return cont; //Quantidade de remo��es 
	
}
//Op��o (3) Remover elemento que encontra-se em dada posicao
int removerelementoposicao (int vetor[],int *quant, int elemento, int *par, int *impar, int posicao){
	int i, j, cont=0, p;
	if((*quant)== 0){
		//Falso 
		return 0;
		
	}
	p=0;
	while(p<*quant) //Percorrer o vetor pra tentar encontrar o numero
	{
	
		if(vetor[p]==posicao)
		{
		
			for(i=p+1;i<*quant;i++) //Botando os outros numeros pra 'frente'
			{
				vetor[i-1]=vetor[i];
			}
		(*quant)--;
		cont++;
		
			//Verificando se � par ou impar 
			if(elemento%2==0)
			{
				(*par)--;
			}
			else
			{
				(*impar)--;
			}	
		} //Ele volta pra analisar o mesmo v[p], j� que o conte�do dele � diferente, mas ainda pode ser o mesmo 
		
		else
		{
			p++; //Se for diferente, ele s� cresce normal
		}
		
	}
	return cont; //Quantidade de remo��es 
	
}

//Op��o (4) Alterar de um valor por outro 
int alterarvalor(int vetor[],int *quant, int elemento, int novoelemento, int *par, int *impar){
	int i, resultado;
	if((*quant)== 0){
		//Falso 
		return 0;
		
	}else {
		//verdadeiro 
		resultado=removervalor(vetor, quant, elemento, par, impar);
		
		while(resultado==i){
			inserir(vetor, quant, novoelemento, par, impar);
			i++;
		}
		
}
}
//Op��o (5) Buscar de determinado elemento no vetor    

//Op��o (6) Exibir de todos os elementos do vetor  
void exibir (int vetor[], int *quant)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\nVetor: ");
	for (i=0;i<*quant;i++)
	{
		printf ("%d  ", vetor[i]);
	}
	printf ("\n\n");
}


// Op��o (7) Exibir de todos os valores pares
void exibirpares(int vetor[], int *par)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\nVetores pares: ");
	for (i=0;i<*par;i++)
	{
		if(vetor[i]%2==0){
			printf ("%d  ", vetor[i]);
		}
		
	}
	printf ("\n\n");
}


//Op��o (8) Exibir de todos os valores impares 
void exibirimpares(int vetor[], int *impar, int *quant)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\nVetores impares: ");
	for (i=(*impar);i<(*quant);i++)
	{
		printf ("%d  ", vetor[i]);		
	}
	printf ("\n\n");
}
