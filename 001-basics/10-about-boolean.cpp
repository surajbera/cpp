#include <iostream>
using namespace std;

int main()
{
  cout << (5 > 3) << endl;
  int x = 3;
  int y = 3;
  cout << (x == y) << endl;

  /* Instead of true or false, 1 or 0 is returned in console */
  return 0;
}

/*
  - In C++, the boolean data type is represented by the keywords true and false, which have the values 1 and 0, respectively.

  - When you print a boolean value to the console using cout, C++ converts the boolean value to an integer and prints either 1 (if the boolean value is true) or 0 (if the boolean value is false).
*/