#include <stdio.h> 
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

int main ()
{
int n;
setlocale (LC_ALL, "russian");	
printf ("Введите число: \n\n");
cin>>n;
cout<<""<<endl;

while (n<0)
{
cout<<"Число не может быть отрицательным!"<<endl;
cout<<"Повторите ввод! \n"<<endl;
cin>>n;
cout<<"\n"<<endl;
}


/*for (int i=1; i<n+1;i++)	//СЧЕТЧИК
cout<<i<<endl;
*/

/*int i=1;
do
{
cout<<i<<endl;
i=i+1;
}
while (i<n+1);				//ПОСТУСЛОВИЕ
*/

int i=1;
while (i<n+1)
{
cout<<i<<endl;				//ПРЕДУСЛОВИЕ
i=i+1;
}

cout<<""<<endl;
cout<<"Спасибо за пользование! \n\n"<<endl;
system ("pause");		
return 0;
}
