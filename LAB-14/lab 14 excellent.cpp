#include <cstdlib>
#include <iostream>
#include <clocale>
#include <fstream>

using namespace std;
 
//----------------------------------------------------

void view_file (char* s, int n, int& l)
{
int i;
	for (i=0; i<n-l; i++)	 
	cout<<s[i];
	cout<<"\n\n";
}

//----------------------------------------------------

void func (char* s, char* iskl, int n, int& l)
{
	char x;
	int i=0, j=0; 
	int a=0;
	while (a<10)
	{
		for (i=0; i<n; i++)						
			for (j=0; j<7; j++)	
			{	
			x=iskl [j];
			if (s[i]==x)
					{
					l++;
					for (int j=i; j<n+1; j++)
						s[j]=s[j+1];
					}
			}
	a++;
	}
}

//--------------------------------------------------

void write_file (char* s, int n, int& l)
{
	ofstream out;
    	out.open ("C:\\Users\\ABBAT\\Desktop\\666\\out.txt", ios::out);
    		for (int i=0; i<n-l; i++)
    			out<<s[i];
    out.close();
}
 
//--------------------------------------------------

int main()
{
	char s [80]; char s1 [80]; int n=0, l=0; char iskl [7]={'.', ',', ':', ';', '-', '!', '?'}; char x;	
	setlocale (0, "Rus");
	
    ifstream in;    
    in.open ("C:\\Users\\ABBAT\\Desktop\\666\\in.txt", ios::in);
    	if (in)
			{
			cout<<"***Файл успешно открыт***\n\n";
			cout<<"Содержимое файла:\n\n";
				while (!in.eof())
				{
				in>>x;
				s[n]=x;
				cout<<s[n];
				n++;
				}
			in.close ();
			cout<<"\n\n";	
			func (s, s1, iskl, n, l);								//преобразование строки	
			cout<<"***Строка преобразована***\n\n";			
  	  		view_file (s, n, l);								//вывод строки на экран
			write_file (s, n, l);         						//запись преобразованной строки в файл
  	 		cout<<"***Запись преобразованной строки в файл успешно завершена***\n\n";		   
			}   
				else
					{
					cout<<"***Файл не был открыт!***\n\n";	 	
					in.close ();
					}					
	system("pause");
    return 0;							
}
