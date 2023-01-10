#include <iostream>
using namespace std;
int main()
{	
	size_t grn; size_t kop; cout << "Enter grivna -> "; cin >> grn; cout << "Enter kopijky -> "; cin >> kop; cout << ((kop > 100 ? ++grn : true) ? grn : true) << "grn  " << (100 > kop ? kop : true) << "kop" << endl;
	return 0;
};

