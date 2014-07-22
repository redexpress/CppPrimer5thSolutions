#include <iostream>

using std::cout;
using std::endl;

int main(){
	int i = 42;
	int *p1 = &i;
	*p1 = *p1 * *p1;
	cout << *p1 << " " << i << endl;
}