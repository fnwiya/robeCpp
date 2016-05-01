/*
 * strlen.cpp
 *
 */

#include <iostream>
#include <string.h>

int main()
{
  using namespace std;
  int i;
  char szHello[] = "Hello";
  cout << "[" << szHello << "]" << endl;
  for (i = 0; i < strlen(szHello); i++) {
    cout << (int)(unsigned char)szHello[i] << ", ";
  }
  cout << (int)(unsigned char)szHello[i] << endl;

  return 0;
}

