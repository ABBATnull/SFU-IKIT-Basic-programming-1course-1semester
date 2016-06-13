#include <cstdlib>
#include <iostream>
#include <clocale>
using namespace std;
 
int main()
{
    setlocale(0, "Rus");
    int **K;
    int m, n, i, j;
    cout << "Введите разрядность матрицы:\n";
    cin>>m>>n;
    int quan=1;
    K = new int*[m];
    for (i=0; i<m; i++)
        K[i] = new int[n];
    //заполнение двумерного массива в соответствии с заданием
    for (i=0; i<m; i++)
        for (j = 0; j < n; j++)
        {
            int x = i + j;
            if (x % 2)  K[i][j]=0;
            else {K[i][j]=quan; quan++;}
        }
    //Вывод матрицы на экран
    for (i = 0; i < m; i++)
    {
        for (j=0; j<n; j++)
            cout<<K[i][j]<<' ';
        cout<<'\n';
    }
    system("pause");
    return 0;
}
