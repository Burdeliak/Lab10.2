#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab10.2 A/Lab10.2A.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestLab102
{
	TEST_CLASS(TestLab102)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(string("Computer Science"), specialityToString(ComputerScience));
			Assert::AreEqual(string("Informatics"), specialityToString(Informatics));
			Assert::AreEqual(string("Math and Economics"), specialityToString(MathEconomics));
			Assert::AreEqual(string("Physics and Informatics"), specialityToString(PhysicsInformatics));
			Assert::AreEqual(string("Labor Studies"), specialityToString(LaborStudies));

		}
	};
}
