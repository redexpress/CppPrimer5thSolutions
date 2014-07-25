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
    vector<int> vecInt = {1, 22, 300};
    cout << std::accumulate(vecInt.begin(), vecInt.end(), 0) << endl;
    return 0;
}