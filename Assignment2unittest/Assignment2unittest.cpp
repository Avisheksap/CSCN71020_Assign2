#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int *length, int *width); 
extern "C" int getArea(int *length, int *width);
extern "C" void setWidth(int input, int *width);
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

	


		
	};
}
