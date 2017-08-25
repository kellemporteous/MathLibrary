#include "MathLibrary.h"
#include <stdexcept>

using namespace std;

namespace MathFunctions
{
#pragma region BasicMath
		double BasicMath::Add(double a, double b)
		{
			return a + b;
		}

		double BasicMath::Subtract(double a, double b)
		{
			return a - b;
		}

		double BasicMath::Multiply(double a, double b)
		{
			return a * b;
		}

		double BasicMath::Divide(double a, double b)
		{
			return a / b;
		}
#pragma endregion
#pragma region Vector3

	Vector3::Vector3()
	{
		x = y = z = 0;
	}

	Vector3::Vector3(float xx, float yy, float zz)
	{
		x = xx; y = yy; z = zz;
	}

	Vector3 Vector3::Lerp(Vector3 a, Vector3 b, float t)
	{
		return (a + t * (b - a));
	}

	Vector3 Vector3::NLerp(Vector3 a, Vector3 b, float t)
	{
		return Lerp(a, b, t).normaliseCopy();
	}
#pragma endregion
}