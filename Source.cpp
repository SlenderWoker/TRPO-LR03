#include "Solver.h"

int main()
{
	setlocale(0, "");

	int a, b, c;

	cout << "Введие коэффициенты квадратного уравнения: ";
	cin >> a >> b >> c;

	Solver equation(a, b, c);

	if (a == 0)
	{
		cout << "Ошибка: а не может быть равна нулю\n";
		return 0;
	}

	equation.Diskriminant();
	
	equation.Answer();

	system("PAUSE");
	return 0;
}