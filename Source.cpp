#include "Array.h"
#include <iostream>
#include <time.h>
#include <stdexcept>
#include <exception>
#include <cmath>
using namespace std;
typedef Array::value_type* TArray;
int main()
{
	int n;
	cout << "n= "; cin >> n;
	Array c = Array(n);

	srand((unsigned)time(NULL));
	Array::value_type A = -50;
	Array::value_type B = 50;
	TArray a = new Array::value_type[n];
	for (int i = 0; i < n; i++)
		a[i] = A + rand() % int(B - A + 1);
	Array::iterator l = const_cast<Array::iterator>(c.begin());
	for (int j = 0; j < n; j++, l++)
		*l = a[j];
	c.push_back(c.sum(c));
	c.push_back(c.ser_aryf(c));
	cout << c;

	c.change(c);
	cout << "zamina vid`yemnyh na kvadrat naimenshogo: " << c << endl;
	return 0;
}