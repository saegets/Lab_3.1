// Lab_03_1.cpp
// ������������ ������
// ����������� ������ No 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 3

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������

	cout << "x = "; cin >> x;

	A = 2 / x + abs(x);

	// ����� 1: ������������ � ��������� ����
	if (x < 0)
		B = 1 + 4 * pow(x, 2);
	if (0 <= x && x <= 2)
		B = pow(exp(x) + abs(x), 2);
	if (x > 2)
		B = 5 * sin(x * x + 1);

	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// ����� 2
	if (x<0)
		B= 1 + 4 * pow(x, 2);
	else
		if (x>2)
			B = 5 * sin(x * x + 1);
		else
			B = pow(exp(x) + abs(x), 2);

	y = A + B;

	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}