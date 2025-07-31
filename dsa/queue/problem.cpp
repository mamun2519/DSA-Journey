#include <bits/stdc++.h>
using namespace std;

int main()
{
      int T;
      cin >> T;
      while (T--)
      {

            string s;
            getline(cin, s);
            stringstream ss(s);
            string word;
            string result;

            for (int i = 0; i < s.size(); i++)
            {
                  if (s[i] == s.size() || s[i] == ' ')
                  {
                  }
            }
            else
            {
                  result += toupper(s[i]);
            }
      }

      return 0;
}