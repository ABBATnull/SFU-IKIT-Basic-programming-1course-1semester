#include <stdio.h> 
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cmath> 
#include <iomanip> 

using namespace std;

float f1 (float x);
double f2 (double x);

int main ()
{
float x;
setlocale (LC_ALL, "russian");
cout<<"Введите х:\n\n"<<endl;
cin>>x;
	while  (x==0)
	{
	cout<<"Ошибка! Попытка извлечения отрицательного/нулевого корня или деления на 0!\n\n"<<endl;
	cout<<"Введите х:\n\n"<<endl;
	cin>>x;
	}
		
for (int i=7; i!=18; i++)
	cout<<setprecision (i)<<f1 (x)+f2(x)<<endl;
	
	
system ("pause");
return 0;
}

float f1 (float x)
{
float answ1;
answ1=log (pow (x, 2))-8.3e5;
return answ1;
}

double f2 (double x)
{
double answ2;
float proverka=3*x;
	if (proverka<0)
	{
	proverka=-proverka;
	answ2=1/(pow (proverka, 1./3)+1);
	}	
	else		
	answ2=1/(pow (proverka, 1./3)+1);
return answ2;
}
