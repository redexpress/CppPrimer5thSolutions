#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

void printVecetorByCopy(const vector<int> &vec){
    if (vec.empty()) {
        return;
    }
    vector<int> v = vec;
    cout << *v.begin() << endl;
    v.erase(v.begin(), v.begin()+1);
    printVecetorByCopy(v);
}

void printVectorFirstN(const vector<int> &vec, vector<int>::size_type size){
    if (size == 0) {
        return;
    } else if (size == 1) {
        cout << vec[0] << endl;
        return;
    }
    printVectorFirstN(vec, size - 1);
    cout << vec[size-1] << endl;
}

void print(const vector<int> &vec){
    printVectorFirstN(vec, vec.size());
}

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    print(vec);
    return 0;
}