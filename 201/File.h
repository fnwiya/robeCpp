/*
 * File.h
 *
 */

#ifndef __SCHEME_FILE__
#define __SCHEME_FILE__

#include <stdio.h>

class CFile
{
 private:
  FILE* m_pfile;
  bool m_bCopy;
 public:
  CFile();
  CFile(const CFile& rother);
  ~CFile();
 public:
  bool Open(const char* pszFile, const char* pszFlags);
  void Close();
 private:
  virtual bool ModifyFlags(const char* pszSource, char* pszDest, int nSize);
 public:
  size_t Read(void* pData, size_t nSize);
  size_t Write(const void* pData, size_t  nSize);
 public:
  bool IsValid() const;
  bool Eof();
};

inline bool CFile::IsValid() const
{
  return (m_pfile != NULL);
}

#endif // __SCHEME_FILE__
