/*
 * cstruct.cpp
 *
 */

#include <iostream>

class CInt
{
 public:
  int m_num;
  CInt();
  void Disp();
};

CInt::CInt()
{
  m_num = 0;
}

void CInt::Disp()
{
  using namespace std;
  cout << m_num << endl;
}

int main()
{
  CInt a, b, c, d;

  a.Disp();
  b.Disp();
  c.Disp();
  d.Disp();

  return 0;
}
