#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;


//----------------------------------------------------

void view (int *ptr_a, int n)
{
for (int i=0;i<n;i++)
cout<<*(ptr_a+i)<<" ";
cout<<"\n\n";
}

//----------------------------------------------------


void vvodmass (int *ptr_a, int n)
{
cout<<"Введите массив:";
for (int i=0;i<n;i++)
{
cin>>*(ptr_a+i);
}
cout<<"\n\n";
}

//----------------------------------------------------

int finder (int *ptr_a, int n)
{
int otvet=0;
for (int i=0;i<n;i++)
	if (*(ptr_a+i)>0)
	otvet=i;
otvet++;
cout<<"Индекс последнего положительного элемента массива: "<<otvet;
cout<<"\n\n";
return otvet;
}

//----------------------------------------------------


int main ()
{
int n, p, i;
int otvet=0; 


setlocale (LC_ALL, "russian");																												
cout<<"Введите разменость массива: ";
cin>>n ;
int *a=new int [n];
int *ptr_a=a;

vvodmass (a, n);							//ввод массива
cout<<"Массив А: ";							
view (a, n);								//вывод массива
otvet=finder (a, n);						//поиск последнего пол. элемента массива


if (otvet==n)
cout<<"Массив В не может быть создан т.к. последний положительный элемент в массиве A \nстоит в конце массива А\n\n";
		else
		{
		cout<<"Массив В: ";			
		for (i=otvet; i<n; i++)	
		cout<<*(ptr_a+i)<<" ";
		}
cout<<"\n";
delete [] a;															
system ("pause");
return 0;
}
