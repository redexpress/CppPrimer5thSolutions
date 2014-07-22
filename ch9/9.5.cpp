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

vector<int>::iterator dataIter(vector<int>::iterator begin, vector<int>::iterator end, int value){
    auto iter = begin;
    while (iter != end) {
        if(*iter == value){
            return iter;
        }
        iter++;
    }
    return begin;
}

int main(){
    vector<int> vec = {1, 3, 5, 7, 9};
    cout << *dataIter(vec.begin(), vec.end(),8) << endl;
    return 0;
}