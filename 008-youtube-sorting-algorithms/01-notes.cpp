#include <iostream>
#define MAX 100
using namespace std;

int main()
{
  int arr[MAX];
  cout << arr;

  return 0;
}

/*
  - When you print an array in C++, it outputs the address of the first element of the array.
  - This is because in C++, the name of an array is essentially a pointer to the first element of the array.
*/