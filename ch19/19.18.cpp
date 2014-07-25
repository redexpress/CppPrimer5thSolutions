#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int countEmpty(vector<string> &vec){
    size_t count = std::count_if(vec.begin(), vec.end(), [](const string &s){return s.empty();} );
    return static_cast<int>(count);
}

int main(){
	vector<string> vec = {"a", "", "b", ""};
	int emptyCount = countEmpty(vec);
	cout << emptyCount << endl;
	return 0;
}