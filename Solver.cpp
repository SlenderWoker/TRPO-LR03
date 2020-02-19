#include "Solver.h"

Solver::Solver(int a, int b, int c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

void Solver::Diskriminant()
{
	D = (pow(b, 2) - 4 * a * c);
}

void Solver::Answer()
{
	
	if (D > 0)
	{
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << x1 << " " << x2 << endl;
	}
	else
		if (D == 0)
		{
			x1 = -b / (2 * a);
			cout << x1 << endl;
		}
		else
			cout << "Данное уравнение не имеет корней" << endl;
}
