/*
 * TextFile.h
 *
 */

#ifndef __SCHEME_TEXTFILE__
#define __SCHEME_TEXTFILE__

#include <stdio.h>
#include <string.h>
#include "File.h"

const int TF_OVERFLOW = EOF - 1;

class CTextFile : public CFile
{
public:
    bool Open(const char* pszFile, const char* pszFlags);

private:
    bool ModifyFlags(const char* pszSource, char* pszDest, int nSize);

};

#endif // __SCHEME_TEXTFILE__
