#include <stdio.h> 
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cmath>

using namespace std;

int main ()
{
float x1, y1, x2, y2, x3, y3;
int AB, BC, AC;

setlocale (LC_ALL, "russian");	
printf ("¬ведите x1, y1, x2, y2, x3, y3 \n\n");
cin>>x1>>y1>>x2>>y2>>x3>>y3;
cout<<""<<endl;

AB=sqrt(pow ((x2-x1), 2)+ pow ((y2-y1), 2));
BC=sqrt(pow ((x3-x2), 2)+ pow ((y3-y2), 2));
AC=sqrt(pow ((x3-x1), 2)+ pow ((y3-y1), 2));


if ((AB+BC==AC) || (BC+AC==AB) || (AC+AB==BC))
cout<<"YES (на одной пр¤мой)\n\n"<<endl;
else
cout<<"NO (не на одной пр¤мой)"<<endl;
	
cout<<"—пасибо за пользование!"<<endl;
system ("pause");		
return 0;
}
