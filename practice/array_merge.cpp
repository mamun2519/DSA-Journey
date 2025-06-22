#include <bits/stdc++.h>
using namespace std;

int main()
{
      // first A array
      int n;
      cin >> n;
      int a[n];
      for (int i = 0; i < n; i++)
            cin >> a[i];

      // 2nd B Array
      int m;
      cin >> m;
      int b[m];
      for (int i = 0; i < m; i++)
            cin >> a[i];

      // merge two array in the c array
      int c[n + m];
      int k = 0;

      for (int i = 0; i < n; i++)
      {
            c[i] = a[i];
            k++;
      }

      for (int j = 0; j < m; j++)
      {
            c[j] = b[j];
            k++;
      }
      return 0;
}