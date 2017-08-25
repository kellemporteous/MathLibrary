#pragma once

namespace MathFunctions
{
	class BasicMath
	{
	public:
		static double Add(double a, double b);

		static double Subtract(double a, double b);

		static double Multiply(double a, double b);

		static double Divide(double a, double b);
	};

	class Vector3
	{
	public:
		float x, y, z;

		Vector3();

		Vector3(float xx, float yy, float zz);

		inline Vector3 operator+(const Vector3 &rhs) const
		{
			return Vector3(x + rhs.x, y + rhs.y, z + rhs.z);
		}

		inline Vector3 operator-(const Vector3 &rhs) const
		{
			return Vector3(x - rhs.x, y - rhs.y, z - rhs.z);
		}

		inline Vector3 operator*(const Vector3 &rhs) const
		{
			return Vector3(x * rhs.x, y * rhs.y, z * rhs.z);
		}		

		
		inline Vector3 operator/(const Vector3 &rhs) const
		{
			return Vector3(x / rhs.x, y / rhs.y, z / rhs.z);
		}

		inline Vector3 operator*(float f) const
		{
			return Vector3(x * f, y * f, z * f);
		}

		inline Vector3 operator/(float f) const
		{
			return Vector3(x / f, y / f, z / f);
		}


		friend inline Vector3 operator*(float f, const Vector3 &rhs)
		{
			return Vector3(f * rhs.x, f * rhs.y, f * rhs.z);
		}

		friend inline Vector3 operator/(float f, const Vector3 &rhs)
		{
			return Vector3(f / rhs.x, f / rhs.y, f / rhs.z);
		}

		inline float dot(const Vector3 &rhs) const
		{
			return x * rhs.x + y * rhs.y + z * rhs.z;
		}

		inline void normalise()
		{
			float length = sqrt(x*x + y*y + z*z);
				if (length > 0.0f)
				{
					x /= length;
					y /= length;
					z /= length;
				}
				else
				{
					x = y = z = 0.0f;
				}
		}

		inline Vector3 normaliseCopy() const
		{
			Vector3 temp(x, y, z);
			temp.normalise();
			return temp;
		}

		Vector3 Lerp(Vector3 a, Vector3 b, float t);
		Vector3 NLerp(Vector3 a, Vector3 b, float);
	};
}