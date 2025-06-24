#include <bits/stdc++.h>
using namespace std;

int main()
{

      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
            cin >> arr[i];

      // rotated the array--------
      // store the first index
      int firstIndex = arr[0];
      for (int i = 0; i < n - 1; i++)
      {
            arr[i - 1] = arr[i];
      }
      arr[n - 1] = firstIndex;
      return 0;
}