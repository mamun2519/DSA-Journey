#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
            cin >> arr[i];

      int m;
      cin >> m;
      int arr2[m];
      for (int i = 0; i < m; i++)
            cin >> arr2[i];

      int o[n + m];
      int k = 0;

      // iterate n array and copy elements to o
      for (int i = 0; i < n; i++)
      {
            o[k] = arr[i];
            k++;
      }

      // iterate m array and copy elements to o
      for (int j = 0; j < m; j++)
      {
            o[k] = arr2[j];
            k++;
      }

      // print the merged array
      for (int i = 0; i < n + m; i++)
      {
            cout << o[i] << " ";
      }

      return 0;
}
