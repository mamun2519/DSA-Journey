#include <bits/stdc++.h>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n;
            cin >> n;
            int a[n];
            for (int i = 0; i < n; i++)
            {
                  cin >> a[i];
            }
            // your code goes here
            int firstMax = a[0];
            int secondMax = INT_MIN;
            for (int i = 0; i < n; i++)
            {
                  if (a[i] > firstMax)
                  {
                        secondMax = firstMax;
                        firstMax = a[i];
                  }
                  else if (a[i] > secondMax && a[i] < firstMax)
                  {
                        secondMax = a[i];
                  }
            }
            cout << firstMax + secondMax << endl;
      }
}
