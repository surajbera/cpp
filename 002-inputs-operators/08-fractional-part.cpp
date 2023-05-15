#include <iostream>
using namespace std;

int main()
{
  float input;
  cin >> input;
  int integer_value = (int)input;
  float integer_value_converted_to_float = (float)integer_value;
  float fractional_value = input - integer_value_converted_to_float;
  cout << fractional_value;

  return 0;
}