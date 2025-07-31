#include <bits/stdc++.h>
using namespace std;

int main()
{
      int T;
      cin >> T;
      while (T--)
      {

            string s;
            cin >> s;

            string titleCase = "";
            for (int i = 0; i < s.size(); i++)
            {
                  if (i == 0 || s[i - 1] == ' ')
                  {
                        titleCase += toupper(s[i]);
                  }
                  else
                  {
                        titleCase += tolower(s[i]);
                  }
            }
            cout << titleCase << endl;
      }

      return 0;
}