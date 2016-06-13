#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

//----------------------------------------------------

void view (int *ptr, int n)
{
for (int i=0;i<n;i++)
cout<<*(ptr+i)<<" ";
cout<<"\n\n";
}

//----------------------------------------------------

void vvodmass (int *ptr, int n)
{
cout<<"Вводите массив:\n";
for (int i=0;i<n;i++)
cin>>*(ptr+i);
cout<<"\n";
}

//----------------------------------------------------

int vvod ()
{	
int n; 
cout<<"Введите размерность для массива:\n";
cin>>n;
cout<<"\n\n";
return n;
}

//----------------------------------------------------

void swap(int& n1, int& n2)
{
    int temp=n1;
    n1=n2;
    n2=temp;
}

//----------------------------------------------------

void onemass (int* c, int n)
{
int i;
for (i=0; i<n; i++) *(c+i)=1;
}

//----------------------------------------------------

int main ()
{
setlocale (LC_ALL, "Rus");
int n, i;
n=vvod();
int *a=new int [n-1];
int *c=new int [n-1];
onemass (c, n);
vvodmass (a, n);
for (i=0; i<n; i++)
{													
do
{
c[i]*=a[i]%10;
a[i]/=10;
}
while (a[i]!=0);												
}
cout<<"---------------------------";
cout<<"\nМассив С до сортировки:";
view (c, n);

for (int i=0; i<n; i++)
        for (int k=i+1; k<n; k++)
            if (c[i]>c[k]) swap (c[i], c[k]);
            
cout<<"---------------------------";
cout<<"\nМассив С после сортировки:";
view (c, n);
system ("pause");
return 0;

