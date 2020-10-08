//USANDO SWITCH CASE
/*QUESTÃO 05: O cardápio de uma lanchonete é
o seguinte:
Especificação 	Código 	Preço
Cachorro quente 	100 	3,50
Bauru simples 	101 	4,50
Bauru com ovo 	102 	5,20
Hamburger 	103 	3,00
Cheeseburger 	104 	4,00
Refrigerante 	105 	2,50
Escrever um algoritmo que obtenha o código
do item pedido, a quantidade e calcule o valor
a ser pago.
Considere que, a cada execução do algoritmo,
somente será calculado o valor relacionado a
um item.*/

#include <stdio.h>

int main(){  
	//Declaranção de variavel 
	int pedido, quant;
	float valortotal;
	
	//Solicitando valores 
	printf("Especificacao Codigo Preço\n Cachorro quente 100 3,50 \n Bauru simples 101 4,50 \n Bauru com ovo 102 5,20 \n Hamburger 103 3,00 \n Cheeseburger 104 4,00\n Refrigerante 105 2,50 \n Digite o pedido: \n");
	scanf("%d", &pedido);
	
	printf("Digite a quantidade: \n");
	scanf("%d", &quant);
	
	//Calculando os valores 
	
	switch(pedido){
		case 100: valortotal=3.50*quant;
		break;
		
		case 101: valortotal=4.50*quant;
		break;
		
		
		case 102: valortotal=5.20*quant;
		break;
		
		
		case 103: valortotal=3.00*quant;
		break;
		
		case 104: valortotal=4.00*quant;
		break;
		
		case 105: valortotal=2.50*quant;
		break;
		
		
	}
	printf("Valor total do pedido: \n  %.2f" , valortotal);
}
