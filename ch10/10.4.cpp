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
    vector<double> vec = {1, 22, 300};
    //cout << std::accumulate(vec.cbegin(), vec.cend(), 0) << endl; !!Error
    cout << std::accumulate(vec.begin(), vec.end(), 0) << endl;
    return 0;
}