/*QUEST�O 10:
Foi feita uma pesquisa entre os habitantes
de uma regi�o e coletados os dados de
altura e g�nero das pessoas. Fa�a um
programa que leia as informa��es de 50
pessoas e informe:
? a maior e a menor alturas
encontradas;
? a m�dia de altura das mulheres;
? a m�dia de altura da popula��o;
? o percentual de homens na
popula��o.*/

#include<stdio.h>
#define QUANT 5 
int main(){
	
	//Declara��o de variavel
	int i,contf=0, contm=0;
	float altura, mediapopulacao, mediafeminina , maior=-999, menor=999,porcentual;
	char genero;
	
	for(i=1; i<QUANT; i++){
	// Solicitando os dados de altura e g�nero das pessoas.
	printf("Digite o genero [F] feminino e [M] masculino: \n");
	fflush (stdin);
	scanf("%c", &genero);
	
	printf("Digite altura:\n");
	scanf("%f", &altura);
	// a m�dia de altura da popula��o
	mediapopulacao=mediapopulacao+altura;
	
	//a maior e a menor alturas encontradas
	if(altura>maior){
		maior=altura; //Maior vai receber maior altura 
	}else{
		if(altura<menor){
		menor=altura; //Menor receber menor altura
		}	
	}
	//a m�dia de altura das mulheres
	if(genero='F'){
		contf++;
		mediafeminina=mediafeminina+altura;
		
	}// o percentual de homens na popula��o
	else{
		contm++;
	}
	

 	}
	//a maior e a menor alturas encontradas
	printf("Maior altura e menor altura: %d %d \n", maior, menor);
	
	if (contf > 0){
		//a m�dia de altura das mulheres
		printf("Media da altura das mulheres: %f \n", mediafeminina/contf);
		}
	else{
		printf ("Nenhuma mulher foi entrevistada!\n");
	}
	// a m�dia de altura da popula��o
	printf("Media da altura da populacao: %f\n", mediapopulacao/QUANT);
	
	porcentual=(contm*100)/QUANT;
	
	// o percentual de homens na popula��o
	printf("O porcentual de homens na popula��o: \n", porcentual);

}
