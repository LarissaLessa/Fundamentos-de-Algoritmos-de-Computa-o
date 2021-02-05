/*QUESTÃO 10:
Foi feita uma pesquisa entre os habitantes
de uma região e coletados os dados de
altura e gênero das pessoas. Faça um
programa que leia as informações de 50
pessoas e informe:
? a maior e a menor alturas
encontradas;
? a média de altura das mulheres;
? a média de altura da população;
? o percentual de homens na
população.*/

#include<stdio.h>
#define QUANT 5 
int main(){
	
	//Declaração de variavel
	int i,contf=0, contm=0;
	float altura, mediapopulacao, mediafeminina , maior=-999, menor=999,porcentual;
	char genero;
	
	for(i=1; i<QUANT; i++){
	// Solicitando os dados de altura e gênero das pessoas.
	printf("Digite o genero [F] feminino e [M] masculino: \n");
	fflush (stdin);
	scanf("%c", &genero);
	
	printf("Digite altura:\n");
	scanf("%f", &altura);
	// a média de altura da população
	mediapopulacao=mediapopulacao+altura;
	
	//a maior e a menor alturas encontradas
	if(altura>maior){
		maior=altura; //Maior vai receber maior altura 
	}else{
		if(altura<menor){
		menor=altura; //Menor receber menor altura
		}	
	}
	//a média de altura das mulheres
	if(genero='F'){
		contf++;
		mediafeminina=mediafeminina+altura;
		
	}// o percentual de homens na população
	else{
		contm++;
	}
	

 	}
	//a maior e a menor alturas encontradas
	printf("Maior altura e menor altura: %d %d \n", maior, menor);
	
	if (contf > 0){
		//a média de altura das mulheres
		printf("Media da altura das mulheres: %f \n", mediafeminina/contf);
		}
	else{
		printf ("Nenhuma mulher foi entrevistada!\n");
	}
	// a média de altura da população
	printf("Media da altura da populacao: %f\n", mediapopulacao/QUANT);
	
	porcentual=(contm*100)/QUANT;
	
	// o percentual de homens na população
	printf("O porcentual de homens na população: \n", porcentual);

}
