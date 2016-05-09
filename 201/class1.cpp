/*
 * class1.cpp
 *
 */

#include <iostream>

#define ELEM(array) (sizeof (array) / sizeof *(array))

class SStudent
{
 public:
  char szName[16];
  int  nJapanese;
  int  nMath;
  int  nEnglish;
};

void Disp(const SStudent& student)
{
  using namespace std;
  cout << "名前 : "   << student.szName    << endl
       << "　国語 : " << student.nJapanese << " 点, "
      "数学 : "   << student.nMath     << " 点, "
      "英語 : "   << student.nEnglish  << " 点" << endl;
}

int main()
{
  SStudent students[] = {
    { "赤井孝",   73, 98, 86, },
    { "笠井大介", 64, 45, 40, },
    { "吉田叶",   76, 78, 69, },
  };
  int      i;

  for(i = 0; i < ELEM(students); i++)
    Disp(students[i]);

  return 0;
}
