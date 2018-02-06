// vector3D.cpp

#include <cmath>  // Lets us use math functions: sqrtf(...), pow(...).
#include "vector3D.h"


Vector3D::Vector3D()
{
	SetCoordinates(0.0, 0.0, 0.0);
}


Vector3D::Vector3D(float x, float y, float z)
{
	SetCoordinates(x, y, z);
}


Vector3D::Vector3D(const float coords[3])
{
	SetCoordinates(coords[0], coords[1], coords[2]);
}


istream &operator>>(istream& inStream, Vector3D& v)
{
	cout << "Enter x: ";
	inStream >> v.m_x;
	cout << "Enter y: ";
	inStream >> v.m_y;
	cout << "Enter z: ";
	inStream >> v.m_z;
	return inStream;
}


// Prints on form: "(x, y, z)"
ostream &operator<<(ostream& outStream, const Vector3D& v)
{
	outStream << "(" << v.m_x << ", " << v.m_y << ", " << v.m_z << ")";
	return outStream;
}


float Vector3D::Length() const
{
	//return sqrtf(pow(m_x, 2) + pow(m_y, 2) + pow(m_z, 2));
	return sqrtf((m_x * m_x) + (m_y * m_y) + (m_z * m_z));
}


bool Vector3D::operator==(const Vector3D& v) const
{
	return ((v.m_x == m_x) && (v.m_y == m_y) && (v.m_z == m_z));
}


bool Vector3D::operator!=(const Vector3D& v) const
{
	//return ((v.m_x != m_x) || (v.m_y != m_y) || (v.m_z != m_z));
	return (!(v == (*this)));
}


// u+v = (ux, uy, uz)+(vx, vy, vz) = (ux+vx, uy+vy, uz+vz)
Vector3D Vector3D::operator+(const Vector3D& v) const
{
	Vector3D result(m_x + v.m_x, m_y + v.m_y, m_z + v.m_z);
	return result;
}


// u-v = (ux, uy, uz)-(vx, vy, vz) = (ux-vx, uy-vy, uz-vz)
Vector3D Vector3D::operator-(const Vector3D &oV) const
{
	Vector3D oResult(m_x - oV.m_x, m_y - oV.m_y, m_z - oV.m_z);
	return oResult;
}


// u*k = (ux, uy, uz)*k = (ux*k,  uy*k, uz*k)
Vector3D Vector3D::operator*(float scalar) const
{
	Vector3D result(m_x * scalar, m_y * scalar, m_z * scalar);
	return result;
}


// NEW Multiply, version 2: scalar * vector.
Vector3D operator*(float scalar, const Vector3D& v)
{
	Vector3D result(v.m_x * scalar, v.m_y * scalar, v.m_z * scalar);
	return result;
}


// Sets vectorlength to 1.
void Vector3D::Normalize()
{
	// Find current length.
	float length = Length();

	// Divide each component by current length to get length of 1.
	m_x /= length;
	m_y /= length;
	m_z /= length;
}


// u*v = (ux, uy, uz)*(vx, vy, vz) = ux*vx + uy*vy + uz*vz
float Vector3D::operator*(const Vector3D& v) const
{
	return (m_x * v.m_x) + (m_y * v.m_y) + (m_z * v.m_z);
}


Vector3D::operator const float*() const  // Note: No return type for cast overloading.
{
	return &m_x;  // To students: How can this work as an array!?
}


void Vector3D::CopyToFloatArray(float copy[3]) const
{
	copy[0] = m_x;
	copy[1] = m_y;
	copy[2] = m_z;
}