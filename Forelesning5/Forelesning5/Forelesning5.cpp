// Forelesning5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "vector3D.h"
#include <iostream>
#include "TemplateTest.h"

using namespace std;
int main()
{

	TemplateTest<int> tt;
	int i = 10; 
	int fa = 33;
	cout << tt.add(i, fa) << endl;
    return 0;
}

