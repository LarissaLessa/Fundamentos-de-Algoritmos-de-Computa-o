/*Trabalho para compor a nota da AV1 e Av2 
 



 
	 	Larissa Gomes Lessa de Souza cosme 
 		Turma B - Quinta 
 		larissa.1920478300040@faeterj-rio.edu.br
 		Matricula: 1920478300040
 
 
 


Pede-se o desenvolvimento de um programa que manipule um vetor de inteiros positivos, de forma que os pares fiquem no início da estrutura e os ímpares ao seu final.
Inicialmente, este vetor, com capacidade para armazenamento de CAP números (onde CAP é uma constante), estará vazio (quant = 0). 

A execução do programa deverá consistir na contínua disponibilização ao usuário de um menu com possíveis operações, de forma que a execução só terminará quando for selecionada a opção de saída.

As operações que serão disponibilizadas ao usuário
são:

i. Inserção de um novo elemento;

ii. Remoção de determinado valor (por exemplo, remover o número 10 no vetor);

iii. Remoção do elemento que encontra-se em dada posição (por exemplo, remover o elemento da posição 5 do vetor);

iv. Alteração de um valor por outro (por exemplo, alterar o no 10 pelo número 8). Atenção a esta operação, em especial quando a paridade dos números envolvidos for distinta;

v. Busca de determinado elemento no vetor, retornando a sua posição, se encontrado no vetor, ou o valor -1, caso contrário;

vi. Exibição de todos os elementos do vetor;

vii. Exibição de todos os valores pares;

viii. Exibição de todos os valores ímpares.

ix. E, por último, a opção de sair do programa.

Destaca-se ainda que não é permitida a repetição de
elementos no vetor.

*/

#include<stdio.h>
#define CAP 10

//Protótipo das funções
void menu ();
//(1) Inserir um novo elemento 
int inserir (int vetor[], int *quant, int elemento, int *par, int *impar);
//(2) Remover de determinado valor
int removervalor(int vetor[], int *quant, int elemento, int *par, int *impar);
//(3) Remover elemento que encontra-se em dada posicao
int removerpos(int vetor[],int *quant, int elemento, int *par, int *impar, int posicao);
//(4) Alterar de um valor por outro 
int alterarvalor(int vetor[],int *quant, int elemento, int novoelemento, int *par, int *impar);
//(5) Buscar de determinado elemento no vetor
int buscaelemento(int vetor[], int quant, int elemento);
//(6) Exibir de todos os elementos do vetor
void exibir (int vetor[], int quant);
//(7) Exibir de todos os valores pares
void exibirpares(int vetor[], int par);
//(8) Exibir de todos os valores impares
void exibirimpares(int vetor[], int impar, int quant);


int main (){
	//Declaração de variavél 
	int quant = 0, opcao, vetor[CAP], par=0, impar=0, elemento, resultado, novoelemento, posicao;
	
	do{
		
	//EXIBINDO MENU 
	menu();
	scanf("%d", &opcao);
	
	//Validando a opção escolhida pelo usuário	
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
			printf("Nao foi possivel inserir elemento no vetor! \n");
		}else{
			printf("O elemento foi inserido com sucesso! \n");
		}
			
		exibir (vetor, quant);
	    break;
	
	//Opção (2) Remover de determinado valor 
	    case 2 :
	    	//Solicitando elemento a ser excluído ao usuário
	    	printf("Digite o elemento do vetor que deseja remover: \n");
		scanf("%d", &elemento);
		resultado=removervalor(vetor, &quant, elemento, &par, &impar);
		
		
		//Validando se o vetor está vazio 
		if(resultado==0){
			printf("Nao foi possivel remover elemento no vetor! \n");
			
		}else{
			printf("O elemento foi removido com sucesso! \n");
		}
	    break;
	
	//Opção (3) Remover elemento que encontra-se em dada posicao
	    case 3 :
	    	//Solicitando elemento a ser excluído ao usuário
	    	printf("Digite a posicao do elemento que deseja remover: \n");
		scanf("%d", &posicao);
		resultado=removerpos(vetor, &quant, elemento, &par, &impar, posicao);
		
		//Validando se o vetor está vazio 
		if(resultado==0){
			printf("Nao foi possivel remover elemento no vetor! \n");
			
		}else{
			printf("O elemento foi removido com sucesso! \n");
		}
	    break;
	
	//Opção (4) Alterar de um valor por outro
	    case 4 :
	    //Solicitando elemento ao usuário
	    	printf("Digite o elemento do vetor que deseja alterar: \n");
		scanf("%d", &elemento);
		//Solicitando novo elemento ao usuário
		printf("Digite o novo elemento do vetor: \n");
		scanf("%d", &novoelemento);
		resultado=alterarvalor(vetor, &quant, elemento, novoelemento, &par, &impar);
		
		//Validando se o vetor está vazio 
		if(resultado==0){
			printf("Nao foi possivel alterar o elemento no vetor! \n");
			
		}else{
			printf("O elemento foi alterado com sucesso! \n");
		} 
		exibir (vetor, quant);
	    break;
	
	//Opção (5) Buscar de determinado elemento no vetor    
	    case 5 :
	    	printf("Digite o elemento do vetor que buscar: \n");
		scanf("%d", &elemento);
	    	resultado=buscaelemento(vetor, quant, elemento);
	    	
	    	if(resultado==-1){
			printf("Nao foi buscar o elemento no vetor! \n");
			
		}else{
			printf("Foi encontrar o elemento no vetor! \n");
		} 
	    break;
	 
	//Opção (6) Exibir de todos os elementos do vetor  
	    case 6 :
	    	exibir (vetor, quant); 
	    break;
	
	// Opção (7) Exibir de todos os valores pares   
	    case 7 :
	    	exibirpares(vetor, par);
	    break;
	 
	//Opção (8) Exibir de todos os valores impares  
	    case 8 :
		exibirimpares (vetor, impar, quant);
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
	
	//Declaração de função
	int i=(*quant), j;
	
	//Validando se o capacidade se encontra vazia e verificando se o elemento informado é repetido
	if((*quant)>CAP || (buscaelemento(vetor, *quant, elemento)!=-1)){
		//Falso 
		return 0;
	}
	else 
	{
		//Validando se o numero é par ou impar
		if(elemento%2==0)
		{
			while(i>(*par))
			{
				vetor[i]=vetor[i-1];
				i--;
			}
				//Posição vai receber elemento par
				vetor[i]=elemento;
				(*par)++;		
		}
		else
		{
			//Posição vao receber elemento impar 
			vetor[(*par)+(*impar)]=elemento;
			(*impar)++;
		}
	(*quant)++;	
	
}
}

//Opção (2) Remover de determinado valor 
int removervalor(int vetor[],int *quant, int elemento, int *par, int *impar){
	//Declarando variaveis 
	int i, j, cont=0, p;
	
	//Validando se o vetor está vazio
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
int removerpos(int vetor[],int *quant, int elemento, int *par, int *impar, int posicao){
	//Declaração de variavel
	int i, j, cont=0, p;
	
	//Validando se a capacidade se encontra vazio
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
	//Declaração de variavel
	int i, j;
	if(((*quant)== 0) || (buscaelemento(vetor, *quant, elemento)==-1) || (buscaelemento(vetor, *quant, novoelemento)!=-1)){
		//Falso 
		return 0;
		
	}
	// Validando se o elemento e o novo elemento são pares OU impares
	if((elemento%2==0)&&(novoelemento%2==0) ||  (elemento%2!=0) && (novoelemento%2!=0)){
		for(j=0;j<(*quant); j++){// Varrendo o vetor
			if(vetor[j]==elemento){ //Validando o elemento do vetor[J]
				
				vetor[j]=novoelemento; //Vetor na posição J vai receber novo elemento
			}
		}
	}else {
		removervalor(vetor, quant, elemento, par, impar);
		inserir(vetor, quant, novoelemento, par, impar);
}
}
//Opção (5) Buscar de determinado elemento no vetor    
int buscaelemento(int vetor[],int quant, int elemento){
	//Declaração das variaveis 
	int i;
	if((quant)== 0){
		//Falso 
		return -1;
		
	}else {
		for(i=0;i<(quant);i++){//Varrendo o vetor até quant
			if(vetor[i]==elemento){ //Varificando se elemento se encontra em dada posição
				return i; 
			}
		}
		return -1;
	}
}
//Opção (6) Exibir de todos os elementos do vetor  
void exibir(int vetor[], int quant){
	//declaração de variáveis
	int i;
	
	printf ("\nVetor: ");
	for (i=0;i<quant;i++)
	{
		printf ("%d  ", vetor[i]);
	}
	printf ("\n\n");
}


// Opção (7) Exibir de todos os valores pares
void exibirpares(int vetor[], int par)
{
	//declaração de variáveis
	int i;
	
	printf ("\nVetores pares: ");
	for (i=0;i<par;i++)
	{
		if(vetor[i]%2==0){
			printf ("%d  ", vetor[i]);
		}
		
	}
	printf ("\n\n");
}


//Opção (8) Exibir de todos os valores impares 
void exibirimpares(int vetor[], int impar, int quant)
{
	//declaração de variáveis
	int i;
	
	printf ("\nVetores impares: ");
	for (i=0;i<quant;i++)
	{
		if(vetor[i]%2!=0){
			printf ("%d  ", vetor[i]);	
		}	
	}
	printf ("\n\n");
}
