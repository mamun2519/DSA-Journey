#include <bits/stdc++.h>
using namespace std;

// int main()
{

      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
            cin >> arr[i];

      // rotated the array--------
      // store the first index

      int firstValue = arr[0];
      for (int i = 0; i < n - 1; i++)
      {
            arr[i] = arr[i + 1];
      }
      arr[n - 1] = firstValue;
      // pint the array
      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }
      return 0;
}