/*
 * file2.cpp
 *
 */

#include <stdio.h>

int main()
{
  FILE* pFile;
  char buffer[128];

  pFile = fopen("text.txt", "r");
  fgets(buffer, 128, pFile);
  printf(buffer);
  fclose(pFile);
  
  return 0;
}
