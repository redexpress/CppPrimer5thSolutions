#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

template <typename T> void printVector(vector<T> &vec){
     if (vec.empty()) {
         cout << "(empty)\n";
         return;
     }
     typename vector<T>::iterator iter = vec.begin();
     while (iter!=vec.end()) {
         cout << '<' << *iter << '>';
         iter++;
     }
     cout << endl;
}

int main(){
    vector<int> v1;
    printVector(v1);
    vector<int> v2(10);
    printVector(v2);
    vector<int> v3(10,42);
    printVector(v3);
    vector<int> v4{10};
    printVector(v4);
    vector<int> v5{10,42};
    printVector(v5);
    vector<string> v6{10};
    printVector(v6);
    vector<string> v7{10, "hi"};
    printVector(v7);
    return 0;
}