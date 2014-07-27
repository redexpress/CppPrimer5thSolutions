#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, const char * argv[]){
    string s("Gavin Yang");
    auto iter = s.begin();
    while (iter!=s.end()) {
        *iter = 'X';
        iter++;
    }
    cout << s << endl;
    s = "Gavin Yang";
    for (auto iter = s.begin(); iter!=s.end(); iter++) {
        *iter = 'X';
    }
    cout << s << endl;
    s = "Gavin Yang";
    for (char &c : s){
        c = 'X';
    }
    cout << s << endl;
    return 0;
}