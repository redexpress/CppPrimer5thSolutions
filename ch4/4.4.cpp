#include <iostream>
#include <cassert>

using std::cout;
using std::endl;
using std::string;

int main(){
    int i = 12 / 3 * 4 + 5 * 15 % 4 / 2;
    int j = ((12 / 3) * 4) + (((5 * 15) % 4) / 2);
    cout << i << ' ' << j << endl;
    assert(i == 17 && j == 17);
    return 0;
}
