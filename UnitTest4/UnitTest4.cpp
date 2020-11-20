#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = S1(2, 3, 0);
				Assert::AreEqual(t, 0);
		}
	};
}
