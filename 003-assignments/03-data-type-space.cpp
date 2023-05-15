#include <iostream>
using namespace std;

int main()
{
  cout << "Size of int: " << sizeof(int) << endl;
  cout << "Size of boolean: " << sizeof(bool) << endl;
  cout << "Size of float: " << sizeof(float) << endl;

  return 0;
}

/*
  How much space does the following data types take?
  - int
  - bool
  - float
*/

/*
  - The amount of space used by each data type can vary depending on the platform and implementation, but here are some general guidelines:
      - int: Typically takes 4 bytes (32 bits) of memory
      - bool: Typically takes 1 byte (8 bits) of memory, but may be optimized to take less in some implementations
      - float: Typically takes 4 bytes (32 bits) of memory
  - It's important to note that these are just general guidelines and may not be true for all platforms or implementations. Additionally, some platforms may use different sizes for these data types depending on compiler flags or other settings.


*/