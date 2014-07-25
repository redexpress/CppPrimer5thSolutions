#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <numeric>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void print(vector<string> vec){
    cout << "vector[" << vec.size() << "]: ";
    for (string s : vec) {
        cout << s << ' ';
    }
    cout << endl;
}

void elimDups(vector<string> &words){
    std::sort(words.begin(), words.end());
    print(words);
    auto end_unique = std::unique(words.begin(), words.end());
    print(words);
    words.erase(end_unique, words.end());
    print(words);
}

int main(){
    vector<string> vec = {"the", "quick", "fox", "the", "dog"};
    elimDups(vec);
    return 0;
}