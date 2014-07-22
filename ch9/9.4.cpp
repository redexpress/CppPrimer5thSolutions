#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

bool findData(vector<int>::iterator begin, vector<int>::iterator end, int value){
    auto iter = begin;
    while (iter != end) {
        if(*iter == value){
            return true;
        }
        iter++;
    }
    return false;
}

int main(){
    vector<int> vec = {1, 3, 5, 7, 9};
    cout << findData(vec.begin(), vec.end(),9) << endl;
    return 0;
}