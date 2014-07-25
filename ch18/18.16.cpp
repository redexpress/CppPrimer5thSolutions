#include <iostream>

using std::cout;

namespace Exercise{
	int ivar = 10;
	double dvar = 100;
	const int limit = 1000;
}

namespace Exercise2{
	int ivar2 = 20;
	double dvar2 = 200;
	const int limit2 = 2000;
}

namespace Exercise3{
	int ivar3 = 30;
	double dvar3 = 300;
	const int limit3 = 3000;
}

namespace Exercise4{
	int ivar4 = 40;
	double dvar4 = 400;
	const int limit4 = 4000;
}

int ivar = 0;
int ivar2 = 0;
int ivar3 = 0;
int ivar4 = 0;

using Exercise::limit;

void manip(){
	double dvar = 3.1416;
	int iobj = limit + 1;
	++ivar;
	++::ivar;
	cout << dvar << ' ' << iobj << ' ' << ivar << ' ' << ::ivar << '\n';
}

void manip2(){
	using Exercise2::limit2;
	double dvar2 = 3.1416;
	int iobj2 = limit2 + 1;
	++ivar2;
	++::ivar2;
	cout << dvar2 << ' ' << iobj2 << ' ' << ivar2 << ' ' << ::ivar2 << '\n';
}

using namespace Exercise3;
void manip3(){
	double dvar3 = 3.1416;
	int iobj3 = limit3 + 1;
	++Exercise3::ivar3;
	++::ivar3;
	cout << dvar3 << ' ' << iobj3 << ' ' << Exercise3::ivar3 << ' ' << ::ivar3 << '\n';
}

void manip4(){
	using namespace Exercise4;
	double dvar4 = 3.1416;
	int iobj4 = limit4+ 1;
	++Exercise4::ivar4;
	++::ivar4;
	cout << dvar4 << ' ' << iobj4 << ' ' << Exercise4::ivar4 << ' ' << ::ivar4 << '\n';
}

int main(){
	manip();
	manip2();
	manip3();
	manip4();
	return 0;
}