#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <numeric>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

bool checkSize(const string &s, const string &val){
    return s.size() > val.size();
}

int main(){
    int val = 5;
    vector<int> vec = {10, 20, 30, 45, 30, 20};
    cout << std::all_of(vec.begin(), vec.end(), [val](int i){ return i % val == 0;}) << endl;
    return 0;
}