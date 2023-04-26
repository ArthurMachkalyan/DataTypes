#include<iostream>
using namespace std;
#define delimetr "\n----------------\n"
//#define logical_types 
void main()
{
	setlocale(LC_ALL, "Russian");
#if defined logical_types 
	cout << "DataTypes" << endl;
	cout << true << endl;
	cout << false << endl;
#endif

	cout << sizeof(int) << endl;
	cout << INT_MIN << "..." << INT_MAX << endl;
	cout << "0..." << UINT_MAX;
	cout << delimetr << endl;
	
	cout << sizeof(long long) << endl;
	cout << 0 << "..." << LLONG_MAX << endl;
}