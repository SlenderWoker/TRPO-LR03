#include "Solver.h"

int main()
{
	setlocale(0, "");

	int a, b, c;

	cout << "������ ������������ ����������� ���������: ";
	cin >> a >> b >> c;

	Solver equation(a, b, c);

	if (a == 0)
	{
		cout << "������: � �� ����� ���� ����� ����\n";
		return 0;
	}

	equation.Diskriminant();
	
	equation.Answer();

	system("PAUSE");
	return 0;
}