/*
  Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
  Input : side1 = 5 side2 = 4 side3 = 4
  Output: This is an Isosceles triangle.
*/

#include <iostream>
using namespace std;

int main()
{
  int sideA, sideB, sideC;
  cout << "Program to find out the type of triangle" << endl;
  cout << "Enter the side A: ";
  cin >> sideA;
  cout << "Enter the side B: ";
  cin >> sideB;
  cout << "Enter the side C: ";
  cin >> sideC;

  if (sideA == sideB && sideB == sideC)
  {
    cout << "This is an Equilateral triangle." << endl;
  }
  else if ((sideA == sideB && (sideA != sideC)) || (sideB == sideC && (sideB != sideA)) || (sideA == sideC && (sideA != sideB)))
  {
    cout << "This is an Isosceles triangle." << endl;
  }
  else
  {
    cout << "This is a Scalene triangle." << endl;
  }

  return 0;
}