#include "pch.h"
#include "CppUnitTest.h"
#include "../ExtArrayTask2/ExtArray.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ExtArrayTest2
{
	TEST_CLASS(ExtArrayTest2)
	{
	public:
		
		TEST_METHOD(TestMean1)
		{
			ExtArray<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8 };
			double result = arr.mean(2, 6);
			Assert::AreEqual(5.0, result, 0.001);
		}

		TEST_METHOD(TestMean2)
		{
			ExtArray<int> arr = { 10, 20, 30, 40, 50, 60, 70, 80 };
			Assert::ExpectException<std::invalid_argument>([&](){ arr.mean(5, 2); });
		}
	};
}
