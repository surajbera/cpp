#include <iostream>
#include <string>
using namespace std;

string sumOfSquares(int input)
{
  if (input < 1 || input != static_cast<int>(input))
  {
    return "Invalid input: Input must be a positive integer";
  }
  int inputNum = 0;
  for (int i = 1; i <= input; i++)
  {
    inputNum += i * i;
  }
  return to_string(inputNum);
}

int main()
{
  int inputNum;
  cout << "Enter a number: ";
  cin >> inputNum;
  cout << sumOfSquares(inputNum) << endl;

  return 0;
}