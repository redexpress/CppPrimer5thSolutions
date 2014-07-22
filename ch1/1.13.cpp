#include <iostream>

using std::cin;
using std::cout;
using std::endl;

inline int min(int a, int b){
	return (a > b) ? b : a;
}

inline int max(int a, int b){
	return (a < b) ? b : a;
}

int main(){
	cout << "Enter two numbers:" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	for (int i = min(v1, v2); i <= max(v1, v2); i++){
		cout << i << " ";
    }
	cout << endl;
	return 0;
}