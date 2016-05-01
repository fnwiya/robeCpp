/*
 * struct.cpp
 *
 */

#include <iostream>

#define ELEM(array) (sizeof (array) / sizeof *(array))

struct SStudent
{
  char szName[16];
  int nJapanese;
};

void Disp(const SStudent &student)
{
  using namespace std;
  
  cout << "name: " << student.szName << endl
      << "japanese: " << student.nJapanese << endl;
}

int main()
{
  SStudent students[] = {
    { "a", 60},
    { "b", 70}
  };
  int i;
  for (i = 0; i < ELEM(students); i++) {
    Disp(students[i]);
  }

  return 0;
}


