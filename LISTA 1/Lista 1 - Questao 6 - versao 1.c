/* QUEST�O 06:
Fazer um algoritmo que determine a ordem de uma data (dia e m�s) no ano.
Exemplos:
01/01 - 1� dia do ano
03/02 - 34� dia do ano */

#include<stdio.h>

int main()
{
	//Declara��o de vari�veis
   int dia, mes, dia_do_ano;

	//Obter dados
   printf("Dia ");
   scanf("%d", &dia);

   printf("M�s ");
   scanf("%d", &mes);
   
   
	//Escolher o mes que foi digitado
   switch (mes)
   {
          case 1:
           dia_do_ano=dia;
          break;

          case 2:
           dia_do_ano=dia+31;
          break;

          case 3:
           dia_do_ano=dia+59;
          break;

          case 4:
           dia_do_ano=dia+89;
          break;

          case 5:
           dia_do_ano=dia+120;
          break;

          case 6:
           dia_do_ano=dia+150;
          break;

          case 7:
           dia_do_ano=dia+181;
          break;

          case 8:
           dia_do_ano=dia+212;
          break;

          case 9:
           dia_do_ano=dia+242;
          break;

          case 10:
           dia_do_ano=dia+273;
          break;

          case 11:
           dia_do_ano=dia+303;
          break;

          case 12:
           dia_do_ano=dia+334;
          break;

   }
   
	//Exibir resultados
   printf("Dia do ano � %d\n", dia_do_ano);

}
