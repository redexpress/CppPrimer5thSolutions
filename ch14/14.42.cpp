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

int funcA(vector<int> &v){
    //size_t count = std::count_if(v.begin(), v.end(), std::bind2nd(std::greater<int>(), 1024));   //C++ 98
    size_t count = std::count_if(v.begin(), v.end(), std::bind(std::greater<int>(), std::placeholders::_1, 1024));
    return static_cast<int>(count);
}

string funcB(vector<string> &v){
    auto iter = std::find_if(v.begin(), v.end(), std::bind(std::not_equal_to<string>(), std::placeholders::_1, "pooh"));
    if (iter != v.end())
        return *iter;
    string s("");
    return s;
}

void funcC(vector<int> &v){
    std::transform(v.begin(), v.end(), v.begin(), [](int i){ return i *2;});
}

int main(){
    vector<int> vecInt = {2000, 1000, 500, 2300, 1024};
    vector<string> vecStr = {"pooh", "yes", "pooh", "no"};
    cout << funcA(vecInt) << endl;
    cout << funcB(vecStr) << endl;
    funcC(vecInt);
    for (int i : vecInt) {
        cout << i << endl;
    }
    return 0;
}