#include "stdafx.h"
#include "Kalkulator.h"


double Kalkulator::add(double x, double y)
{
	double z = x + y;
	setLastResult(z);
	return z;
}

double Kalkulator::subtract(double x, double y)
{
	double z = x - y;
	setLastResult(z);
	return z;
}

double Kalkulator::multiply(double x, double y)
{
	double z = x * y;
	setLastResult(z);
	return z;
}

double Kalkulator::divide(double x, double y)
{
	if (y == 0)
	{
		y = 1;
	}
	double z = x / y;
	setLastResult(z);
	return z;
}

void Kalkulator::setLastResult(double number)
{
	m_lastResult = number;
}
Kalkulator::Kalkulator(double number)
{
	setLastResult(number);
}


Kalkulator::~Kalkulator()
{
}
