#include <cstdlib>
#include <iostream>
#include <clocale>
#include <fstream>
#include <ctime>

using namespace std;
 
//------------------------------------------


int maxiAK(int& n, int* lol)
{
	int max=lol[0];	int i=0;
		for (i=1; i<n; i++)
			(max<lol[i])?  max=lol[i] : i=i;
	return max;
}

//------------------------------------------

int main()
{
    setlocale(0, "Rus");
    int **K;
    int m, n, i, j; int y=0, koko=0;
    cout << "Введите разрядность матрицы:\n";
    cout<<"----------------------------- \n";
    cin>>m>>n;
    cout<<"\n";
    int quan=1;
    srand (time(NULL));
    K = new int*[m];
    											if (n>m)
    											{
    //создание дин. массива для вычисления максимального элемента в строке двум. массива
    int *lol= new int [n];	
    
    int *result= new int [n];
	 
    for (i=0; i<m; i++)
        K[i] = new int[n];
        
 	//заполнение двумерного массива в соответствии с заданием     
    for (i=0; i<m; i++)
        for (j = 0; j < n; j++)       
        	K[i][j]=(rand() %120);    
				
	//вывод полученной матрицы		
	cout<<"Полученная матрица:\n";
		for (i = 0; i < m; i++)
   		 {
      	 	 for (j=0; j<n; j++)
         	   	cout<<K[i][j]<<' ';
        		cout<<'\n';
    	 }
    cout<<"\n";
		
	//вычисление максимального элемента в строке двумерной матрицы			
	do
	{
        for (i=0;i<n;i++)  		
		lol[i]=K[koko][i];
				
		result[y]=maxiAK(n, lol);
		y++;					
	koko++;	
	}
	while (koko<m);	
	
    //запись результирующей матрицы в файл
    ofstream f;	
	f.open ("C:\\Users\\ABBAT\\Desktop\\666\\test.txt", ios::out);
	if (f)	cout<<"Файл успешно открыт\nИдет запись...\n"; 		
		for (i=0; i<m; i++)
			f<<result[i]<<"\n";
	cout<<"Запись окончена\n";
    f.close();
	cout<<"Файл закрыт\n";						}
	
	
	
	
	
														else
														{
//создание дин. массива для вычисления максимального элемента в строке двум. массива
    int *lol= new int [m];	
    
    int *result= new int [m];
	 
    for (i=0; i<m; i++)
        K[i] = new int[n];
        
 	//заполнение двумерного массива в соответствии с заданием     
    for (i=0; i<m; i++)
        for (j = 0; j < n; j++)       
        	K[i][j]=(rand() %120);    
				
	//вывод полученной матрицы		
	cout<<"Полученная матрица:\n";
		for (i = 0; i < m; i++)
   		 {
      	 	 for (j=0; j<n; j++)
         	   	cout<<K[i][j]<<' ';
        		cout<<'\n';
    	 }
    cout<<"\n";
		
	//вычисление максимального элемента в строке двумерной матрицы			
	do
	{
        for (i=0;i<n;i++)  		
		lol[i]=K[koko][i];
		result[y]=maxiAK(n, lol);
		y++;					
	koko++;	
	}
	while (koko<m);	
	
    //запись результирующей матрицы в файл
    ofstream f;	
	f.open ("C:\\Users\\ABBAT\\Desktop\\666\\test.txt", ios::out);
	if (f)	cout<<"Файл успешно открыт\nИдет запись...\n"; 		
		for (i=0; i<m; i++)
			f<<result[i]<<"\n";
	cout<<"Запись окончена\n";
    f.close();
	cout<<"Файл закрыт\n";
														}
    system("pause");
    return 0;
}
