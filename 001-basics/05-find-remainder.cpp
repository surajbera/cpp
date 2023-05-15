#include <iostream>
using namespace std;

int main()
{
  int a = 14;
  int b = 3;
  int q = a / b; /* quotient = dividend / divisor */
  int r;         /* remainder */

  r = a - (q * b); /* remainder = dividend - (quotient * divisor) */
  cout << r;

  return 0;
}

/*
  COMMENT: Find the remainder without using modulus(%) operator
*/