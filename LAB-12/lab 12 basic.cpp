#include <cstdlib>
#include <iostream>
#include <clocale>

using namespace std;
 
//--------------------------------------------------------
     void view (int **A,int n,int m)
      {
    cout<<"\n\n";
       for (int i=0;i<n;i++)
                for (int j=0;j<m;j++)
                 {
                 if (!(j%m)) cout<<endl; 
                  cout<<A[i][j]<<' '; 
                 }
      }
 
//--------------------------------------------------------
    void func(int **A,int n,int m)
     {
       for (int i=0;i<n;i++)
                for (int j=0;j<m;j++)     
                   A[i][j]=n-i;
     }
 
//--------------------------------------------------------
 
int main()
{
   int **A;
   int n, m, i;
   setlocale (LC_ALL, "Rus");
   cout<<"Введите размерность двумерного массива: ";
   cin>>n>>m;
   cout<<"Массив размерностью "<<n<<"x"<<m<<":\n";
  A=new int*[n];
    for (i=0;i<n;i++) A[i]=new int[m];
 
     func(A,n,m);
     view(A,n,m); 
   for (i=0;i<n;i++) delete []A[i];
   delete []A;
system("pause");
return 0;
}
