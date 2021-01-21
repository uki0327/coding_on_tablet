#include <iostream>
using namespace std;

void swap(int* pX, int*pY);

int main(int argc, char *argv[])
{
	int num1 = 5;
	int num2 = 10;
	
	cout	
}

void swap(int* pX, int*pY) {
	int tmp;
	
	tmp = *pX;
	*pX = *pY;
	*pY = tmp;
}