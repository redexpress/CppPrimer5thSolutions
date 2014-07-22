#include <iostream>

void test1(){
	std::cout << "/*";
}

void test2(){
	std::cout << "*/";
}

void test3(){
	//std::cout << /* "*/" */;
}

void test4(){
	//std::cout << /* "*/" /* "/*" */;
	std::cout << "*/";
}

int main(){
	test1();
	test2();
	test3();
	test4();
	return 0;
}