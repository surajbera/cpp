#include <iostream>
using namespace std;

int getProduct(int *a, int *b)
{
  int product = 0;
  product = *a * *b;
  return product;
}

int main()
{
  int a, b;
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;
  cout << getProduct(&a, &b);
  return 0;
}