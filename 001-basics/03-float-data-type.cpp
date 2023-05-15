#include <iostream>
using namespace std;

int main()
{
  float f1 = 1.23456789;
  float f2 = 1.23456789f;
  double d1 = 1.23456789;
  double d2 = 1.23456789f;

  cout << "f1 = " << f1 << endl;
  cout << "f2 = " << f2 << endl;
  cout << "d1 = " << d1 << endl;
  cout << "d2 = " << d2 << endl;
  cout << "f1 + 1 = " << f1 + 1 << endl;

  return 0;
}