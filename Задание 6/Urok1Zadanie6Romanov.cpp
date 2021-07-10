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
		float V, T, A, S1;
		int S2;
		setlocale(LC_ALL, "rus");
		cout << "\tПрога по вычислению расстояния при прямолинейном равноускоренном движении\n";
		cout << "\n\n";
		cout << "Введите скорость (км/ч) \n\n";
		cin >> V;
		cout << "\n\n";
		cout << "Введите время (ч)\n\n";
		cin >> T;
		cout << "\n\n";
		cout << "Введите ускорение (км/ч^2) \n\n";
		cin >> A;
		cout << "\n\n";
		S1 = V * T + ((A * pow(T, 2)) / 2); // pow возводит в степень (число,степень)
		int drob; //
		drob = (S1 - (int)S1) * 1000;//оставляет только дробное значение, где числитель определяет кол-во после запятой
		cout << "Расстояние: " << (int)S1 << " км " << drob << " м" << "\n\n";
		return 0;
	}
}



