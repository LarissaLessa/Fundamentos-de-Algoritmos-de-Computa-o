#include <stdio.h>

void main(){

    //Definindo Vari�veis
    int inteiro; // armazena valores num�ricos inteiros.
    float flutuante; //armazena n�meros com ponto flutuante (reais) com precis�o simples.
    char caracteres; //armazena caracteres.

    //Inforamando os Valores
    inteiro = 5;
    flutuante = 2.3;
    caracteres = 'a';

    //Imprimindo os valores na Tela
    printf("\n O valor de a = %d", inteiro);
    printf("\n O valor de b = %.1f", flutuante);
    printf("\n O valor de c = %c", caracteres);

    //Lendo Valores dado pelo usu�rio
    scanf("%d", &inteiro);
    scanf("%f", &flutuante);
    scanf(" %c", &caracteres);

}
