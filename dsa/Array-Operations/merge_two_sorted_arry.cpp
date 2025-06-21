#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int a[n];
      for (int i = 0; i < n; i++)
            cin >> a[i];

      int m;
      cin >> m;
      int b[m];
      for (int i = 0; i < m; i++)
            cin >> b[i];

      int c[n + m];

      int k = 0;

      // merge two sorted arrays
      int i = 0, j = 0;

      // a array is sorted
      while (i < n && j < m)
      {
            if (a[i] < b[j])
            {
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

      // if any elements left in a array
      while (i < n)
      {
            c[k] = a[i];
            k++;
            i++;
      }
      // if any elements left in b array
      while (j < m)
      {
            c[k] = b[j];
            k++;
            j++;
      }
      // print the merged array
      for (int i = 0; i < n + m; i++)
      {
            cout << c[i] << " ";
      }
      return 0;
}