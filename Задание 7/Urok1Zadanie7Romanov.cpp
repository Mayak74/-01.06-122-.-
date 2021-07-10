#include <iostream> 
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
#include <cmath> // для квадрата


using namespace std;

int main()
{
	{
		int A1, B1, C1;
		int A2, B2, С2;
		setlocale(LC_ALL, "rus");
		cout << "\tПрога по вычислению стоимости разговора[км/ч]\n";
		cout << "\n\n";
		cout << "Введите время (часы,минуты,секунды начала разговора \n\n";
		cin >> A1 >> B1 >> C1;
		if (A1 > 24 || B1 > 60 || C > 60)
		{
			cout << "Неправильный формат времени 24/60/60 \n\n";
		}
		cout << "\n\n";
		V = S / T;
		cout << "Скорость: " << V << " км/ч " << "\n\n";
		return 0;
	}
}
