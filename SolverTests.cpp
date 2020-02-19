#include "CppUnitTest.h"
#include "../ProjectEducation/Solver.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SolverTests
{
	TEST_CLASS(SolverTests)
	{
	public:
		
		TEST_METHOD(ParamConstructorTest)
		{
			Solver s(1, -5, 4);
			Assert::IsTrue(s.get_a() == 1);
			Assert::IsTrue(s.get_b() == -5);
			Assert::IsTrue(s.get_c() == 4);
		}

		TEST_METHOD(DikriminantTest)
		{
			Solver s(1, -5, 4);
			s.Diskriminant();
			Assert::IsTrue(s.get_D() > 0);
		}
	};
}
