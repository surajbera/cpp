#include <iostream>
using namespace std;
int main()
{
  int i = (4 + 7 / 5 * 6 * 6 + 9) % 100;
  cout << i;
}

/*
  - This is my calculation:
  ( 4 + 7 / 5 * 6 * 6 + 9 ) % 100
  (4 + (7 / 5 * 6 * 6) + 9) % 100
  (4 + (1 * 6 * 6) + 9) % 100
  (4 + (6 * 6) + 9) % 100
  (4 + 36 + 9) % 100
  49 % 100
*/