#include <iostream> 
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>


using namespace std;

int main()
{
	{
		float radius, circumference, area;
		setlocale(LC_ALL, "rus");
		cout << "\t\tПрога по подсчету площади\n";
		cout << "Введите длину окружности\n\n";
		cin >> circumference;
		cout << "\n\n";
		radius = circumference / (2 * M_PI);
		area = M_PI * radius * radius;
		cout << "Искомый радиус: " << radius << "\n\n";
		cout << "Площадь окружности: " << area << "\n\n";
		return 0;
	}
}