#include <bits/stdc++.h>
using namespace std;

int main()
{
      int T;
      cin >> T;
      while (T--)
      {
            int n;
            cin >> n;
            string s;
            cin >> s;
            int insertions = 0;
            for (int i = 0; i < n; i++)
            {
                  if (s[i] == s[i + 1])
                  {
                        insertions++;
                  }
            }

            cout << insertions << endl;

            return 0;
      }
}