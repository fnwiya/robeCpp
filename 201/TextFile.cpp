/*
 * TextFile.cpp
 *
 */

#include <stdio.h>
#include "Maindefs.h"
#include "TextFile.h"

bool CTextFile::Open(const char* pszFile, const char* pszFlags)
{
    Close();

    char bufFlags[8];
    if(ModifyFlags(pszFlags, bufFlags, numof(bufFlags)) == false)
        return false;

    m_pfile = fopen(pszFile, bufFlags);
    return (m_pfile != NULL);
}

bool CTextFile::ModifyFlags(const char* pszSource, char* pszDest, int nSize)
{
    bool bBinary;  // 'b' の指定があるかどうか

    bBinary = (strchr(pszSource, 'b') != NULL);

    // フラグが多すぎるときは false を返す
    if((int)strlen(pszSource) - bBinary > nSize - 1)
        return false;

    // 強制的にテキストモードで開きます
    // 'b' 以外の文字だけコピーします
    for(; *pszSource; pszSource++)
    {
        if(*pszSource != 'b')
        {
            *pszDest = *pszSource;
            pszDest++;
        }
    }
    return true;
}
