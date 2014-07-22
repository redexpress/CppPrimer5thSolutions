#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;

int main(){
	Sales_item item;
	while(cin >> item){
		cout << item << endl;
	}
	return 0;
}