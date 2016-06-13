#include <stdio.h> 
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;


int vvodint ()
{
int n;
cout<<"Введите размерность массива: \n\n";
cin>>n;
cout<<"\n\n";
return n;
}

//------------------------------------

void vvod (int *ptr_a, int n)
{
cout<<"Вводите массив: ";
for (int i=0; i<n; i++)
cin>>*(ptr_a+i);
cout<<"\n\n";
}

//------------------------------------


void vivod (int *ptr_a, int n)
{
cout<<"Прямой порядок: ";
	for (int i=0; i<n; i++)
	{
	cout<<*(ptr_a+i)<<" ";
	}
cout<<"\n\n";
}

//------------------------------------

void vivodobr (int *ptr_a, int n)
{
int x;
cout<<"Обратный порядок: ";
	if (n==2)
{
	
x=*ptr_a;					
*ptr_a=*(ptr_a+1);
*(ptr_a+1)=x;
cout<<*ptr_a<<" "<<*(ptr_a+1)<<endl;
}
		else
		{
for (int i=0; i<n; i++)
cout<<*(((ptr_a+n)-1)-i)<<" ";
		}
cout<<"\n\n";
}

//------------------------------------

int main ()
{
int n;
int otric=0, sumpol=0, proizvotric=1;
setlocale (LC_ALL, "russian");	

n=vvodint ();					//ввод числа								

int *a= new int [n];
int *ptr_a=a;

vvod (a, n);					//ввод массива			
vivod (a, n);					//вывод массива
vivodobr (a, n);				//вывод массива наоборот

for (int i=0; i<n; i++)
{
if (*(ptr_a+i)>0)
sumpol+=*(ptr_a+i);					
	
	if (*(ptr_a+i)<0)
	{
	proizvotric*=*(ptr_a+i);			
	otric++;
	}
}

(otric==0 ? cout<<"Количество отрицательных элементов массива А= 0 \n\n" :
 cout<<"Количество отрицательных элементов массива А= "<<otric<<"\n\n");

(proizvotric==1 ? cout<<"Произведение отрицательных элементов массива А= 0 \n\n" :
 cout<<"Произведение отрицательных элементов массива А= "<<proizvotric<<"\n\n");
 
cout<<"Сумма положительных элементов массива А= "<<sumpol<<"\n\n";

system ("pause");	
	
delete [] a;	
return 0;
}
