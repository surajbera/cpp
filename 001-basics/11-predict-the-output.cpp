#include <iostream>
using namespace std;

int main()
{
  float a = 5, b = 2;
  cout << "a: " << a << ", "
       << "b: " << b << endl;
  float c;
  c = a % b; /* invalid operands */
  cout << c << endl;

  return 0;
}

/*
  COMMENT:
  - Initially, I thought that the output would be 1.0. But it is not.
  - Tutor said that a and b both have to be integers for this to work.
*/