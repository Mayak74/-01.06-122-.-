#include <iostream>
#include <cmath>   


using namespace std;

int main()
{
	int A=1;
	int B = 1;
	cout << "--��������� ��� ���������� ����� ( ����� ������������ ), ������� ���� � ������ ����� ����� --\n" << endl;
	cout << "--������� 2 ����� �����\n" << endl;
	cin >> A >> B;
	int min;
	if (A > B)
	{
		min = A;
	}
	else
	{
		min=B
	}
	int count = 1;
	while (count <= min)
	{
		if ((A%count==0) && (B%count==0))
		{ 
			cout << count << endl;
		}
		count++;

	}
	for (int count = 1; count <= min; count++)
	{
		if ((A % count == 0) && (B % count == 0))
		{
			cout << count << endl;
		}
	}
	return 0;
}
