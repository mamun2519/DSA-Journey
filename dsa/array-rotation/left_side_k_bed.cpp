#include <bits/stdc++.h>
using namespace std;
// using mod method
int main()
{
      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
            cin >> arr[i];

      int k;
      cin >> k;
      // define a new array
      int res[n];

      for (int i = 0; i < n; i++)
      {
            int index = (i + n - k) % n;
            res[index] = arr[i];
      }

      for (int i = 0; i < n; i++)
            cout << res[i] << " ";

      return 0;
}