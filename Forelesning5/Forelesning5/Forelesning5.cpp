// Forelesning5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "vector3D.h"
#include <iostream>

int main()
{
	Vector3D* v = new Vector3D(3, 3, 3);
	cout << *v << std::endl;
    return 0;
}

