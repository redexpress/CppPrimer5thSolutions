#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

vector<int> * buildVector(){
	return new vector<int>();
}

vector<int> * readData(){
	vector<int> *vec = buildVector();
	int i;
	while(cin >> i)
		vec->push_back(i);
	return vec;
}

void printData(){
	vector<int> *vec = readData();
	for(int i : *vec){
		cout << i << endl;
	}
	delete vec;
}

int main(){
	printData();
	return 0;
}