#include <iostream> 
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
#include <cmath> 


using namespace std;

int main()
{
	int A1, B1, C1 = 0; //переменные начала разговора
	int A2, B2, C2 = 0; //переменные конца разговора
	float A, B, C = 0.0f;
	float summa;
	setlocale(LC_ALL, "rus");
	cout << "\tПрога по вычислению стоимости разговора\n";
	cout << "\n\n";
	cout << "Введите время начала разговора (часы,минуты,секунды начала разговора) \n\n";
	cin >> A1 >> B1 >> C1;
	while (A1 > 24 || B1 > 59 || C1 > 59)
	{
		cout << "Неправильный формат времени, введите в 24 - ом формате(чч мм сс) \n\n";
		cin >> A1 >> B1 >> C1;
	}
	cout << "Введите время конца разговора (часы,минуты,секунды начала разговора \n\n";
	cin >> A2 >> B2 >> C2;
	while (A2 > 24 || B2 > 59 || C2 > 59)
	{
		cout << "Неправильный формат времени, введите в 24 - ом формате(чч мм сс) \n\n";
		cin >> A2 >> B2 >> C2;
	}

	if (A2 >= A1)
	{
		A = A2 - A1;
	}
	else if (A2 < A1)
	{
		A = 24 - A1 + A2;
	}

	if (B2 >= B1)
	{
		B = B2 - B1;
	}
	else
	{
		B = 60 - B1 + B2;
		A--;
	}

	if (C2 - C1 > 0)
	{
		C++;
	}
	summa = (((A * 60) + B + C) * 30) / 100;
	float kopeika;
	kopeika = (summa - (int)summa) * 100;
	cout << "Ценна по тарифу (30коп): " << (int)summa << " руб. " << setprecision(2) << kopeika << " коп." << "\n\n";
	return 0;
}
