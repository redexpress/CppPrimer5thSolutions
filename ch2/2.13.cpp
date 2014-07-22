#include <iostream>
#include <cassert>

int i = 42;
int main(){
	int i = 100;
	int j = i;
	assert(j==100);
	return 0;
}