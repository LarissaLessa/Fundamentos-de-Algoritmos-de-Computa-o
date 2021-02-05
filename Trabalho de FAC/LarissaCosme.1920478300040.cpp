/*Trabalho para compor a nota da AV1 e Av2 
 



 
	 	Larissa Gomes Lessa de Souza cosme 
 		Turma B - Quinta 
 		larissa.1920478300040@faeterj-rio.edu.br
 		Matricula: 1920478300040
 
 
 


Pede-se o desenvolvimento de um programa que manipule um vetor de inteiros positivos, de forma que os pares fiquem no in�cio da estrutura e os �mpares ao seu final.
Inicialmente, este vetor, com capacidade para armazenamento de CAP n�meros (onde CAP � uma constante), estar� vazio (quant = 0). 

A execu��o do programa dever� consistir na cont�nua disponibiliza��o ao usu�rio de um menu com poss�veis opera��es, de forma que a execu��o s� terminar� quando for selecionada a op��o de sa�da.

As opera��es que ser�o disponibilizadas ao usu�rio
s�o:

i. Inser��o de um novo elemento;

ii. Remo��o de determinado valor (por exemplo, remover o n�mero 10 no vetor);

iii. Remo��o do elemento que encontra-se em dada posi��o (por exemplo, remover o elemento da posi��o 5 do vetor);

iv. Altera��o de um valor por outro (por exemplo, alterar o no 10 pelo n�mero 8). Aten��o a esta opera��o, em especial quando a paridade dos n�meros envolvidos for distinta;

v. Busca de determinado elemento no vetor, retornando a sua posi��o, se encontrado no vetor, ou o valor -1, caso contr�rio;

vi. Exibi��o de todos os elementos do vetor;

vii. Exibi��o de todos os valores pares;

viii. Exibi��o de todos os valores �mpares.

ix. E, por �ltimo, a op��o de sair do programa.

Destaca-se ainda que n�o � permitida a repeti��o de
elementos no vetor.

*/

#include<stdio.h>
#define CAP 10

//Prot�tipo das fun��es
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
	//Declara��o de variav�l 
	int quant = 0, opcao, vetor[CAP], par=0, impar=0, elemento, resultado, novoelemento, posicao;
	
	do{
		
	//EXIBINDO MENU 
	menu();
	scanf("%d", &opcao);
	
	//Validando a op��o escolhida pelo usu�rio	
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
			printf("Nao foi possivel inserir elemento no vetor! \n");
		}else{
			printf("O elemento foi inserido com sucesso! \n");
		}
			
		exibir (vetor, quant);
	    break;
	
	//Op��o (2) Remover de determinado valor 
	    case 2 :
	    	//Solicitando elemento a ser exclu�do ao usu�rio
	    	printf("Digite o elemento do vetor que deseja remover: \n");
		scanf("%d", &elemento);
		resultado=removervalor(vetor, &quant, elemento, &par, &impar);
		
		
		//Validando se o vetor est� vazio 
		if(resultado==0){
			printf("Nao foi possivel remover elemento no vetor! \n");
			
		}else{
			printf("O elemento foi removido com sucesso! \n");
		}
	    break;
	
	//Op��o (3) Remover elemento que encontra-se em dada posicao
	    case 3 :
	    	//Solicitando elemento a ser exclu�do ao usu�rio
	    	printf("Digite a posicao do elemento que deseja remover: \n");
		scanf("%d", &posicao);
		resultado=removerpos(vetor, &quant, elemento, &par, &impar, posicao);
		
		//Validando se o vetor est� vazio 
		if(resultado==0){
			printf("Nao foi possivel remover elemento no vetor! \n");
			
		}else{
			printf("O elemento foi removido com sucesso! \n");
		}
	    break;
	
	//Op��o (4) Alterar de um valor por outro
	    case 4 :
	    //Solicitando elemento ao usu�rio
	    	printf("Digite o elemento do vetor que deseja alterar: \n");
		scanf("%d", &elemento);
		//Solicitando novo elemento ao usu�rio
		printf("Digite o novo elemento do vetor: \n");
		scanf("%d", &novoelemento);
		resultado=alterarvalor(vetor, &quant, elemento, novoelemento, &par, &impar);
		
		//Validando se o vetor est� vazio 
		if(resultado==0){
			printf("Nao foi possivel alterar o elemento no vetor! \n");
			
		}else{
			printf("O elemento foi alterado com sucesso! \n");
		} 
		exibir (vetor, quant);
	    break;
	
	//Op��o (5) Buscar de determinado elemento no vetor    
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
	 
	//Op��o (6) Exibir de todos os elementos do vetor  
	    case 6 :
	    	exibir (vetor, quant); 
	    break;
	
	// Op��o (7) Exibir de todos os valores pares   
	    case 7 :
	    	exibirpares(vetor, par);
	    break;
	 
	//Op��o (8) Exibir de todos os valores impares  
	    case 8 :
		exibirimpares (vetor, impar, quant);
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
	
	//Declara��o de fun��o
	int i=(*quant), j;
	
	//Validando se o capacidade se encontra vazia e verificando se o elemento informado � repetido
	if((*quant)>CAP || (buscaelemento(vetor, *quant, elemento)!=-1)){
		//Falso 
		return 0;
	}
	else 
	{
		//Validando se o numero � par ou impar
		if(elemento%2==0)
		{
			while(i>(*par))
			{
				vetor[i]=vetor[i-1];
				i--;
			}
				//Posi��o vai receber elemento par
				vetor[i]=elemento;
				(*par)++;		
		}
		else
		{
			//Posi��o vao receber elemento impar 
			vetor[(*par)+(*impar)]=elemento;
			(*impar)++;
		}
	(*quant)++;	
	
}
}

//Op��o (2) Remover de determinado valor 
int removervalor(int vetor[],int *quant, int elemento, int *par, int *impar){
	//Declarando variaveis 
	int i, j, cont=0, p;
	
	//Validando se o vetor est� vazio
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
int removerpos(int vetor[],int *quant, int elemento, int *par, int *impar, int posicao){
	//Declara��o de variavel
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
	//Declara��o de variavel
	int i, j;
	if(((*quant)== 0) || (buscaelemento(vetor, *quant, elemento)==-1) || (buscaelemento(vetor, *quant, novoelemento)!=-1)){
		//Falso 
		return 0;
		
	}
	// Validando se o elemento e o novo elemento s�o pares OU impares
	if((elemento%2==0)&&(novoelemento%2==0) ||  (elemento%2!=0) && (novoelemento%2!=0)){
		for(j=0;j<(*quant); j++){// Varrendo o vetor
			if(vetor[j]==elemento){ //Validando o elemento do vetor[J]
				
				vetor[j]=novoelemento; //Vetor na posi��o J vai receber novo elemento
			}
		}
	}else {
		removervalor(vetor, quant, elemento, par, impar);
		inserir(vetor, quant, novoelemento, par, impar);
}
}
//Op��o (5) Buscar de determinado elemento no vetor    
int buscaelemento(int vetor[],int quant, int elemento){
	//Declara��o das variaveis 
	int i;
	if((quant)== 0){
		//Falso 
		return -1;
		
	}else {
		for(i=0;i<(quant);i++){//Varrendo o vetor at� quant
			if(vetor[i]==elemento){ //Varificando se elemento se encontra em dada posi��o
				return i; 
			}
		}
		return -1;
	}
}
//Op��o (6) Exibir de todos os elementos do vetor  
void exibir(int vetor[], int quant){
	//declara��o de vari�veis
	int i;
	
	printf ("\nVetor: ");
	for (i=0;i<quant;i++)
	{
		printf ("%d  ", vetor[i]);
	}
	printf ("\n\n");
}


// Op��o (7) Exibir de todos os valores pares
void exibirpares(int vetor[], int par)
{
	//declara��o de vari�veis
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


//Op��o (8) Exibir de todos os valores impares 
void exibirimpares(int vetor[], int impar, int quant)
{
	//declara��o de vari�veis
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
