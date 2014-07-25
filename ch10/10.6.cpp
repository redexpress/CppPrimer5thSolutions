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
    vector<double> vec = {1, 22, 300, 4, 5};
    int arr[] = {1, 2, 3, 4 ,5};
    std::fill_n(arr, std::end(arr)-std::begin(arr), 0);
    std::fill(vec.begin(), vec.end(), 0);
    cout << "array:" << endl;
    for(int i : arr){
        cout << i << endl;
    }
    cout << "vector:" << endl;
    for(int i : vec){
        cout << i << endl;
    }
}