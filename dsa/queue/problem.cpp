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
            int d[n];
            for (int i = 0; i < n; i++)
            {
                  cin >> d[i];
            }
            // your code goes here
            bool isSorted = true;
            for (int i = 0; i < n - 1; i++)
            {
                  if (d[i] > d[i + 1])
                  {
                        isSorted = false;
                        break;
                  }
            }
            if (isSorted)
            {
                  cout << "Yes" << endl;
            }
            else
            {
                  cout << "No" << endl;
            }
      }
}