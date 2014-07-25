#include <iostream>

using std::cout;
using std::endl;

int main(){
    cout << [](int a, int b){return a+b;}(3, 2) << endl;
    return 0;
}