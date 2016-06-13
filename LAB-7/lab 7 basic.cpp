#include <stdio.h> 
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iomanip>

using namespace std;

float vvod ();
float func (float x);

int main ()
{
float nach, konec, x, step;
setlocale (LC_ALL, "russian");	

cout<<"¬ведите начало интервала: ";
nach=vvod ();

cout<<"¬ведите конец интервала:  ";
konec=vvod ();

cout.setf (ios::left);
cout.width (26);
cout.fill (' ');
cout<<"¬ведите шаг: ";
step=vvod ();
x=nach;

	do
	{
	cout<<"f("<<x<<")="<<func (x)<<endl;
	x+=step;
	}
	while (x<=konec);
system ("pause");
return 0;
}


float vvod ()
{
float it;
cin>>it;
cout<<""<<endl;
return it;
}


float func (float x)
{
x=3*x+5;
return x;
}
