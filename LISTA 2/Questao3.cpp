/*QUEST�O 03: As vendas parceladas se
tornaram uma �tima op��o para os lojistas que,
a cada dia, criam novas promo��es para tentar
conquistar novos clientes. Fa�a um algoritmo
que permita ao lojista informar o pre�o do
produto e receber as seguintes informa��es:
a) O valor com 10% de desconto para
pagamento � vista;
b) O valor da presta��o para parcelamento
sem juros, em 5x;
c) O valor da presta��o para parcelamento
com juros, em 10x, com 20% de acr�scimo
no valor do produto.*/

#include <stdio.h>

int main (){
	
	//Declara��o variavel 
	float produto, desconto1,avista, juros, parcelamento5, parcelamento10;
	
	//Solicitando valores 
	 printf("Digite o valor do produto: \n");
	 scanf("%f", &produto);
	 
	//Realizando os calculos 
	 // O valor com 10% de desconto para pagamento � vista
	   desconto1= produto * 0.1;
	   avista= produto-desconto1;
	   
	// O valor da presta��o para parcelamento sem juros, em 5x;
	   parcelamento5=produto/5;
	   
	//O valor da presta��o para parcelamento com juros, em 10x, com 20% de acr�scimo no valor do produto;
	juros=produto*0.2;
	parcelamento10=(produto+juros)/10;
	
	//Exibindo valor do produto � vista
	printf("Desconto de 10 para pagamento a vista: %.2f\n" , avista);
	
	//Exibindo valor do produto com parcelammento em 5x
	printf("Parcelamento em 5x de: %.2f\n", parcelamento5 );
	
	//Exibindo valor do produto com parcelamento em 10x
	printf("Parcelamento em 10x de: %.2f\n", parcelamento10);
}
