#include <iostream> 
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
#include <cmath> 


using namespace std;

int main()
{
	float S, Benz= 0.0f;
	float A1 = 0.0f;
	float B1 = 0.0f;
	float C1 = 0.0f;
	float A, B, C = 0.0f;
	float litr= 0.0f;
	setlocale(LC_ALL, "rus");
	cout << "\t��������� ������� ��������� ������� �� 3 ����� �������\n";
	cout << "\n\n";
	cout << "������� ���������� �� ������� (��) \n\n";
	cin >> S;
	cout << "������� ������ ������� (�/��) \n\n";
	cin >> Benz;
	cout << "������� ��������� 3 �����(Luk 92, Gaz 92, Bash 92) ������� �� 1� (���) \n\n";
	cin >> A1 >> B1 >> C1;
	litr = S / Benz;
	A = A1 * litr;
	B = B1 * litr;
	C = C1 * litr;
	cout << R"(=================================================)" << "\n";
	cout << R"(|)" << "\t" << R"(Luk 92)" << "\t" << R"(|)" << "\t" << R"(Gaz 92)" << "\t" << R"(|)" << "\t" << R"(Bash 92)" << "\t" << R"(|)" << "\n";
	cout << R"(-------------------------------------------------)" << "\n";
	cout << R"(|)" << "\t" << (int)A << "\t" << R"(|)" << "\t" << (int)B << "\t" << R"(|)" << "\t" << (int)C << "\t" << R"(|)" << "\n";
	cout << R"(=================================================)" << "\n";
	return 0;	
}
