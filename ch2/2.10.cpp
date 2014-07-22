#include <iostream>
#include <string>

//#define ASSERT 1
#ifdef ASSERT
#include <cassert>
#endif

using std::cout;
using std::endl;
using std::string;

string global_str;
int global_int;

int main(){
	int local_int;
	string local_str;
	cout << global_str << " " << global_int << endl;
	cout << local_str << " " << local_int << endl;
	#ifdef ASSERT
	assert(global_str == string(""));
	assert(local_str == string(""));
	#endif
	return 0;
}