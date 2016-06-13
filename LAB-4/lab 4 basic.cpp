#include <stdio.h> 
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cmath> 
#include <iomanip>

using namespace std;

float f1 (float x);
float f2 (float x);

int main ()
{
setlocale (LC_ALL, "russian");
float x;
cout.width (29);
cout.fill ('-');
cout<<"Введите х:";
cout.width (20);
cout.fill ('-');
cout<<""<<endl;
for (int i=1; i!=22; i++)
cout<<" ";
cout<<"x= ";
cin>>x;
for (int i=1; i!=18; i++)
cout<<" ";
cout<<"Ответ: ";
cout<<f1 (x)+f1 (pow (x, 2)+f2 (x)+f2 (x-1))<<endl;	

cout.width (27);
cout.fill ('*');
cout<<"Конец!";

cout.width (22);
cout.fill ('*');
cout<<""<<endl;

system ("pause");
return 0;
}

	
float f1 (float x)
{
float fa1;	
fa1=x+3.14;
return fa1;
}

float f2 (float x)
{
float fa2;	
fa2=sqrt(pow (x, 2)+2);
return fa2;
}
