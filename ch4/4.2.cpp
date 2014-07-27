
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::string;

int main(){
    vector<int *> vec;
    int i = 3;
    vec.push_back(&i);
    
    int *p = *vec.begin();
    int *q = *(vec.begin());
    cout << *p << ' ' << *q << endl;
    p = *vec.begin() + 1;
    q = *(vec.begin()) + 1;
    cout << *(--p) << ' ' << *(--q) << endl;
    
    return 0;
}

