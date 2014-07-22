#include <iostream>
#include <string>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;

int main(){
	Sales_item total, item;
	string isbn;
	while(cin >> item){
		if(item.isbn().empty()){
			isbn = item.isbn();
		}
		if(isbn == item.isbn()){
			total += item;
		} else {
			cerr << "Data must refger to same ISBN" << endl;
			return -1;
		}
	}
	cout << total << endl;
	return 0;
}