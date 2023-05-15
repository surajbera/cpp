#include <iostream>
using namespace std;

int main()
{
  int x;
  cout << "Enter the value of x: ";
  cin >> x;
  int* int_ptr = &x;

  cout << "Value of x before incrementing -> " << x << endl;

  (*int_ptr)++;

  cout << "Value of x after incrementing -> " << x;
  return 0;
}