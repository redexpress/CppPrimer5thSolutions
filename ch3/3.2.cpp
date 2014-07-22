#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void readLine(){
	string line;
	while(getline(cin, line))
		cout << line << endl;
}

void readWord(){
	string word;
	while(cin>>word)
		cout << word << endl;
}

int main(){
	readLine();
	return 0;
}