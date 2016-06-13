#include <stdio.h> 
#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

void vivod (int len, char *shifr)
{
int i;
for (i=0; i<len; i++)
cout<<shifr[i];
}

//--------------------------------------------

void func (char *str, char *shifr, char *shi)
{
int len;
int i;
char x;
len=strlen(str);
for (i=1; i<len; i++)		//формируем шифр (в шифре четные элементы массива строка)
shifr[i-1]=str[i*2-1];

for (i=1; i<len; i++)		//формируем шифр (в шифре нечетные элементы в обратном порядке массива строка)
shi [i-1]=str [i*2];

len=strlen(shi);
x=shi[0];
for (i=1; i<len; i++)
{
shi[i-1]=shi[i];
shi[i]=x;
}
shi[len]=str[0];
cout<<"Кодовое слово:\n----------------------\n";
}

//--------------------------------------------

int main ()
{
char str [80]={}; char shifr [80]={}; char shi [80]={}, x;	int i, len;
setlocale (LC_ALL, "russian");	
cout<<"Вводите строку: \n";
cin.getline (str, 80, '\n');
func (str, shifr, shi);
len=strlen(shifr);
vivod  (len, shifr);
len=strlen(shi);
vivod  (len, shi);
cout<<"\n\n";
system ("pause");		
return 0;
}
