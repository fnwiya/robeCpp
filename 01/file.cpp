#include <stdio.h>

int main()
{
  FILE* pFile;

  pFile = fopen("text.txt", "w");
  fputs("something\n", pFile);
  fclose(pFile);
  
  return 0;
}
