#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int arr[n];

      for (int i = 0; i < n; i++)
            cin >> arr[i];

      // check if the array is sorted
      bool isSorted = true;
      for (int i = 0; i < n; i++)
      {
            if (arr[i] > arr[i + 1])
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