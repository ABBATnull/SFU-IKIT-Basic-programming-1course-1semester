#include <stdio.h> 
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main ()
{
int a, b;

setlocale (LC_ALL, "russian");
	
printf ("Введите целые а и b: \n\n");
cin>>a;
cin>>b;

for (int i=1; i<4; i++)
{

cout<<"Остаток от целочисленного деления =                         ";
cout.fill ('$');
cout.width (i*10);
cout<<abs (a-((a/b)*b))<<endl;	

		
cout<<"Частное от целочисленного деления первого числа на второе = ";
cout.setf (ios::left);
cout.fill ('#');
cout.width (i*10);
cout<<abs (a/b)<<endl;	

cout<<"Частное от вещественного деления =                          ";
cout.setf (ios::right);
cout.fill ('*');
cout.width (i*10);
cout<<setprecision (i*3)<<a/(double)b<<"\n\n"<<endl; 	
}
							

system ("pause");			
return 0;		
cout <<"До встречи! \n\n\n";
}
