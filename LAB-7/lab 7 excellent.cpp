#include <iostream>
#include <clocale>
#include <cstdlib>
#include <math.h>

using namespace std;

float vvod()
{
	float it;
	cin >> it;
	cout << "" << endl;
	return it;
};
float func(float x){ return  (double)x*cos(3*x)-2;};

int main()
{
	float nach, konec, step;
	setlocale(LC_ALL, "russian");
	cout << "¬ведите начало интервала: ";
	nach = vvod();
	cout << "¬ведите конец интервала:  ";
	konec = vvod();
	cout.setf(ios::left);
	cout.width(26);
	cout.fill(' ');
	cout << "¬ведите шаг: ";
	step = vvod();
	bool isMD = false;
	for (nach;nach <= konec;nach+=step)
	{
		cout <<"f("<<nach<<")= "<< " " << func(nach) <<endl;
		if (func(nach)>func(nach - step)) isMD = true;
	}
	cout << "‘ункци¤ на данном отрезке " << (isMD ? "" : "не") << " ¤вл¤етс¤ монотонно убывающей" << endl;
	
	system("pause");
	return 0;
}
