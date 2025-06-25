#include <bits/stdc++.h>
using namespace std;

int main()
{

      int n;
      cin >> n;
      int a[n];
      for (int i = 0; i < n; i++)
            cin >> a[i];

      int k;
      cin >> k;
      k = k % n;

      int res[n];

      for (int i = 0; i < n; i++)
      {
            int index = (i + n - k) % n;
            res[index] = a[i];
      }

      for (int i = 0; i < n; i++)
            cout << a[i] << " ";

      return 0;
}