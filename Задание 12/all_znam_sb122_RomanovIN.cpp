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
cout << "������� ������ ���������� R" << endl;
cin >> R >> endl;
L = 2 * P * R;
S = P * (R * R);
cout << "������ ���������� " << L << endl;
cout << "������� ����� " << S << endl;
return 0;
