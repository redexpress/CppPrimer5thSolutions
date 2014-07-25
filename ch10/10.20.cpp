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


int main(){
    vector<string> vec = {"the", "quickbrownfox", "jumps", "over", "the", "lazydog"};
    cout << std::count_if(vec.begin(), vec.end(), [](string &s){ return s.size() > 6;}) << endl;
    return 0;
}