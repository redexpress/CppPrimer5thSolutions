#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(){
    vector<int> vec = {1, 3, 5, 7, 9};
    vector<int>::iterator iter1 = vec.begin(), iter2 = vec.end();
    while (iter1 < iter2) {
        cout << *iter1 << endl;
        iter1++;
    }
	return 0;
}