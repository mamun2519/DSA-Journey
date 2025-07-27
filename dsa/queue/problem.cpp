#include <bits/stdc++.h>
using namespace std;

int main()
{

      int t;
      cin >> t;
      int n;
      cin >> n;
      int arr[n];

      while (t--)
      {
            int maxValue = arr[0];
            for (int i = 0; i < n; i++)
            {
                  cin >> arr[i];
            }

            for (int i = 0; i < n; i++)
            {
                  if (arr[i] > maxValue)
                  {
                        maxValue = arr[i];
                  }
            }
            cout << maxValue;
      }

      return 0;
}