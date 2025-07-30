#include <bits/stdc++.h>
using namespace std;

int main()
{
      int y;
      cin >> y; // Read the number of words
      for (int year = y + 1;; y++)
      {
            string s;
            cin >> s; // Read each word
            set<char> st(s.begin(), s.end());
            if ((int)st.size() == (int)s.size())
            { // all digits are unique
                  cout << year << '\n';
                  break;
            }
      }
      return 0;
}
