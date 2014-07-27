#include <iostream>
#include <string>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void usingRemoveIf();
void usingIterator();
void usingCStyle();

int main(){
    usingCStyle();
    usingIterator();
    usingRemoveIf();
    return 0;
}

void usingCStyle(){
    string s;
    //s = "abc,,,,ok.aasdfasdf.haha";
    cin >> s;
    char str[BUFSIZ];
    strcpy(str, s.c_str());
    size_t len = strlen(str);
    int i = 0;
    for (; i < len; i++) {
        if (ispunct(str[i])) {
            for (int j=i; j<len-1; j++) {
                str[j] = str[j+1];
            }
            str[len-1] = '\0';
            len = strlen(str);
            i = 0;
        }
    }
    cout << str << endl;
}

void usingRemoveIf(){
    string s;
    cin >> s;
    auto position = std::remove_if(s.begin(), s.end(), [](char c){ return ispunct(c); });
    s.erase(position, s.end());
    cout << s << endl;
}

void usingIterator(){
    string s;
    cin >> s;
    for (auto iter = s.begin(); iter!=s.end(); iter++) {
        if (ispunct(*iter)) {
            s.erase(iter);
            iter = s.begin();
        }
    }
    cout << s << endl;
}