#include <iostream>
#include "IntArray.h"

void Viss(const int num)
{
  using namespace std;
  cout << "Viss : No." << num << endl;
}

void Disp(CIntArray array)
{
  using namespace std;
  Viss(2);
  int i;
  for (i = 0; i < array.NumOf(); i++) {
    cout << array.Get(i) << ' ';
  }
  cout << endl;
  Viss(3);
}

int main()
{
  CIntArray arrayAtoZ('Z' - 'A' + 1);
  int i;
  for (i = 0; i < arrayAtoZ.NumOf(); i++) {
    arrayAtoZ.Set(i, 'A' + i);
  }
  Viss(1);
  Disp(arrayAtoZ);
  Viss(4);
  return 0;
}
