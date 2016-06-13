#include <stdio.h> 
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cmath>

using namespace std;

//------------------------------------

void summ (int *a, int *b, int *c, int n)
{
int i;
for (i=0;i<n;i++) *(c+i)=abs(*(a+i))+abs(*(b+i));
}

//------------------------------------

int vvodint ()
{
int n;
cout<<"Введите размерность массива: \t";
cin>>n;
return n;
cout<<"\n\n";
}

//------------------------------------

void finder (int *ukaz, int n)
{
int min, minind;
min=*ukaz;
for (int i=1; i<n; i++)	
if (*(ukaz+i)<min) {min=*(ukaz+i); minind=i;} 
*(ukaz+minind)=100;
}

//------------------------------------


void vivod (int *ptr_a, int n)
{
	for (int i=0; i<n; i++)
	{
	cout<<*(ptr_a+i)<<" ";
	}
cout<<"\n\n";
}

//------------------------------------

void vvod (int *ptr_a, int n)
{
int i;
for (i=0;i<n;i++) cin>>*(ptr_a+i);
}

int main ()
{
int n;
setlocale (LC_ALL, "russian");	

n=vvodint ();						//ввод числа								

int *a= new int [n];
int *b= new int [n];
int *c= new int [n];

cout<<"Вводите массив A: \t";	
vvod (a, n);						
cout<<"Вводите массив B: \t";		//		 }--------------->ввод миссивов А, В
vvod (b, n);							 				

summ (a, b, c, n);	//вычисление и занесение в массив С значений суммы элементов массивов А и В

cout<<"|A|+|B|=C"<<endl;
cout<<"-------------------------\n";							
cout<<"Массив C:";					//вывод массива С (суммы эелементов массива А и В)
vivod (c, n);					


finder (a, n);						
cout<<"Массив A:"<<endl;			
vivod (a, n);						

finder (b, n);						
cout<<"Массив B:"<<endl;			//		}------------------>Замена мин. эл. в массивах А, В, и С и их вывод
vivod (b, n);						

finder (c, n);						
cout<<"Массив C:"<<endl;			
vivod (c, n);						


delete [] a;
delete [] b;
delete [] c;
system ("pause");		
return 0;
}
