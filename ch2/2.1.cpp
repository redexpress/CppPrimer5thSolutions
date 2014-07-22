#include <iostream>
#include <climits>
#include <cfloat>
#include <iomanip>

using std::cout;
using std::endl;
using std::setprecision;

int main(){
	//defined in <climits>
	int intMin = INT_MIN;
	int intMax = INT_MAX;
	cout << intMin << " " << intMax << endl;
	long longMin = LONG_MIN;
	long longMax = LONG_MAX;
	cout << longMin << " " << longMax << endl;
	long long longLongMin = LONG_LONG_MIN;
	long long longLongMax = LONG_LONG_MAX;
	cout << longLongMin << " " << longLongMax << endl;
	short shortMin = SHRT_MIN;
	short shortMax = SHRT_MAX;
	cout << shortMin << " " << shortMax << endl;
	unsigned unsignedIntMax = UINT_MAX;
	cout << unsignedIntMax << endl;
	//defined in <cfloat>
	float floatMin = FLT_MIN;
	float floatMax = FLT_MAX;
	cout << floatMin << " " << floatMax << endl;
	double doubleMin = DBL_MIN;
	double doubleMax = DBL_MAX;
	cout << doubleMin << " " << doubleMax << endl;
	float f = 3.14149265358979323846;
	double d = 3.14149265358979323846;
	//output: 3.1414926052093505859375 3.14149265358979334905598079786
	cout << setprecision(30) << f << " " << d << endl;

	return 0;
}