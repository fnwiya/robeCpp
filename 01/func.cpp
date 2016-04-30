/*
 * func.cpp
 *
 */

#include <iostream>

int f(int x, int y)
{
  return 2 * x + y;
}

int main()
{
  using namespace std;
  cout << f(1, 2) << endl;
  cout << f(182, 144) << endl;
  return 0;
}

