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
    string s = "hello";
    vector<string> vec = {"the", "quickbrownfox", "jumps", "over", "the", "lazydog"};
    cout << * std::find_if(vec.begin(), vec.end(), std::bind(checkSize, std::placeholders::_1, s)) << endl;
    return 0;
}