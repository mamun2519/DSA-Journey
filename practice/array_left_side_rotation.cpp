#include <bits/stdc++.h>
using namespace std;

int main()
{

      int n;
      cin >> n;
      int a[n];
      for (int i = 0; i < n; i++)
            cin >> a[i];

      int firstIndex = a[0];

      for (int i = 0; i < n; i++)
      {
            a[i - 1] = a[i];
      }
      a[n - 1] = firstIndex;

      for (int i = 0; i <= n; i++)
      {
            cout << arr[i] << " ";
      }
      return 0;
}