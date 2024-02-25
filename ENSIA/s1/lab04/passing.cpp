// C++ program to illustrate
// call by value
#include <iostream>
using namespace std;

void func(int a, int b)
{
	a += b;
	cout << "In func, a = " << a << " b = " << b << endl;
}
int main(void)
{
	int x = 5, y = 7;

	// Passing parameters
	func(x, y);
	cout << "In main, x = " << x << " y = " << y;
	return 0;
}

// This code is contributed by shivanisinghss2110
