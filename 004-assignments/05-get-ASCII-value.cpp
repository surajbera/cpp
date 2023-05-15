#include <iostream>
using namespace std;

int main()
{
  char ch1, ch2;
  cout << "Enter 2 numbers: ";
  cin >> ch1 >> ch2;
  cout << "First character is: " << ch1 << endl
       << "Second character is: " << ch2 << endl;
  cout << "ASCII difference is " << ch1 - ch2;
  return 0;
}

/*
  - When we print out characters, characters will be printed out
  - But when we substract characters, ASCII values will be subtracted
*/