#include <iostream>

using std::cin;
using std::cout;
using std::endl;

inline int mininum(int a, int b){
	return (a > b) ? b : a;
}

inline int maximum(int a, int b){
	return (a < b) ? b : a;
}

int main(){
	cout << "Enter two numbers:" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	int max = maximum(v1, v2);
	int min = mininum(v1, v2);
	int val = min;
	while(val <= max){
		cout << val << " ";
		val++;
	}
	cout << endl;
	return 0;
}