#include <iostream>
#include <climits>
#include <cassert>

using std::cout;
using std::endl;

int main(){
	unsigned u = 10, u2 = 42;
	cout << u2 -u << endl;
	cout << u - u2 << endl;
	cout << UINT_MAX - 31<< endl;
	assert(u - u2 == UINT_MAX - 31);
	int i = 10, i2 = 42;
	cout << i2 - i << endl;
	cout << i - i2 << endl;
	cout << i - u << endl;
	cout << u - i << endl;
	return 0;
}