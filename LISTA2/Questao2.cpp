/*QUESTÃO 02: Escrever um algoritmo que
obtenha o peso de uma pessoa na Terra e o
número de um planeta. Ao final, com auxílio da
tabela abaixo, calcular o peso desta pessoa no
planeta escolhido.
Número Planeta Gravidade Relativa g
1 Mercúrio 0,37
2 Vênus 0,88
3 Marte 0,38
4 Júpiter 2,64
5 Saturno 1,15
6 Urano 1,17
Para calcular o peso no planeta escolhido,
utilize a seguinte fórmula:
pesoPlaneta = (pesoTerra/10) * gravidadePlaneta*/



#include <stdio.h>

int main (){
	//Declaração de variaveis 
	int planeta;
	float pesoterra, pesoplaneta;
	//Solicitando valores 
	printf("Escolha o planeta de acordo com a numeracao, segue lista abaixo: \n 1 Mercurio 0,37 \n 2 Venus 0,88 \n 3 Marte 0,38 \n 4 Jupiter 2,64 \n 5 Saturno 1,15 \n 6 Urano 1,17 \n Digite o planeta: \n");
	scanf("%d", &planeta);
	
	printf("Digite seu peso na terra: \n");
	scanf("%f", &pesoterra);
	
	//Calculando valores
	if(planeta=1){
		pesoplaneta = (pesoterra/10) * 0.37;
	}else{
		if(planeta=2){
			pesoplaneta = (pesoterra/10) * 0.88;
		}else{
			if(planeta = 2){
				pesoplaneta = (pesoterra/10) * 0.38;
			}else{
				if(planeta = 3){
					pesoplaneta =(pesoterra/10) * 2.64;
				}else{
					if(planeta =  4){
						pesoplaneta = (pesoterra/10)* 1.15;
					}else{
						pesoplaneta = (pesoterra/10) * 1.17;
					}
				}
						
			}
			
				
		}
	}
	
	printf("Peso do planeta escolhido: \n  2%f" , pesoplaneta);
}
