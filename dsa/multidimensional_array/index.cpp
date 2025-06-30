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
      bool result = false;

      for (int i = 0; i < n; i++)
      {
            if (a[i] == target)
            {
                  result = true;
                  break;
            }
      }

      if (result)
      {
            cout << 1;
      }
      else
      {
            cout << -1;
      }
      return 0;
}