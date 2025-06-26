#include <bits/stdc++.h>
using namespace std;

int main()
{

      // allocate the single integer
      int *prt = new int;
      *prt = 10;
      cout << *prt;

      // allocate array dynamically

      int *student = new int[4];

      for (int i = 0; i < 5; i++)
            student[i] = i + 1;

      // pint the array
      for (int i = 0; i < 4; i++)
      {
            cout << student[i] << " ";
      }

      // delete the memory
      delete prt;
      delete[] student;

      return 0;
}