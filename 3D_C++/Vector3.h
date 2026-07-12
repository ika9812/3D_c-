#pragma once
#include <cmath>
class Vector3
{
public:
	float x, y, z;

	Vector3();
	Vector3(float x, float y, float z);

	float Length() const;
	Vector3 Normalize() const;

};

