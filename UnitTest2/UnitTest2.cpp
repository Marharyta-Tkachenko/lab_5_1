#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			const double x = 3;
			const double y = 1;
			t = g(x, y);
			Assert::AreEqual(t, 2,88912.);
		}
	};
}
