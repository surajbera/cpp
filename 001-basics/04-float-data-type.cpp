#include <iostream>
using namespace std;

int main()
{
  float x = 5;
  float y = 2;
  // float z = x / y;
  int z = x / y;
  cout << z << endl;

  cout << 5 / 2 << endl;
  cout << 5.0 / 2 << endl;
  cout << 5 / 2.0 << endl;
  cout << 5.0 / 2.0 << endl;
  /* If any 1 component is float, answer will be a floating value */

  /* These nitty gritty stuffs can come in predict the output questions */

  return 0;
}
/*
  COMMENT: If either the numerator or denominator in a division operation is a floating point value (such as a float or a double), then the result will be a floating point value
*/