#include <iostream>
using namespace std;

int main()
{
      int *a = new int[3];
      int *b = new int[3];
      for (int i = 0; i < 3; i++)
      {
            cin >> a[i];
            b[i] = a[i];
      }
      // delete dynamic array
      delete[] a;
      // increase size of dynamic array
      a = new int[6];
      for (int i = 0; i < 3; i++)
      {
            a[i] = b[i];
      }
      // delete old dynamic array
      delete[] b;
      return 0;
}
