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
            cin >> b[i];

      // merge two array in the c array
      int c[n + m];
      int k = 0;
      int i = 0, j = 0;

      while (i < n && j < m)
      {
            if (a[i] < b[j])
            {
                  /* code */
                  c[k] = a[i];
                  k++;
                  i++;
            }
            else
            {
                  c[k] = b[j];
                  k++;
                  j++;
            }
      }
      while (i < n)
      {
            c[k] = a[i];
            k++;
            i++;
            /* code */
      }

      while (j < m)
      {
            c[k] = b[j];
            k++;
            j++;
            /* code */
      }

      // print the merged array
      for (int i = 0; i < n + m; i++)
      {
            cout << c[i] << " ";
      }
      return 0;

      return 0;
}