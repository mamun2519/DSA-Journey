#include <bits/stdc++.h>
using namespace std;

int main()
{

      ios::sync_with_stdio(false);
      cin.tie(nullptr);
      int n;
      cin >> n;
      while (n--)
      {
            string s;
            cin >> s;
            if (s.size() < 10)
            {
                  cout << s.front() << (s.size() - 2) << s.back() << endl;
            }
            else
            {
                  cout << s << endl;
            }
      }
}