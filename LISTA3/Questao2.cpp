/*QUEST�O 02: Fa�a um programa que exiba
todos os elementos da seguinte s�rie,
assim como a soma destes elementos:
1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1*/

#include <stdio.h>

int main(){ 

	//Declarando variavel
	int i, j;
	
	//FOR i = 1 at� 50 e j 50 at� 1
	for(i=1, j=50 ; i<50 && j>1; i++ , j--){
		printf(" %d %d " , i ,j);
	}
}
