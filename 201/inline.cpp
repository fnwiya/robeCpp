/*
 * inline.cpp
 *
 */

#include <stddef.h>

class CIntArray
{
 private:
  int* m_pnum;
  int m_nNumOf;
 public:
  CIntArray();
  bool Success();
  int NumOf();
  int SizeOf();
};

inline bool CIntArray::Success()
{
  return m_pnum != NULL;
}

inline int CIntArray::NumOf()
{
  return m_nNumOf;
}

inline int CIntArray::SizeOf()
{
  return m_nNumOf * sizeof *m_pnum;
}
