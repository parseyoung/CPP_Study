// Func Template Specialization (함수 템플릿 특수화)
// Storage.h 에 구현되어 있음

#include <iostream>
#include "Storage.h"
using namespace std;

template<typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

template<>
char getMax(char x, char y)
{
	cout << "Warning : comparing chars " << endl;

	return (x > y) ? x : y;
}

int main()
{
	/*
	cout << getMax(1, 2) << endl;
	cout << getMax('a', 'b') << endl;
	*/

	Storage<int> nValue(5);
	Storage<double> dValue(6.7);

	nValue.print();
	dValue.print();

	return 0;
}