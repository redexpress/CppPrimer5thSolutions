#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <functional>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;

int main(){
    list<string> list;
    string value, s;
    cin >> value;
    while (cin >> s) {
        list.push_back(s);
    }
    cout << std::count(list.begin(), list.end(), value) << endl;
	return 0;
}