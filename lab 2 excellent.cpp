/*ABBAT
предполагается, что берутся градусы минутной стрелки */

#include <stdio.h> 
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;
char flag;
double y, minute, hour;

int main ()

{
setlocale (LC_ALL, "russian");	
		do
		{
			printf ("Введите количество градусов: \n\n", y);
			scanf ("%lf", &y);
		
				if ((y<0)||(y>360))							
				{
					printf ("Выход из диапазона количества градусов! \n\n");	
					printf ("Повторите ввод! \n\n");
					printf ("Введите количество градусов: \n\n", y);
					scanf ("%lf", &y);	
				}
		
			minute=0.1666667*y;
						if (minute>=60)
						{	
							printf ("Прошел 1 час и 0 минут	 \n\n");
			    	   		}
							else
						   	{			
							printf("Прошло 0 часов и %.lf", minute);
							cout<<" мин.\n\n";
		 	    		}		 	    
			printf ("Введите + для продолжения программы, - для ее завершения \n\n");
		   }	
		while (cin>>flag && flag=='+');			   
	printf ("Всего доброго! \n\n");
	system ("pause");
	return 0;
}


