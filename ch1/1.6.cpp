#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	cout << "Enter two numbers:" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	cout << "The product of " << v1;
	cout << " and " << v2;
	cout << " is " << v1 * v2 << endl;
	return 0;
}