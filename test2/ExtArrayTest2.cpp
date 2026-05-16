#include "pch.h"
#include "CppUnitTest.h"
#include "../ExtArrayTask2/ExtArray.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ExtArrayTest2
{
	TEST_CLASS(ExtArrayTest2)
	{
	public:
		
		TEST_METHOD(TestMeanNormal)
		{
			ExtArray<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8 };
			double result = arr.mean(2, 6);
			Assert::AreEqual(5.0, result, 0.001);
		}

		TEST_METHOD(TestMeanError)
		{
			ExtArray<int> arr = { 10, 20, 30, 40, 50, 60, 70, 80 };
			Assert::ExpectException<std::invalid_argument>([&](){ arr.mean(5, 2); });
		}

		TEST_METHOD(TestMeanError2)
		{
			ExtArray<int> arr = { 10, 20, 30, 40, 50 };
			Assert::ExpectException<std::invalid_argument>([&]() { arr.mean(2, 2); });
		}

		TEST_METHOD(TestMeanEmptyArray)
		{
			ExtArray<int> arr = {};
			auto func = [&]() { arr.mean(); };
			Assert::ExpectException<std::runtime_error>(func);
		}

		TEST_METHOD(TestMeanSingleElement)
		{
			ExtArray<int> arr = { 42 };
			Assert::AreEqual(42.0, arr.mean(), 0.001);
		}

	};
}
