#include "pch.h"
#include "CppUnitTest.h"
#include "../ExtArrayTask3/ExtArray.h"
#include <exception>


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ExtArrayTest3
{
	TEST_CLASS(ExtArrayTest3)
	{
	public:
		TEST_METHOD(TestCheckSumType1)
		{
			ExtArray<int> arr = { 1, 0, 1, 1, 0 };
			int result = arr.checkSum();
			Assert::AreEqual(3, result);
		}

		TEST_METHOD(TestCheckSumType2)
		{
			ExtArray<bool> arr = { 1, 0, 1, 1, 0 };
			int result = arr.checkSum();
			Assert::AreEqual(3, result);
		}

		TEST_METHOD(TestCheckSumType3)
		{
			ExtArray<double> arr = { 1.1, 2.2, 3.3 };
			Assert::ExpectException<std::bad_typeid>([&]() { arr.checkSum(); });
		}

		TEST_METHOD(TestCheckSumValid1)
		{
			ExtArray<int> arr = { 0, 1, 0, 1, 0, 1 };
			int result = arr.checkSum();
			Assert::AreEqual(3, result);
		}

		TEST_METHOD(TestCheckSumValid2)
		{
			ExtArray<int> arr = { 1, 0, 2, 1 };
			Assert::ExpectException<std::logic_error>([&]() { arr.checkSum(); });
		}

		TEST_METHOD(TestCheckSum)
		{
			ExtArray<int> arr = { 1, 1, 1, 1 };
			int result = arr.checkSum();
			Assert::AreEqual(4, result);
		}


	};
}
