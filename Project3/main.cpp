#include <iostream>
using namespace std;
int main()
{
	size_t grn; size_t kop; cout << "Enter grivna -> "; cin >> grn; cout << "Enter kopijky -> "; cin >> kop; cout << ((kop > 100 ? ++grn : true) ? grn : true) << "grn  " << ((100 > kop) ? kop : kop - 100) << "kop" << endl;
	//size_t x;
	//size_t y;
	//cin >> x;
	//cin >> y;
	//size_t k = x / y;
	//cout << x / k <<endl;
	return 0;
};
