#pragma once
template <class T>
class TemplateTest
{
public:
	TemplateTest();
	~TemplateTest();
	T add(T one, T two);
};

template <class T>
TemplateTest<T>::TemplateTest()
{
}

template <class T>
TemplateTest<T>::~TemplateTest()
{
}

template <class T>
T TemplateTest<T>::add(T one, T two)
{
	return one + two;
}

