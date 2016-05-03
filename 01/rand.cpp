/*
 * rand.cpp
 *
 */

#include <iostream>
#include <stdio.h>
#include <time.h>

inline void InitRand()
{
  srand((unsigned int)time(NULL));
}

inline int Dice()
{
  return rand() % 6 + 1;
}

int main()
{
  using namespace std;
  int i;
  InitRand();
  for (i = 0; i < 20; i++) {
    cout << Dice() + Dice() << ' ';
    cout << flush;
  }
  return 0;
}

