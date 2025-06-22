#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int a[n];
      for (int i = 0; i < n; i++)
            cin >> a[i];
      // check the sorted array
      bool isSorted = true;
      for (int i = 0; i < n; i++)
      {

            if (a[i] > a[i + 1])
            {
                  isSorted = false;
                  break;
            }
      }
      if (isSorted)
            cout << "Array is sorted" << endl;
      else
            cout << "Array is not sorted" << endl;
      return 0;
}