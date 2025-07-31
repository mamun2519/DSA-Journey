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
            string s;
            cin >> s;
            // your code goes here
            string ans = "";
            for (int i = 0; i < n; i++)
            {
                  string pair = s.substr(i, 2);
                  if (pair == "00")
                        ans += 'A';
                  else if (pair == "01")
                        ans += 'B';
                  else if (pair == "10")
                        ans += 'C';
                  else if (pair == "11")
                        ans += 'D';
            }
            cout << ans << endl;
      }
}
