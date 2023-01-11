#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double r;
	cout << "Measuring a size of a ball. \nEnter a data (cm): \n   Radius: "; cin >> r;
	double s;
	s = (static_cast<double>(4) / 3) * M_PI * pow(r, 3);
	cout << "Size (V) = " << s << "cube cm";

};
