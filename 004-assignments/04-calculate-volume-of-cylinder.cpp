#include <iostream>
using namespace std;

int main()
{
  float r, h, v;
  cout << "Let's calculate volume of a cylinder. Enter radius and height respectively:-" << endl;
  cin >> r >> h;
  v = 3.14 * (r * r) * h;
  cout << "Volume of cylinder is: " << v;

  return 0;
}

/*
  Volume of a cylinder: 3.14 x r x r x h
*/