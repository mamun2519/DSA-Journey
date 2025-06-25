#include <bits/stdc++.h>
using namespace std;

/* int main()
{


      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
            cin >> arr[i];

      // right side one time rotated
      int lastIndex = arr[n - 1];
      // cout << "last index" << arr[n - 1];

      for (int i = n - 1; i > 0; i--)
      {
            arr[i] = arr[i - 1];
      }
      arr[0] = lastIndex;

      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }
      return 0;
}
      */

int main()
{
      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
            cin >> arr[i];

      //
      int lastValue = arr[n - 1];

      for (int i = n - 1; i > 0; i--)
      {
            arr[i] = arr[i - 1];
      }

      arr[0] = lastValue;
      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }

      return 0;
}