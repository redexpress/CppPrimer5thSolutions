#include <iostream>
#include <vector>
#include <memory>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::shared_ptr;

inline shared_ptr<vector<int>> buildVector(){
	return shared_ptr<vector<int>>(new vector<int>());
}

shared_ptr<vector<int>> readData(){
	shared_ptr<vector<int>> vec = buildVector();
	int i;
	while(cin >> i)
		vec->push_back(i);
	return vec;
}

void printData(){
	shared_ptr<vector<int>> vec = readData();
	for(int i : *vec){
		cout << i << endl;
	}
}

int main(){
	printData();
	return 0;
}