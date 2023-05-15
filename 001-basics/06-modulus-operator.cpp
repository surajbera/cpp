#include <iostream>
using namespace std;

int main()
{
  cout << 99 % (-4) << endl;    /* 3 */
  cout << (-99) % 4 << endl;    /* -3 */
  cout << (-99) % (-4) << endl; /* -3 */

  return 0;
}

/*
  COMMENT: In C++, the sign of the result of the modulo operator (%) is determined by the sign of the numerator (left-hand operand), not the denominator (right-hand operand).
*/