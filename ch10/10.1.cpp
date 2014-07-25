#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;


int main(){
    vector<int> vec;
    int value, i;
    cin >> value;
    while (cin >> i) {
        vec.push_back(i);
    }
    cout << std::count(vec.begin(), vec.end(), i) << endl;
	return 0;
}