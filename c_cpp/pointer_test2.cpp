#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int a ;
	int* pA;
	
	a = 5;
	pA = &a;
	
	cout<<"val a value is: " << a << "\n";
	
	*pA = 50;
	
	cout << "val a has changed to: " << a << "\n";
	
	return 0;
	
}