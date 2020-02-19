#pragma once
#include <iostream>
using namespace std;

class Solver
{
public:

	Solver(int a, int b, int c);
	void Diskriminant();
	void Answer();
	double get_a() { return a; }
	double get_b() { return b; }
	double get_c() { return c; }
	double get_D() { return D; }

private:

	double a, b, c, D, x1, x2;
};