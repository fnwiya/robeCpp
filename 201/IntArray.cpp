/*
 * IntArray.cpp
 *
 */

#include "IntArray.h"
#include <iostream>
#include <memory.h>
#include <process.h>

CIntArray::CIntArray(CIntArray& rother)
{
  using namespace std;
  if (rother.Success() == false) {
    m_pnum = NULL;
    m_nNumOf = 0;
  }
  else {
    m_pnum = new int[rother.NumOf()];
    if (m_pnum == NULL) {
      m_nNumOf = 0;
      return;
    }
    memcpy(m_pnum, rother.m_pnum, rother.SizeOf());
    m_nNumOf = rother.m_nNumOf;
  }
  cout << "copy constructor has been called" << endl;
}
