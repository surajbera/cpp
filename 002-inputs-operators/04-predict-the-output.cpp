#include <iostream>
using namespace std;

int main()
{
  int p = 1;
  int q = 2;
  int r = 2;

  cout << (p == q == r);
  // (p == q) == r
  // --> (1 == 2) == 0
  // --> 0 == 2 --> 0
  // evaluation goes from left to right

  return 0;
}
