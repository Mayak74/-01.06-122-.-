#include <iostream> 
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
#include <cmath> // ��� ��������


using namespace std;

int main()
{
	{
		float V, T, A, S1;
		int S2;
		setlocale(LC_ALL, "rus");
		cout << "\t����� �� ���������� ���������� ��� ������������� ��������������� ��������\n";
		cout << "\n\n";
		cout << "������� �������� (��/�) \n\n";
		cin >> V;
		cout << "\n\n";
		cout << "������� ����� (�)\n\n";
		cin >> T;
		cout << "\n\n";
		cout << "������� ��������� (��/�^2) \n\n";
		cin >> A;
		cout << "\n\n";
		S1 = V * T + ((A * pow(T, 2)) / 2); // pow �������� � ������� (�����,�������)
		int drob; //
		drob = (S1 - (int)S1) * 1000;//��������� ������ ������� ��������, ��� ��������� ���������� ���-�� ����� �������
		cout << "����������: " << (int)S1 << " �� " << drob << " �" << "\n\n";
		return 0;
	}
}



