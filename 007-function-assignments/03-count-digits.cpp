#include <iostream>
using namespace std;

int countDigit(int number)
{
  int count = 0;

  while (number)
  {
    count++;
    number /= 10;
  }

  return count;
}

int main()
{
  int number;
  cin >> number;
  cout << countDigit(number) << endl;

  return 0;
}