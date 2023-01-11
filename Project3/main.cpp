#include <iostream>
using namespace std;
int main()
{
	size_t l;
	size_t w;
	size_t h;
	cout << "Measuring a size of a parallelepiped. \nEnter a data (cm): \n   Length: "; cin >> l; 
	cout << "   Width: "; cin >> w;
	cout << "   Height: "; cin >> h;
	size_t s;
	s = l * w * h;
	cout << "Size (V) = " << s << "cube cm";

};

