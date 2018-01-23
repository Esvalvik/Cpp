#pragma once
class Kalkulator
{
private:
	double m_lastResult;
	void setLastResult(double number);

public:
	double add(double x, double y);
	double subtract(double x, double y);
	double multiply(double x, double y);
	double divide(double x, double y);
	Kalkulator(double number);
	~Kalkulator();
};

