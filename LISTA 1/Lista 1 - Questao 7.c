#include<stdio.h>

/*QUEST�O 07:
Escreva um algoritmo para calcular o sal�rio semanal de uma pessoa, determinado
pelas condi��es que seguem: se o n�mero de horas trabalhado for inferior ou
igual a 40, a pessoa recebe x reais por hora; caso contr�rio, a pessoa recebe um
adicional de 50% para cada hora trabalhada acima das 40 iniciais.*/

int main()
{
	//Declara��o de vari�veis
 float horas_trabalhadas, salario_semanal, salario;

	//Obter dados
 printf("Digite as horas trabalhadas\n");
 scanf("%f", &horas_trabalhadas);

 printf("Digite o quanto ganha o trabalhador por hora\n");
 scanf("%f", &salario);

 //Calcular os resultados de acordo com as condi��es do problema
 if(horas_trabalhadas<=40)
 {
  salario_semanal=salario*horas_trabalhadas;
 }

 else
 {
  salario_semanal=(salario)*(horas_trabalhadas)+(((horas_trabalhadas-40)*salario)/2);
 }
 
//Exibir resultados
 printf("O trabalhador recebeu R$ %f durante a semana", salario_semanal);


}
