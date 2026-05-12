#include "pch.h"
#include "CppUnitTest.h"
#include "../ExtArrayTask1/ExtArray.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ExtArrayTest1
{
	TEST_CLASS(ExtArrayTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ExtArray<int> arr(0);  
			double result = arr.mean();
			Assert::AreEqual(0.0, result, 0.001, L"Mean of empty array should return 0");
		}
		
		TEST_METHOD(TestMedianOnEmptyArray)
		{
			ExtArray<int> arr(0);
			double result = arr.median();
			Assert::AreEqual(0.0, result, 0.001, L"Median of empty array should return 0");
		}

		TEST_METHOD(TestModeOnEmptyArray)
		{
			ExtArray<int> arr(0);
			auto result = arr.mode();
			Assert::AreEqual(0, result.second, L"Mode frequency should be 0 for empty array");
			Assert::AreEqual(0, result.first, L"Mode value should be default-constructed value (0 for int)");
		}
	};
}
