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
   
   
   //Escolher o mes
   if(mes==1)
   {
   		dia_do_ano=dia;
   }
   else
   {
   		if(mes==2)
   		{
   			dia_do_ano=dia+31;
		}
		else
		{
			if(mes==3)
			{
				dia_do_ano=dia+59;
			}
			else
			{
				if(mes==4)
				{
					dia_do_ano=dia+89;
				}
				else
				{
					if(mes==5)
					{
						dia_do_ano=dia+120;
					}
					else
					{
						if(mes==6)
						{
							dia_do_ano=dia+150;
						}
						else
						{
							if(mes==7)
							{
								dia_do_ano=dia+181;
							}
							else
							{
								if(mes==8)
								{
									dia_do_ano=dia+212;
								}
								else
								{
									if(mes==9)
									{
										dia_do_ano=dia+242;
									}
									else
									{
										if(mes==10)
										{
											dia_do_ano=dia+273;
										}
										else
										{
											if(mes==11)
											{
												dia_do_ano=dia+303;
											}
											else
											{
												dia_do_ano=dia+334;
											}
										}
										
									}
								}
							}
						}
					}
				}
				
			}
		}
   }
   
	//Exibir resultados
   printf("Dia do ano � %d\n", dia_do_ano);

}
