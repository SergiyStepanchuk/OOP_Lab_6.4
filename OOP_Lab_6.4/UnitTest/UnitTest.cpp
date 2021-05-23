#include "pch.h"
#include "CppUnitTest.h"

#include "../Program/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[5] = { 1, 2, 3, 4, 5 };
			sort_arr(A, 5);
			Assert::AreEqual(A[0], 5);
		}
	};
}
