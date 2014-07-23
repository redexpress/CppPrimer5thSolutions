#include <iostream>
#include <string>
#include <map>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;
using std::map;
using std::pair;

int main(){
	map<string, size_t> isbnMap;
	Sales_item item;
	while(cin >> item){
		isbnMap[item.isbn()]++;
		// map<string, size_t>::iterator iter;
		// string isbn = item.isbn();
		// iter = isbnMap.find(isbn);
		// if(iter != isbnMap.end()){
		// 	int count = iter->second;
		// 	isbnMap.erase(iter);
		// 	isbnMap.insert(pair<string, size_t>(isbn, ++count));
		// } else {
		// 	isbnMap.insert(pair<string, size_t>(isbn, 1));
		// }
	}
	for (auto pr: isbnMap){
		cout << pr.first << " " << pr.second << endl;
	}
	return 0;
}