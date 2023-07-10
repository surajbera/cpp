#include <iostream>
using namespace std;

int swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;

  return 0;
}

int main()
{
  int num1, num2;

  cout << "Enter the first integer:";
  cin >> num1;

  cout << "Enter the second integer:";
  cin >> num2;

  swap(&num1, &num2);

  cout << "The first integer is now: " << num1 << endl;
  cout << "The second integer is now: " << num2 << endl;

  return 0;
}