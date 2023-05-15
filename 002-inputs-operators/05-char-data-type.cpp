#include <iostream>
using namespace std;

int main()
{
  char ch = '!';
  // char ch1 = 'ab'; /* this is not allowed */
  char ch2 = '1'; /* 1 is a char and not a number */
  cout << ch2 << endl;

  return 0;
}

/*
  - Each character has an ASCII value associated with it.

  - No need to remember ASCII value of a character. But remember ASCII for these 3 characters: a -> 97, A -> 65, 0 -> 48
*/