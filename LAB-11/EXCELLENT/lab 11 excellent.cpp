#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

//----------------------------------------------------

void view (int *ptr, int n)
{
for (int i=0;i<n-1;i++)
cout<<*(ptr+i)<<" ";
cout<<"\n\n";
}

//----------------------------------------------------

char poisk (char *str, char x, int len)
{
int i=0;
for (int i=0; i<len; i++)
if ((str[i]=='\t') || (str[i]==' ')) {} else { x=str[i]; return x;};
}

//----------------------------------------------------

int count (char *str, char x, int len)
{
int i; int k=0;
for (int i=0; i<len; i++)
if (str[i]==x) k++;
return k;
}

//----------------------------------------------------

int main ()
{
char str[80]={}; int len, i, k; char x={};
setlocale (LC_ALL, "Rus");
cout<<"Введите строку: \n";
cin.getline (str, 80, '\n');
len=strlen (str);
x=poisk (str, x, len);
cout<<"-------------------------\nПервый символ строки: "<<x<<" \nКоличество его повторений:"<<count (str, x, len)<<endl;	
system ("pause");
return 0;
}
