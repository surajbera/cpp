#include <iostream>
using namespace std;

int main()
{
  int a = 10;
  int b = 10;
  int c = 10;
  int d = 10;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;

  cout << "a++ = " << a++ << endl;
  cout << "++b = " << ++b << endl;
  cout << "c-- = " << c-- << endl;
  cout << "--d = " << --d << endl;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;

  return 0;
}
