#include <stdio.h> 
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

int summcicl (int n);
float summformula (float n);
int proizv (int n);

int main ()
{
int n, summcicll, proizvv;
float summformulaa;
setlocale (LC_ALL, "russian");	
cout<<"Введите число: ";
cin>>n;
cout<<""<<endl;
summcicll=summcicl (n);
summformulaa=summformula (n);
proizvv=proizv (n);

cout<<"<по циклу>Сумма чисел от 1 до "<<n<<"= "<<summcicll<<endl;
cout<<"<по формуле>Сумма чисел от 1 до "<<n<<"= "<<summformulaa<<endl;
cout<<"Произведение чисел от 1 до "<<n<<"= "<<proizvv<<endl;

system ("pause");		
return 0;
}


int summcicl (int n)
{
int summcicl=0;
	for (int i=1; i!=n+1;i++)	
	summcicl=summcicl+i;
return summcicl;
}



float summformula (float n)
{
float summformula;
summformula=((1+n)/2)*n;
return summformula;
}


int proizv (int n)
{
int proizv=1;
	for (int i=1; i!=n+1; i++)	
	proizv=proizv*i;	
return proizv;
}
