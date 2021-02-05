/* QUESTÃO DA AV1*/

#include<stdio.h>
int main(){
	//Declaração de variáveis 
	int i, j , n=1 , y, k, cont=0;    	

	
		//Solicintando valores 
		printf("Digite o valor de N: \n");
		scanf("%d", &n);
	
	if(n<0){
		printf("Numero invalido");
	}else{
		for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
                for(k=1; k<=n; k++){
                	
                    if((i!=j) && (j!=k) && (i!=k)){
                        printf("%d %d %d \n", i,j, k); 
                        cont++;
                    }                                       
                }                
            }
		}
	}
	
	printf("Total: %d combinacoes", cont);
	
		

}
