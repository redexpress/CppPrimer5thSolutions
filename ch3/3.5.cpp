#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, const char * argv[]){
    string longString, longStringWithSpace;
    string s;
    while (cin >> s) {
        longString += s;
        longStringWithSpace += (s + " ");
    }
    cout << longString << endl;
    cout << longStringWithSpace << endl;
    return 0;
}
