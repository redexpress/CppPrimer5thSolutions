#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
    int i;
    vector<int> vi;
    while (cin >> i) {
        vi.push_back(i);
    }
    for (int i : vi){
        cout << i << endl;
    }
    return 0;
}
