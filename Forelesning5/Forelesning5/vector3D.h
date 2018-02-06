// vector3D.h
#ifndef VECTOR3Dm_H
#define VECTOR3Dm_H
#include "stdafx.h"
#include <iostream>  // Lets us use, istream, ostream, cin, cout.
using std::istream;
using std::ostream;
using std::cin;
using std::cout;

template <typename T>
class Vector3D
{

private:
	friend Vector3D operator*(T scalar, const Vector3D& v);  // NEW Multiply, version 2: scalar * vector.
	friend istream& operator>>(istream& inStream, Vector3D& v);  // NEW "InputFromCin".
	friend ostream& operator<<(ostream& outStream, const Vector3D& v);  // NEW "OutputToCout".

public:
	Vector3D();
	Vector3D(T x, T y, T z);
	Vector3D(const float coords[3]);

	float Length() const;
	void Normalize();

	bool operator==(const Vector3D& v) const;  // NEW "Equals".
	bool operator!=(const Vector3D& v) const;  // NEW "!Equals".
	Vector3D operator+(const Vector3D& v) const;  // NEW "Add".
	Vector3D operator-(const Vector3D& v) const;  // NEW "Subtract".
	Vector3D operator*(float scalar) const;  // NEW "Multiply", version 1: vector * scalar. 
	float operator*(const Vector3D& v) const;  // NEW "Dot".

	operator const float*() const;  // NEW "ToFloatPtr".
	void CopyToFloatArray(float copy[3]) const;

private:
	void SetCoordinates(T x, T y, T z) { m_x = x; m_y = y; m_z = z; }

	float m_x;
	float m_y;
	float m_z;
};

#endif  // END inclusion guard