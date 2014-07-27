#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, const char * argv[]){
    string s("Gavin Yang");
    for (char c : s){ //!! Error
        c = 'X';
    }
    cout << s << endl;
    for (char &c : s){
        c = 'X';
    }
    cout << s << endl;
    return 0;
}
