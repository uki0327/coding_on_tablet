#include <iostream>
using namespace std;

template <class T>
T maxt(T x, T y) 
{
	if(x>y)
		return x;
	else
		return y;
		
}

int main() {
	int a, b;
	double da, db;
	
	cout << "정수 2개를 입력하세요. \n";
	cin >> a >> b;
	
	cout << "실수 2개를 입려하세요. \n";
	cin >> da >> db;
	
	int ans1 = maxt(a,b);
	double ans2 = maxt(da, db);
	
	cout << "입력받은 정수의 최대 값은 " << ans1 << " 입니다.\n";
	cout <<"입력받은 실수의 최대 값은 "<<ans2 << " 입니다.\n";
	
	return 0;
	
}