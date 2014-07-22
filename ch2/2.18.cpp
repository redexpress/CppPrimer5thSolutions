#include <iostream>

using std::cout;
using std::endl;

int main(){
	int i = 3, j = 7;
	int *p = &i;
	p = &j;		//change the value of a pointer
	cout << *p << " " << i << " " << j << endl;
	*p = 6;		//change the value to which the pointer points
	cout << *p << " " << i << " " << j << endl;
}