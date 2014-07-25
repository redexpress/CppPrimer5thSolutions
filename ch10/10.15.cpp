#include <iostream>

using std::cout;
using std::endl;

int main(){
    int a = 3;
    cout << [a](int b){return a+b;}(2) << endl;
    return 0;
}