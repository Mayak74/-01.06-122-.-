#include <iostream>
#include <cmath>   
#include "stdafx.h"


using namespace std;

int main()
setlocale(LC_ALL, "rus");
float S = 0;
float R = 0;
float P = 3.14;
float L = 0;
cout << "Введите радиус окружности R" << endl;
cin >> R >> endl;
L = 2 * P * R;
S = P * (R * R);
cout << "Длинна окружности " << L << endl;
cout << "Площадь круга " << S << endl;
return 0;
