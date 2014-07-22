int main(){
	//int ival = 1.01;   !Error
	int ival = static_cast<int>(1.01);
	//int &rval1 = 1.01; !Error
	const int &rval1 = static_cast<int>(1.01);
	int &rval2 = ival;
	//int &rval3;        !Error
	return 0;
}