#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.1/5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double s = 1.0;
			double t = 1.0;

			double numerator = pow(h(pow(t, 2), 1), 3) + h(1, t * pow(s, 2));
			double denominator = 1 + pow(h(s, t), 2);

			double result = numerator / denominator;

			double expected = 1.38177;

			Assert::AreEqual(result, expected, 1e-5);

		}
	};
}
