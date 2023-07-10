#include <iostream>
using namespace std;

int main()
{
  int x = 4;
  int *ptr = &x; /* ptr is called an 'integer pointer', pointer variable is used to store address of a variable */
  cout << *ptr;  /* *ptr returns the value stored inside the address */
  ptr = ptr + 1; /* address stored in ptr is being incremented by 1(specifically incremented by 4 bytes in case of int) */
  cout << *ptr;  /* hence, garbage value is printed */

  return 0;
}