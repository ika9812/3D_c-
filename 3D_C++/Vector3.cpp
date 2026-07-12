#include "Vector3.h"

Vector3::Vector3() :x(0.0f), y(0.0f), z(0.0f) {}

Vector3::Vector3(float x, float y, float z) :x(x), y(y), z(z) {}

float Vector3::Length() const
{
	return std::sqrt(x * x + y * y + z * z);
}

Vector3 Vector3::Normalize() const
{
	float length = Length();

	if (length == 0.0f)
	{
		return Vector3(0.0f, 0.0f, 0.0f);
	}

	return Vector3(x / length, y / length, z / length);
}