#include <iostream>
#include <climits>
#include <cassert>

using std::cout;
using std::endl;

int main(){
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)
		sum +=i;
	cout << i << " " << sum << endl;
	return 0;
}