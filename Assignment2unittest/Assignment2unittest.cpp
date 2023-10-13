#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int *length, int *width); 
extern "C" int getArea(int *length, int *width);
extern "C" void setLength(int input, int *length);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Assignment2unittest
{
	TEST_CLASS(Assignment2unittest)
	{
	public:
		
		TEST_METHOD(GetPerimeter)
		{
			    // Arrange
				int length = 5;
				int width = 3;
				int expectedPerimeter = 16; // The expected perimeter for a rectangle with length 5 and width 3

				// Act: Call the getPerimeter function
				int result = getPerimeter(&length, &width);

				// Assert: Check if the result matches the expected value
				Assert::AreEqual(expectedPerimeter, result);
		}

		TEST_METHOD(GetArea)
		{
			// Arrange
			int length = 5;
			int width = 4;
			int expectedArea = 20; // The expected area for a rectangle with length 5 and width 3

			// Act: Call the getArea function
			int result = getArea(&length, &width);

			// Assert: Check if the result matches the expected value
			Assert::AreEqual(expectedArea, result);
		}

		TEST_METHOD(SetLength_Case1)
		{
			int length = 0; // Initializing width
			int input = 42; // Valid input within the range
			setLength(input, &length);
			Assert::AreEqual(42, length);
		}

		TEST_METHOD(SetLength_Case2)
		{
			int length = 0; // Initializing width
			int input = 1; // Lower bound input
			setLength(input, &length);
			Assert::AreEqual(1, length);
		}

		TEST_METHOD(SetLength_Case3)
		{
			int length = 0; // Initializing width
			int input = 99; // Upper bound input
			setLength(input, &length);
			Assert::AreEqual(99, length); // 
		}

	
	};
}
