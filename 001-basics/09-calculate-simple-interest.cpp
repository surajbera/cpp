#include <iostream>
using namespace std;

int main()
{
  float principal, rate_of_interest, time, simple_interest;
  cin >> principal >> rate_of_interest >> time;
  simple_interest = (principal * rate_of_interest * time) / 100;

  cout << "Simple Interest = " << simple_interest << endl;

  return 0;
}