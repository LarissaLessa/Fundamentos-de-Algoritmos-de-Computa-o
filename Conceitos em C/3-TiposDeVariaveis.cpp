#include <stdio.h>

void main(){

    //Definindo Variáveis
    int inteiro; // armazena valores numéricos inteiros.
    float flutuante; //armazena números com ponto flutuante (reais) com precisão simples.
    char caracteres; //armazena caracteres.

    //Inforamando os Valores
    inteiro = 5;
    flutuante = 2.3;
    caracteres = 'a';

    //Imprimindo os valores na Tela
    printf("\n O valor de a = %d", inteiro);
    printf("\n O valor de b = %.1f", flutuante);
    printf("\n O valor de c = %c", caracteres);

    //Lendo Valores dado pelo usuário
    scanf("%d", &inteiro);
    scanf("%f", &flutuante);
    scanf(" %c", &caracteres);

}
