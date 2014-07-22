#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(){
    vector<int> vec = {1, 3, 5, 7, 9};
    vector<int> vec2(vec);
    vector<int> vec3 = vec;
    vector<int> vec4;
    vector<int> vec5{1, 3, 5, 7, 9};
    vector<int> vec6(vec.begin(), vec.end());
	return 0;
}