/*Inicialmente, este vetor, com capacidade para armazenamento 
de CAP números (onde CAP é uma constante), estará vazio 
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
	//Declaração de variavél 
	int quant = 0, opcao, vetor[CAP], par=0, impar=0, elemento, resultado, novoelemento, posicao;
	
	do{
		
	//
	menu();
	scanf("%d", &opcao);
		
	switch (opcao)
	  {
	//Opção (1) Inserir um novo elemento 
	    case 1 :    	
	    //Solicitando elementos ao usuário
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
	
	//Opção (2) Remover de determinado valor 
	    case 2 :
	    	//Solicitando elemento a ser excluído ao usuário
	    	printf("Digite o elemento do vetor que deseja remover: \n");
		scanf("%d", &elemento);
		resultado=removervalor(vetor, &quant, elemento, &par, &impar);
		
		
		//Validando se o vetor está vazio 
		if(resultado==0){
			printf("Nao foi possivel remover elemento no vetor!");
			
		}else{
			printf("O elemento foi removido com sucesso!");
		}
		exibir (vetor, &quant);
	    break;
	
	//Opção (3) Remover elemento que encontra-se em dada posicao
	    case 3 :
	    	//Solicitando elemento a ser excluído ao usuário
	    	printf("Digite a posicao do elemento que deseja remover: \n");
		scanf("%d", &posicao);
		resultado= removerelementoposicao (vetor, &quant, elemento, &par, &impar, &posicao);
		
		//Validando se o vetor está vazio 
		if(resultado==0){
			printf("Nao foi possivel remover elemento no vetor!");
			
		}else{
			printf("O elemento foi removido com sucesso!");
		}
		exibir (vetor, &quant);
		
	    break;
	
	//Opção (4) Alterar de um valor por outro
	    case 4 :
	    //Solicitando elemento a ser excluído ao usuário
	    	printf("Digite o elemento do vetor que deseja alterar: \n");
		scanf("%d", &elemento);
		
		printf("Digite o novo elemento do vetor: \n");
		scanf("%d", &novoelemento);
		resultado=alterarvalor(vetor, &quant, elemento, novoelemento, &par, &impar);
		
		//Validando se o vetor está vazio 
		if(resultado==0){
			printf("Nao foi possivel alterar o elemento no vetor!");
			
		}else{
			printf("O elemento foi removido com sucesso!");
		} 
	    break;
	
	//Opção (5) Buscar de determinado elemento no vetor    
	    case 5 :
	    //Chamar a função aqui 
	    break;
	 
	//Opção (6) Exibir de todos os elementos do vetor  
	    case 6 :
	    	exibir (vetor, &quant); 
	    break;
	
	// Opção (7) Exibir de todos os valores pares   
	    case 7 :
	    	exibirpares(vetor, &par);
	    break;
	 
	//Opção (8) Exibir de todos os valores impares  
	    case 8 :
		exibirimpares (vetor, &impar, &quant);
	    break;
	    
	//Opção (9) A opcao de sair do programa.   
	    //Saída do sistema
	    case 9: printf ("\n\nFim do programa!\n");
		
		break;
			          
	    default:  printf ("\n\nOpcao invalida! Tente novamente.\n");
		}
		
	//system ("pause");
		
	}while(opcao!=9);
}
/*A execução do programa deverá consistir na contínua disponibilização 
ao usuário de um menu com possíveis operações, de forma que a execução 
só terminará quando for selecionada a opção de saída.*/
void menu (){

		//Solicitando opcao ao usuário
		printf(" (1) Inserir um novo elemento \n (2) Remover de determinado valor \n (3) Remover elemento que encontra-se em dada posicao \n (4) Alterar de um valor por outro \n (5) Buscar de determinado elemento no vetor \n (6) Exibir de todos os elementos do vetor\n (7) Exibir de todos os valores pares\n (8) Exibir de todos os valores impares \n (9) A opcao de sair do programa \n \n Digite o N de acordo como  a opcao desejada: \n");
}

//Opção (1) Inserir um novo elemento 
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

//Opção (2) Remover de determinado valor 
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
		
			//Verificando se é par ou impar 
			if(elemento%2==0)
			{
				(*par)--;
			}
			else
			{
				(*impar)--;
			}	
		} //Ele volta pra analisar o mesmo v[p], já que o conteúdo dele é diferente, mas ainda pode ser o mesmo 
		
		else
		{
			p++; //Se for diferente, ele só cresce normal
		}
		
	}
	return cont; //Quantidade de remoções 
	
}
//Opção (3) Remover elemento que encontra-se em dada posicao
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
		
			//Verificando se é par ou impar 
			if(elemento%2==0)
			{
				(*par)--;
			}
			else
			{
				(*impar)--;
			}	
		} //Ele volta pra analisar o mesmo v[p], já que o conteúdo dele é diferente, mas ainda pode ser o mesmo 
		
		else
		{
			p++; //Se for diferente, ele só cresce normal
		}
		
	}
	return cont; //Quantidade de remoções 
	
}

//Opção (4) Alterar de um valor por outro 
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
//Opção (5) Buscar de determinado elemento no vetor    

//Opção (6) Exibir de todos os elementos do vetor  
void exibir (int vetor[], int *quant)
{
	//declaração de variáveis
	int i;
	
	printf ("\nVetor: ");
	for (i=0;i<*quant;i++)
	{
		printf ("%d  ", vetor[i]);
	}
	printf ("\n\n");
}


// Opção (7) Exibir de todos os valores pares
void exibirpares(int vetor[], int *par)
{
	//declaração de variáveis
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


//Opção (8) Exibir de todos os valores impares 
void exibirimpares(int vetor[], int *impar, int *quant)
{
	//declaração de variáveis
	int i;
	
	printf ("\nVetores impares: ");
	for (i=(*impar);i<(*quant);i++)
	{
		printf ("%d  ", vetor[i]);		
	}
	printf ("\n\n");
}
