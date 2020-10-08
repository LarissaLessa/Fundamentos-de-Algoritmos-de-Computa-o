//USANDO SWITCH CASE 
/*QUEST�O 02: Escrever um algoritmo que
obtenha o peso de uma pessoa na Terra e o
n�mero de um planeta. Ao final, com aux�lio da
tabela abaixo, calcular o peso desta pessoa no
planeta escolhido.
N�mero Planeta Gravidade Relativa g
1 Merc�rio 0,37
2 V�nus 0,88
3 Marte 0,38
4 J�piter 2,64
5 Saturno 1,15
6 Urano 1,17
Para calcular o peso no planeta escolhido,
utilize a seguinte f�rmula:
pesoPlaneta = (pesoTerra/10) * gravidadePlaneta*/

#include <stdio.h>

int main(){  
	//Declara��o de variaveis 
	int planeta;
	float pesoterra, pesoplaneta;
	
	//Solicitando valores 
	printf("Escolha o planeta de acordo com a numeracao, segue lista abaixo: \n 1 Mercurio 0,37 \n 2 Venus 0,88 \n 3 Marte 0,38 \n 4 Jupiter 2,64 \n 5 Saturno 1,15 \n 6 Urano 1,17 \n Digite o planeta: \n");
	scanf("%d", &planeta);
	
	printf("Digite seu peso na terra: \n");
	scanf("%f", &pesoterra);
	
	//SWITCH CASE
	switch(planeta){
		case 1: pesoplaneta = (pesoterra/10) * 0.37;
		break;
		
		case 2: pesoplaneta = (pesoterra/10) * 0.88;
		break;
		
		
		case 3: pesoplaneta = (pesoterra/10) * 0.38;
		break;
		
		
		case 4: pesoplaneta = (pesoterra/10) * 2.64;
		break;
		
		case 5: pesoplaneta = (pesoterra/10) * 1.15;
		break;
		
		case 6: pesoplaneta = (pesoterra/10) * 1.17;
		break;
		
		
	}
	printf("Peso do planeta escolhido: \n  %.2f" , pesoplaneta);
}
