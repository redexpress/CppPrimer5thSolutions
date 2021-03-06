#include <iostream>
#include <vector>
#include <memory>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::shared_ptr;

void process(shared_ptr<int> ptr){
	cout << *ptr << endl;
}

int main(){
	shared_ptr<int> p(new int(42));
	process(p);
	process(shared_ptr<int>(new int(42)));
	return 0;
}