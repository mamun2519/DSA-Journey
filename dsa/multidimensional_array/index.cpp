#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int a[n];

      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
      }

      int target;
      cin >> target;

      for (int i = 0; i < n; i++)
      {
            if (a[i] == target)
            {
                  cout << i << endl; // print the 0-indexed position
                  return 0;          // exit after first match
            }
      }

      // If target not found
      cout << -1 << endl;
      return 0;
}
