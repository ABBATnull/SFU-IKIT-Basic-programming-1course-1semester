#include <iostream>
#include <clocale>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale (0, "Rus");
    printf("%s", "Hello World!\n");
    printf("%s", "Привет Мир!");
    system ("pause");
    return 0;
}
