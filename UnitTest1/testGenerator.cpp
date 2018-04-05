#include "stdafx.h"
#include "CppUnitTest.h"
#include <cstdlib>
#include <ctime>

#include "../Core/generator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitGenerator)
	{
	public:
		
		TEST_METHOD(SingleNUM)
		{
			srand(time(0));
			int val = rand() % 50000;
			Node node1(val);
			bool status;
			status = node1.calc_val();
			Assert::IsTrue(status);
			Assert::AreEqual(val, node1.get_val());
		}

	};
}