#include "stdafx.h"
#include "CppUnitTest.h"
#include "RootFinder.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Ici, votre code de test
		}
		TEST_METHOD(BasicTest)
		{
			CRootFinder rooter;
			Assert::AreEqual(
				// Expected value:
				0.0,
				
				// Actual value:
				rooter.SquareRoot(0.0),
				
				// Tolerance:
				0.01,
				
				// Message:
				L"Basic test failed",
				
				// Line number - used if there is no PDB file:
				LINE_INFO());
		}
	};
}