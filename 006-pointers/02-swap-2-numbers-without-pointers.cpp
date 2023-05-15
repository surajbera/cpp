#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
	return;
}

int main()
{
	int a = 1, b = 2;

	swap(a, b);

	cout << "Value of a is: " << a << endl;
	cout << "Value of b is: " << b << endl;

	return 0;
}

/*
	- Don't get confused.
	- The parameters int &a and int &b are references to integers. When you call swap(a, b) in main, the variables a and b are passed by reference to the swap function, so the function can modify their values directly. The temp variable in the swap function is used to temporarily store the value of a while the values of a and b are being swapped.
*/