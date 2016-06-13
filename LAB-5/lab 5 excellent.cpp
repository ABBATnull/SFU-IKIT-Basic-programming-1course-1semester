#include <iostream>
#include <cmath>
#include <clocale>
#include <cstdlib>

using namespace std;

long NOD (long a, long b, long c);

int main ()
{
long a, b, c;

if ((a<0)||(b<0)||(c<0))						//НОД определен для ВСЕХ натуральных чисел
{
a=abs(a);
a=abs(b);
a=abs(c);
}

setlocale (LC_ALL, "russian");
cout<<"Введите число а:"<<endl;
cin>>a;
cout<<"Введите число b:"<<endl;
cin>>b;
cout<<"Введите число c:"<<endl;
cin>>c;
cout<<endl;
NOD(a, b, c);
if ((a==b==1) || (a==c==1) || (c==b==1))
cout<<"Числа взаимно простые \n\n";
else
cout<<"Числа НЕ взаимно простые \n\n";
cout<<"Спасибо за пользование! \n\n";
system ("pause");
return 0;
}


long NOD (long a, long b, long c)
{
int checkA=5;

while (a && b)
if (a>=b)
{
a%=b;
checkA=a;
checkA=0;
return b;					// ВЫВОДИТСЯ b
}
	else
	{	
	b%=a;
	return a;						//ВЫВОДИТСЯ а
	}								

				if (checkA==0)	
					{
				while (b && c)
				if (b>=c)
				{
				b%=c;				//ВЫВОДИТСЯ с ПРИ Б больше с
				return c;
				}	
				
				while (b && c)
				if (b<=c)
				{
				c%=b;				//ВЫВОДИТСЯ б ПРИ Б меньше с
				return b;
				}					
					}	
							else
							{							
							while (b && c)
							if (a>=c)
							{
							a%=c;				//ВЫВОДИТСЯ с ПРИ a больше с
							return c;
							}							
							}	
										if (checkA==5)
										{
										while (b && c)
										if (a<=c)
										{
										c%=a;				//ВЫВОДИТСЯ a ПРИ a меньше с
										return a;
										}																			
										}					
}
